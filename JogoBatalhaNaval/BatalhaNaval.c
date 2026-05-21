#include <stdio.h>

int main() {
    


    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
  
  

    // 1. Preenchendo a matriz com zeros usando os dois loops 'for'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }


{

    // Exemplo: Colocando o navio "3 3 3" na linha 3 (índice 2) para testar igual ao vídeo

   tabuleiro[2][3] = 3;
   tabuleiro[2][4] = 3;
   tabuleiro[2][5] = 3;


         tabuleiro[5][7] = 3; 
     tabuleiro[6][7] = 3;
     tabuleiro[7][7] = 3;

}





    // =======================================================
    // 2. IMPRESSÃO DO TABULEIRO (Exatamente igual ao vídeo)
    // =======================================================
    
    printf("TABULEIRO BATALHA NAVAL\n");

    // Imprime o cabeçalho de letras: "  A B C D E F G H I J"
    printf("   "); // Espaço inicial para alinhar com os números da lateral
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    // Imprime as linhas com os números na lateral esquerda
    for (int i = 0; i < 10; i++) {
        
        // Imprime o número da linha. 
        // Usamos %-2d para que o "10" não empurre o tabuleiro para o lado
        printf("%-2d ", i+1); 
        
        // Imprime os valores da matriz (os zeros ou navios)
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao final de cada linha da matriz
    }

// Exibe a mensagem se a flag 'sobreposto' foi ativada
  
// =======================================================
  // =======================================================
    // EXIBIÇÃO DAS COORDENADAS (Corrigido e Alinhado)
    // =======================================================
    printf("\n--- COORDENADAS DOS NAVIOS ---\n");
    
    printf("Navio Horizontal (Tamanho 3):\n");
    printf(" - Parte 1: Linha 3, Coluna %c (Coordenada: %c3)\n", linha[3], linha[3]);
    printf(" - Parte 2: Linha 3, Coluna %c (Coordenada: %c3)\n", linha[4], linha[4]);
    printf(" - Parte 3: Linha 3, Coluna %c (Coordenada: %c3)\n", linha[5], linha[5]);

    printf("\nNavio Vertical (Tamanho 3):\n");
    printf(" - Parte 1: Linha 6, Coluna %c (Coordenada: %c6)\n", linha[7], linha[7]);
    printf(" - Parte 2: Linha 7, Coluna %c (Coordenada: %c7)\n", linha[7], linha[7]);
    printf(" - Parte 3: Linha 8, Coluna %c (Coordenada: %c8)\n", linha[7], linha[7]);

}