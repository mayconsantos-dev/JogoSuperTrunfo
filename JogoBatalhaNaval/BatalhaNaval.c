#include <stdio.h>

#define linhas 10
#define colunas 10

int main() {
    int matriz[linhas][colunas];
    char letra[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    // Variável para controle de erros de validação
    int erro_validacao = 0;

    // =========================================================================
    // ETAPA 1: Inicializar o Tabuleiro com 0 (Representando Água)
    // =========================================================================
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }

    // =========================================================================
    // ETAPA 2: Posicionamento e Validação dos 4 Navios
    // =========================================================================
    
    /* --- NAVIO 1: Horizontal (Tamanho 3, Linha 0, Colunas 2 a 4) --- */
    // Validação: Checa limites e sobreposição
    if (0 < linhas && 4 < colunas && matriz[0][2] == 0 && matriz[0][3] == 0 && matriz[0][4] == 0) {
        matriz[0][2] = 3; matriz[0][3] = 3; matriz[0][4] = 3;
    } else {
        erro_validacao = 1;
    }

    /* --- NAVIO 2: Vertical (Tamanho 3, Coluna 7, Linhas 5 a 7) --- */
    // Validação: Checa limites e sobreposição
    if (7< linhas && 7 < colunas && matriz[5][7] == 0 && matriz[6][7] == 0 && matriz[7][7] == 0) {
        matriz[5][7] = 3; matriz[6][7] = 3; matriz[7][7] = 3;
    } else {
        erro_validacao = 1;
    }

    /* --- NAVIO 3: Diagonal Esquerda (Tamanho 3, Linhas 2 a 4, Colunas 2 a 4) --- */
    // Validação: Checa se as 3 posições estão livres na memória
    if (matriz[2][2] == 0 && matriz[3][3] == 0 && matriz[4][4] == 0) {
        matriz[2][2] = 3; matriz[3][3] = 3; matriz[4][4] = 3;
    } else {
        erro_validacao = 1;
    }

    /* --- NAVIO 4: Diagonal Direita (Tamanho 3, Linhas 1 a 3, Colunas 7 a 5) --- */
    // Validação: Checa se as posições da diagonal secundária estão livres
    if (matriz[1][7] == 0 && matriz[2][6] == 0 && matriz[3][5] == 0) {
        matriz[1][7] = 3; matriz[2][6] = 3; matriz[3][5] = 3;
    } else {
        erro_validacao = 1;
    }

    // Alerta o programador caso ocorra alguma colisão ou erro de limite durante o desenvolvimento
    if (erro_validacao == 1) {
        printf("AVISO: Houve um erro de sobreposicao ou limite no posicionamento!\n\n");
    }

    // =========================================================================
    // ETAPA 3: Exibição do Tabuleiro Completo
    // =========================================================================
    
    // Imprime o cabeçalho de letras com espaçamento para alinhar
    printf("   "); 
    for (int j = 0; j < 10; j++) {
        printf("%c ", letra[j]);
    }
    printf("\n");

    // Loops aninhados que apenas LÊEM o tabuleiro já montado
    for (int i = 0; i < linhas; i++) {
        
        // Imprime o número da linha na lateral esquerda (1 a 10)
        printf("%-2d ", i + 1); 

        for (int j = 0; j < colunas; j++) {
            // Imprime o que está guardado na célula atual
            printf("%d ", matriz[i][j]); 
        }
        
        printf("\n"); // Pula de linha ao terminar as 10 colunas
    }

    return 0;
}