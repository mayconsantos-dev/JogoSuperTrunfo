#include <stdio.h>

int main(){

char Estado [20];
char CodigodaCarta[5];
char NomeDaCidade [20];
unsigned long int Populacao;
float AreaKm;
float PIB;
int NumeroDePontosturisticos;


char Estado2[20];
char CodigodaCarta2[5];
char NomeDaCidade2 [20];
unsigned long int Populacao2;
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
printf("População:%ld\n Área em Km²:%.2f\n PIB:%.2F\n Numero de Pontos Turísticos:%d\n", Populacao, AreaKm, PIB, NumeroDePontosturisticos);
printf("Densidade Populacional:%.2f hab/km²\n PIB per Capita:%.2f reais\n", DensidadePopulacional, PIBperCapita);
printf("o SuperPoder é: %.3f\n", SuperPoder);

printf("digite as informações da carta 2:\n");
printf("digite a letra do seu Estado\n");
scanf("%s", Estado2);

printf("digite o codigo do seu Estado:\n");
scanf("%s", CodigodaCarta2);

printf("digite o nome do seu Estado:\n");
scanf("%s", NomeDaCidade2);

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
printf("População:%ld\n Área em Km²:%.2f\n PIB:%.2F\n Numero de Pontos Turísticos:%d\n", Populacao2, AreaKm2, PIB2, NumeroDePontosturisticos2);
printf("Densidade Populacional:%.2f hab/km²\n PIB per Capita:%.2f reais\n", DensidadePopulacional2, PIBperCapita2);
printf("o super poder é: %.3f\n", SuperPoder2);

// --- COMPARAÇÃO DE CARTAS ---
printf("\nComparação de Cartas:\n");

// Para a maioria, o maior valor vence (Carta1 > Carta2)
printf("População: Carta 1 venceu (%d)\n", Populacao > Populacao2);
printf("Área: Carta 1 venceu (%d)\n", AreaKm > AreaKm2);
printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", NumeroDePontosturisticos > NumeroDePontosturisticos2);

// ATENÇÃO: Na Densidade Populacional, o MENOR valor vence!
printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopulacional < DensidadePopulacional2);

printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita > PIBperCapita2);
printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder > SuperPoder2);

return 0;
}


