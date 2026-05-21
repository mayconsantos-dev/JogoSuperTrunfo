#include <stdio.h>
#include <locale.h>

void loopmovertorre(int casas){
if (casas >0)
{
    printf("direita\n");

    loopmovertorre(casas - 1);
}
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // 1. Condição de parada (Caso Base)

    // 2. Loops Aninhados (Movimento por casa)
    for (int v = 0; v < 1; v++) { // Loop externo (Vertical)
        for (int h = 0; h < 1; h++) { // Loop interno (Horizontal)
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispoRecursivo(casas - 1); // 3. Chamada Recursiva
}



void loopmoverrainha(int casainicial){
    if (casainicial <=0) return;
    {
        printf("esquerda\n");
    }

    loopmoverrainha(casainicial-1);


}















int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

/*
Cavalo	while + for	O while controla a execução principal, e o for repete o movimento vertical.
Torre	while	Executa enquanto a condição for verdadeira (testa antes de rodar).
Bispo	do-while	Garante que o bispo se mova pelo menos uma vez antes de checar a condição.
Rainha	for	Ideal para quando você já sabe exatamente o limite (8 casas).
*/

int escolha;

printf("digite se quer jogar o cavalo para: 1:cima ou 2:baixo\n");
printf("digite 3 se quer jogar a torre\n");
printf("digite 4 se quer jogar o bispo\n");
printf("digite 5 se quer jogar a Rainha\n");
printf("\n");
scanf(" %d", &escolha);
printf("\n");

switch (escolha)
{

case 1:
{
    
int cavalo;
 cavalo=1;
    while (cavalo--)

    {
        printf("cavalo moveu para:\n");
        for (int i = 0; i < 2; i++)
        {
            printf("cima\n");
        }
        printf("direita\n");
    
    }
    
    break;
}
case 2:
{
    int cavalo;
     cavalo =1;
      while (cavalo--)
      
    {
        printf("cavalo moveu para:\n");
        for (int i = 0; i < 2; i++)
        {
            printf("baixo\n");
        }
        printf("esquerda\n");
    
    }
    break;
}
    
case 3:
{
    
    loopmovertorre(5);

break;
}

case 4:
{

    moverBispoRecursivo(5);

break;
}

case 5:
{
    printf("a rainha moveu \n");
    loopmoverrainha(8);


break;
}

default:
{

printf("opção invalida\n");
}
break;
}


}





































