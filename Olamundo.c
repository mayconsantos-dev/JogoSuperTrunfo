#include <stdio.h>

int main(){

char Estado [20];
char CodigodaCarta[5];
char NomeDaCidade [20];
int Populacao;
float AreaKm;
float PIB;
int NumeroDePontosturisticos;


char Estado2[20];
char CodigodaCarta2[5];
char NomeDaCidade2 [20];
int Populacao2;
float AreaKm2;
float PIB2;
int NumeroDePontosturisticos2;

printf("digite as informações da carta 1\n");
printf("digite a letra do seu Estado:\n");
scanf("%s", Estado);

printf("digite o codigo do seu Estado:\n");
scanf("%s", CodigodaCarta);

printf("digite o nome do seu Estado:\n");
scanf("%s", NomeDaCidade);

printf("digite a População do seu Estado:\n");
scanf("%d", &Populacao);

printf("digite a Área em Km:²\n");
scanf("%f", &AreaKm);

printf("digite o PIB do seu Estado:\n");
scanf("%f", &PIB);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &NumeroDePontosturisticos);


float DensidadePopulacional;
float PIBperCapita;

DensidadePopulacional = (float) Populacao/AreaKm;
PIBperCapita =(float) PIB/Populacao;

printf("as informações da carta 1 são:\n");
printf("Estado:%s\n Codigo:%s\n nome do Estado:%s\n", Estado, CodigodaCarta, NomeDaCidade);
printf("População:%d\n Área em Km²:%.2f\n PIB:%.2lF\n Numero de Pontos Turísticos:%d\n", Populacao, AreaKm, PIB, NumeroDePontosturisticos);
printf("Densidade Populacional:%.2lf hab/km²\n PIB per Capita:%.2lf reais\n", DensidadePopulacional, PIBperCapita);



printf("digite as informações da carta 2:\n");
printf("digite a letra do seu Estado\n");
scanf("%s", Estado2);

printf("digite o codigo do seu Estado:\n");
scanf("%s", CodigodaCarta2);

printf("digite o nome do seu Estado:\n");
scanf("%s", NomeDaCidade2);

printf("digite a População do seu Estado:\n");
scanf("%d", &Populacao2);

printf("digite a Área em Km²:\n");
scanf("%f", &AreaKm2);

printf("digite o PIB do seu Estado:\n");
scanf("%f", &PIB2);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &NumeroDePontosturisticos2);

float DensidadePopulacional2;
float PIBperCapita2;

DensidadePopulacional2 = (float) Populacao2/AreaKm2;
PIBperCapita2 = (float) PIB2/Populacao2;




printf("as informações da carta 2 são:\n");
printf("Estado:%s\n Codigo:%s\n nome do Estado:%s\n", Estado2, CodigodaCarta2, NomeDaCidade2);
printf("População:%d\n Área em Km²:%.2lf\n PIB:%.2lf\n Numero de Pontos Turísticos:%d \n", Populacao2, AreaKm2, PIB2, NumeroDePontosturisticos2);
printf("Densidade Populacional:%.2lf hab/km²\n PIB per Capita:%.2lf reais\n", DensidadePopulacional2, PIBperCapita2);

return 0;


}