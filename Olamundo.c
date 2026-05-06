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
int primeiroatributo;
int segundoatributo;
int pontoscarta1 =0;
int pontoscarta2 =0;




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

  printf("escolha o primeiro atributo\n");
  scanf("%d", &primeiroatributo);
  
  printf("escolha o segundo atributo\n");
  scanf("%d", &segundoatributo);

  if (primeiroatributo == segundoatributo)
{
    printf("voce escolheu o mesmo atributo");
}
else{



  switch (primeiroatributo){

case 1:
    if (Populacao > Populacao2) {
        pontoscarta1++; // Carta 1 ganha 1 ponto
        printf("Carta 1 venceu em População!\n");
    } else if (Populacao < Populacao2) {
        pontoscarta2++; // Carta 2 ganha 1 ponto
        printf("Carta 2 venceu em População!\n");
    } else {
        printf("Empate em População! (Ninguém pontua)\n");
    }
    break;

case 2:

if (AreaKm > AreaKm2) {
        pontoscarta1++;
        printf("carta 1 venceu em area\n") ;
        } else if (AreaKm < AreaKm2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em area\n");
    }
        else{
            printf("empate\n");
        }
break;         

case 3:



if (PIB > PIB2) {
        pontoscarta1++;
        printf("carta 1 venceu em pib\n") ;
        } else if (PIB < PIB2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em pib\n");
    }
        else{
            printf("empate\n");
        }
break;         


case 4:


if (NumeroDePontosturisticos > NumeroDePontosturisticos2) {
        pontoscarta1++;
        printf("carta 1 venceu em numero de pontos turisticos\n") ;
        } else if (NumeroDePontosturisticos < NumeroDePontosturisticos2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em numero de pontos turisticos\n");
    }
        else{
            printf("empate\n");
        }
break;         


case 5:

if (PIBperCapita > PIBperCapita2) {
        pontoscarta1++;
        printf("carta 1 venceu em pib per capita\n") ;
        } else if (PIBperCapita < PIBperCapita2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em pib per capita\n");
    }
        else{
            printf("empate\n");
        }
break;         

case 6:

if (DensidadePopulacional < DensidadePopulacional2) {
        pontoscarta1++;
        printf("carta 1 venceu em densidade populacional\n") ;
        } else if (DensidadePopulacional > DensidadePopulacional2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em densidade populacional\n");
    }
        else{
            printf("empate\n");
        }
break;         

default:
printf("opção invalida");
break;
  }

switch (segundoatributo)
{

    
case 1:
    if (Populacao > Populacao2) {
        pontoscarta1++; // Carta 1 ganha 1 ponto
        printf("Carta 1 venceu em População!\n");
    } else if (Populacao < Populacao2) {
        pontoscarta2++; // Carta 2 ganha 1 ponto
        printf("Carta 2 venceu em População!\n");
    } else {
        printf("Empate em População! (Ninguém pontua)\n");
    }
    break;

case 2:

if (AreaKm > AreaKm2) {
        pontoscarta1++;
        printf("carta 1 venceu em area\n") ;
        } else if (AreaKm < AreaKm2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em area\n");
    }
        else{
            printf("empate\n");
        }
break;         

case 3:



if (PIB > PIB2) {
        pontoscarta1++;
        printf("carta 1 venceu em pib\n") ;
        } else if (PIB < PIB2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em pib\n");
    }
        else{
            printf("empate\n");
        }
break;         


case 4:


if (NumeroDePontosturisticos > NumeroDePontosturisticos2) {
        pontoscarta1++;
        printf("carta 1 venceu em numero de pontos turisticos\n") ;
        } else if (NumeroDePontosturisticos < NumeroDePontosturisticos2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em numero de pontos turisticos\n");
    }
        else{
            printf("empate\n");
        }
break;         


case 5:

if (PIBperCapita > PIBperCapita2) {
        pontoscarta1++;
        printf("carta 1 venceu em pib per capita\n") ;
        } else if (PIBperCapita < PIBperCapita2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em pib per capita\n");
    }
        else{
            printf("empate\n");
        }
break;         

case 6:

if (DensidadePopulacional < DensidadePopulacional2) {
        pontoscarta1++;
        printf("carta 1 venceu em densidade populacional\n") ;
        } else if (DensidadePopulacional > DensidadePopulacional2) {
        pontoscarta2 ++;
        printf("carta 2 venceu em densidade populacional\n");
    }
        else{
            printf("empate\n");
        }
break;         

    
default:

printf("opção invalida");
break;
    }

printf("resultado final\n");
printf("\n--- RESULTADO FINAL ---\n");
printf("Placar: Carta 1,%s, escolheu o atributo%d, [%d]  x [%d] Carta 2,%s, escolheu o atributo %d\n", NomeDaCidade,primeiroatributo, pontoscarta1, pontoscarta2, NomeDaCidade2, segundoatributo);

if (pontoscarta1 > pontoscarta2) {
    printf("VOCÊ VENCEU!\n");
} 
else if (pontoscarta2 > pontoscarta1) {
    printf("VOCÊ PERDEU!\n");
} 
else {
    printf("O JOGO TERMINOU EM EMPATE!\n");
}

}
  



}
