#include <stdio.h>
 
int main() {
char estado[20];
char codcarta[3];
char nomecity[20];
int populacao;
float area;
float pib;
int numeroturisticos;
//entrada de dados para primeira carta//


char estado2[20];
char codcarta2[3];
char nomecity2[20];
int populacao2;
float area2;
float pib2;
int numeroturisticos2;
//entrada de dados para segunda carta//
//aqui estao a densidade populacional e o pib per capita//
unsigned int densidadepopulacional;
float pibpercapita;
unsigned int densidadepopulacional2;
float pibpercapita2;


printf("Digite o nome do estado1: ");
scanf("%s", estado);
printf("Digite o codigo da carta1: ");
scanf("%s", codcarta);
printf("Digite o nome da cidade1: ");
scanf("%s", nomecity);
printf("Digite a populacao da cidade1: ");
scanf("%d", &populacao);
printf("Digite a area da cidade1: ");
scanf("%f", &area);
printf("Digite o PIB da cidade1: ");
scanf("%f", &pib);
printf("Digite o numero de pontos turisticos da cidade1: ");
scanf("%d", &numeroturisticos);

//coleta de dados da primeira cidade//


printf("Digite o nome do estado2: ");
scanf("%s", estado2);
printf("Digite o codigo da carta2: ");
scanf("%s", codcarta2);
printf("Digite o nome da cidade2: ");
scanf("%s", nomecity2);
printf("Digite a populacao da cidade2: ");
scanf("%d", &populacao2);
printf("Digite a area da cidade2: ");
scanf("%f", &area2);
printf("Digite o PIB da cidade2: ");
scanf("%f", &pib2);
printf("Digite o numero de pontos turisticos da cidade2: ");
scanf("%d", &numeroturisticos2);

//coleta de dados da segunda cidade//

//impressao dos dados da primeira cidade//
printf("\nCarta1\n");
printf("Estado: %s\n", estado);
printf("Codigo da carta: %s\n", codcarta);
printf("Cidade: %s\n", nomecity);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Numero de pontos turisticos: %d\n", numeroturisticos);


//impressao dos dados da segunda cidade//
printf("\nCarta2\n");
printf("Estado: %s\n", estado2);
printf("Codigo da carta: %s\n", codcarta2);
printf("Cidade: %s\n", nomecity2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Numero de pontos turisticos: %d\n", numeroturisticos2);

densidadepopulacional = populacao / area;// calculo da densidade populacional
pibpercapita = pib / populacao;
printf("\nDensidade populacional da cidade1: %u\n", densidadepopulacional);
printf("PIB per capita da cidade1: %.2f\n", pibpercapita);



densidadepopulacional2 = populacao2 / area2;// calculo da densidade populacional da segunda cidade
pibpercapita2 = pib2 / populacao2;
printf("\nDensidade populacional da cidade2: %u\n", densidadepopulacional2);
printf("PIB per capita da cidade2: %.2f\n", pibpercapita);


// Comparacao das densidades populacionais e PIB per capita das duas cidades//
if (densidadepopulacional > densidadepopulacional2) {
    printf("\ncarta2 venceu.\n");
} else{
    printf("\ncarta1 cenceu.\n");
}   
printf("\n a comparaçao foi feita pelo atributo densidade populacional.\n");
printf("%s : %u \n", estado, densidadepopulacional);
printf("%s : %u \n", estado2, densidadepopulacional2);
if (densidadepopulacional > densidadepopulacional2) {
    printf("\nresultado carta2 %s venceu.\n", estado2);
} else{
    printf("\nresultado carta1 %s venceu.\n", estado);
}   

}