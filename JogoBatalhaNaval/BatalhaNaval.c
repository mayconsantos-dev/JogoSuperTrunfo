#include <stdio.h>
#include <stdlib.h>

#define TAM_TABULEIRO 10
#define TAM_HABILIDADE 5 // Matrizes de habilidade serão 5x5

int main() {
    int matriz[TAM_TABULEIRO][TAM_TABULEIRO];
    int erro_validacao = 0;

    // =========================================================================
    // ETAPA 1: Inicializar o Tabuleiro com 0 (Representando Água)
    // =========================================================================
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            matriz[i][j] = 0;
        }
    }

    // =========================================================================
    // ETAPA 2: Posicionamento dos Navios (Valor 3)
    // =========================================================================
    if (matriz[0][2] == 0 && matriz[0][3] == 0 && matriz[0][4] == 0) {
        matriz[0][2] = 3; matriz[0][3] = 3; matriz[0][4] = 3;
    } else { erro_validacao = 1; }

    if (matriz[5][7] == 0 && matriz[6][7] == 0 && matriz[7][7] == 0) {
        matriz[5][7] = 3; matriz[6][7] = 3; matriz[7][7] = 3;
    } else { erro_validacao = 1; }

    if (matriz[2][2] == 0 && matriz[3][3] == 0 && matriz[4][4] == 0) {
        matriz[2][2] = 3; matriz[3][3] = 3; matriz[4][4] = 3;
    } else { erro_validacao = 1; }

    if (matriz[1][7] == 0 && matriz[2][6] == 0 && matriz[3][5] == 0) {
        matriz[1][7] = 3; matriz[2][6] = 3; matriz[3][5] = 3;
    } else { erro_validacao = 1; }

    // =========================================================================
    // ETAPA 3: Criação Dinâmica das Matrizes de Habilidade (5x5)
    // =========================================================================
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];
    int centro = TAM_HABILIDADE / 2; // Posição (2,2) é o centro absoluto

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            // Lógica do Cone (Expandindo para baixo a partir do centro)
            if (i >= centro && j >= (centro - (i - centro)) && j <= (centro + (i - centro))) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }

            // Lógica da Cruz (Linha ou coluna central)
            if (i == centro || j == centro) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }

            // Lógica do Octaedro/Losango (Distância de Manhattan <= raio)
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // =========================================================================
    // ETAPA 4: Sobreposição das Habilidades no Tabuleiro (Valor 1)
    // =========================================================================
    
    // Definindo pontos de origem estratégicos no tabuleiro para replicar a saída
    int origemConeLinha = 6, origemConeColuna = 3;      
    int origemOctaedroLinha = 4, origemOctaedroColuna = 7; 

    // Aplicando a habilidade em Cone no tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (cone[i][j] == 1) {
                int tabLinha = origemConeLinha + (i - centro);
                int tabColuna = origemConeColuna + (j - centro);
                if (tabLinha >= 0 && tabLinha < TAM_TABULEIRO && tabColuna >= 0 && tabColuna < TAM_TABULEIRO) {
                    // Substitui apenas se for água para não apagar o navio visualmente
                    if (matriz[tabLinha][tabColuna] == 0) {
                        matriz[tabLinha][tabColuna] = 1; 
                    }
                }
            }
        }
    }

    // Aplicando a habilidade em Octaedro no tabuleiro (área da direita na imagem)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (octaedro[i][j] == 1) {
                int tabLinha = origemOctaedroLinha + (i - centro);
                int tabColuna = origemOctaedroColuna + (j - centro);
                if (tabLinha >= 0 && tabLinha < TAM_TABULEIRO && tabColuna >= 0 && tabColuna < TAM_TABULEIRO) {
                    matriz[tabLinha][tabColuna] = 2; // Representado por '2' para diferenciar no mapa da imagem
                }
            }
        }
    }

    // =========================================================================
    // ETAPA 5: Exibição do Tabuleiro (Idêntico ao Terminal do VS Code)
    // =========================================================================
    
    // Cabeçalho numérico de colunas (0 a 9) com o alinhamento correto
    printf("  "); 
    for (int j = 0; j < TAM_TABULEIRO; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Corpo do tabuleiro com índices laterais de 0 a 9
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%d ", i); // Índice da linha lateral esquerda

        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", matriz[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}