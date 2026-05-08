#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    


int escolha;

printf("digite se quer jogar o cavalo para: 1:cima ou 2:baixo\n");
printf("digite 3 se quer jogar a torre\n");
printf("digite 4 se quer jogar o bispo\n");
printf("digite 5 se quer jogar a Rainha\n");
printf("\n");
scanf("%d", &escolha);
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
int torre =1;

while (torre <=5)
{
    printf("a torre moveu %d vezes \n",torre);
    printf("direita>\n");
    torre++;
    printf("\n");
}
break;

case 4:
int bispo =1;


do
{
    printf(" o bispo moveu %d vezes\n",bispo);
    printf(" Cima,Direita\n");
    bispo++;
    printf("\n");

} while (bispo <=5);
break;


case 5:

for (int rainha = 1; rainha<= 8; rainha++)
{
  printf("a rainha moveu %d vezes\n",rainha);  
  printf("<esquerda\n");
  printf("\n");

}
break;

default:{

printf("opção invalida\n");
}
break;
}


}





































