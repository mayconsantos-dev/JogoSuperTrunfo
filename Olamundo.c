#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    

int torre =1;
int bispo =1;


while (torre <=5)
{
    printf("a torre moveu %d vezes \n",torre);
    printf("direita>\n");
    torre++;
    
}

do
{
    printf(" o bispo moveu %d vezes\n",bispo);
    printf(" Cima,Direita\n");
    bispo++;

} while (bispo <=5);



for (int rainha = 1; rainha<= 8; rainha++)
{
  printf("a rainha moveu %d vezes\n",rainha);  
  printf("<esquerda\n");
  

}













}