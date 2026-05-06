#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    


char Estado [20];
char CodigodaCarta[5];
char NomeDaCidade [20];
unsigned long int Populacao;
float AreaKm;
float PIB;
int NumeroDePontosturisticos;
/*
Carta 1:
Estado: c
Código: A01
Nome da Cidade: saopaulo
População: 12325000
Área: 1521.11 km²
PIB: 699280000000 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade:riodejaneiro
População: 67480000
Área: 1200.25 km²
PIB: 300500000000 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
*/
char Estado2[20];
char CodigodaCarta2[5];
char NomeDaCidade2 [20];
unsigned long int Populacao2;
float AreaKm2;
float PIB2;
int NumeroDePontosturisticos2;
int comparaçãodosatributos;

printf("digite as informações da carta 1\n");
printf("digite a letra do seu Estado:\n");
scanf(" %s", Estado);

printf("digite o codigo do seu Estado:\n");
scanf(" %s", CodigodaCarta);

printf("digite o nome do seu Estado:\n");
scanf(" %s", NomeDaCidade);

printf("digite a População do seu Estado:\n");
scanf("%lu", &Populacao);

printf("digite a Área em Km:²\n");
scanf("%f", &AreaKm);

printf("digite o PIB do seu Estado:\n");
scanf("%f", &PIB);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &NumeroDePontosturisticos);


float DensidadePopulacional;
float PIBperCapita;
float SuperPoder;


DensidadePopulacional = (float) Populacao/AreaKm;
PIBperCapita =(float) PIB/Populacao;

SuperPoder =(float) (Populacao + AreaKm + PIB + PIBperCapita + 1/DensidadePopulacional + NumeroDePontosturisticos);

printf("as informações da carta 1 são:\n");
printf("Estado:%s\n Codigo:%s\n nome do Estado:%s\n", Estado, CodigodaCarta, NomeDaCidade);
printf("População:%lu\n Área em Km²:%.2f\n PIB:%.2f\n Numero de Pontos Turísticos:%d\n", Populacao, AreaKm, PIB, NumeroDePontosturisticos);
printf("Densidade Populacional:%.2f hab/km²\n PIB per Capita:%.2f reais\n", DensidadePopulacional, PIBperCapita);
printf("o SuperPoder é: %.3f\n", SuperPoder);

printf("digite as informações da carta 2:\n");
printf("digite a letra do seu Estado\n");
scanf(" %s", Estado2);

printf("digite o codigo do seu Estado:\n");
scanf(" %s", CodigodaCarta2);

printf("digite o nome do seu Estado:\n");
scanf(" %s", NomeDaCidade2);

printf("digite a População do seu Estado:\n");
scanf("%lu", &Populacao2);

printf("digite a Área em Km²:\n");
scanf("%f", &AreaKm2);

printf("digite o PIB do seu Estado:\n");
scanf("%f", &PIB2);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &NumeroDePontosturisticos2);

float DensidadePopulacional2;
float PIBperCapita2;
float SuperPoder2;

DensidadePopulacional2 = (float) Populacao2/AreaKm2;
PIBperCapita2 = (float) PIB2/Populacao2;

SuperPoder2 = (float) (Populacao2 + AreaKm2 + PIB2 + PIBperCapita2 + 1/DensidadePopulacional2 + NumeroDePontosturisticos2);

printf("as informações da carta 2 são:\n");
printf("Estado:%s\n Codigo:%s\n nome do Estado:%s\n", Estado2, CodigodaCarta2, NomeDaCidade2);
printf("População:%lu\n Área em Km²:%.2f\n PIB:%.2f\n Numero de Pontos Turísticos:%d\n", Populacao2, AreaKm2, PIB2, NumeroDePontosturisticos2);
printf("Densidade Populacional:%.2f hab/km²\n PIB per Capita:%.2f reais\n", DensidadePopulacional2, PIBperCapita2);
printf("o super poder é: %.3f\n", SuperPoder2);


  printf("Selecione qual atributo você quer comparar\n");
  printf("atributo 1: população\n");
  printf("atributo 2: Area\n");
  printf("atributo 3: pib\n");
  printf("atributo 4: numero de pontos turisticos \n");
  printf("atributo 5: pibpercapita \n");
  printf("atributo 6: densidade populacional\n");
  scanf("%d", &comparaçãodosatributos);

  switch (comparaçãodosatributos)
  {

  case 1:
  if (Populacao > Populacao2){
printf("População carta 1 %s, venceu com %lu\n",NomeDaCidade,Populacao);
} else if (Populacao <Populacao2){
    printf("População carta 2 %s, venceu com %lu\n",NomeDaCidade2,Populacao2);
} else {
    printf("deu empate");
}
break;  

case 2:
  if (AreaKm > AreaKm2){
printf("area carta 1 %s, venceu com %.2f\n",NomeDaCidade,AreaKm);
} else if (AreaKm <AreaKm2){
    printf("area carta 2 %s, venceu com %.2f\n",NomeDaCidade2,AreaKm2);
} else {
    printf("deu empate");
}
break;

case 3:
if (PIB > PIB2){
printf("pib carta 1 %s, venceu com %.2f\n",NomeDaCidade,PIB);
} else if (PIB <PIB2){
    printf("pib carta 2 %s, venceu com %.2f\n",NomeDaCidade2,PIB2);
} else {
    printf("deu empate");
}
break;

case 4:
if (NumeroDePontosturisticos > NumeroDePontosturisticos2){
printf("numero de pontos turisticos 1 %s, venceu com %d\n",NomeDaCidade,NumeroDePontosturisticos);
} else if (NumeroDePontosturisticos <NumeroDePontosturisticos2){
    printf("numero de pontos turisticos 2  %s, venceu com %d\n",NomeDaCidade2,NumeroDePontosturisticos2);
} else {
    printf("deu empate");
}
break;

case 5:
if (PIBperCapita > PIBperCapita2){
printf("pib per capita 1 %s, %.2f venceu\n",NomeDaCidade, PIBperCapita);
} else if (PIBperCapita <PIBperCapita2){
    printf("pib per capita2  %s, %.2f venceu\n",NomeDaCidade2,PIBperCapita2);
} else {
    printf("deu empate");
}
break;

case 6:
if (DensidadePopulacional > DensidadePopulacional2){
printf("DensidadePopulacional 1 %s, %.2f venceu\n",NomeDaCidade, DensidadePopulacional);
} else if (DensidadePopulacional <DensidadePopulacional2){
    printf("DensidadePopulacional2  %s, %.2f venceu\n",NomeDaCidade2,DensidadePopulacional2);
} else {
    printf("deu empate");
}
break;

default:
printf("numero invalido");
break;

}
return 0;

}