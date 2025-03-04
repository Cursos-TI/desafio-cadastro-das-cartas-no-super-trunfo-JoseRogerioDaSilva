#include <stdio.h>

int main() {
printf("Bem vindo ao Desafio das cartas de super trunfo");
printf("\n");

char codigo1[5], codigo2[5], estado1[10], estado2[10], cidade1[30], cidade2[30];
unsigned long int populacao1, populacao2;
int pontosturisticos1, pontosturisticos2;
float area1, area2, PIB1, PIB2, Densidade1, Densidade2,PIBCap1, PIBCap2, Superpoder1, Superpoder2;

printf("Entre com os dados da primeira carta\n");
printf("digite o codigo da carta\n");
scanf("%s", codigo1);

printf("digite o estado da carta\n");
scanf("%s", estado1);

printf("digite o nome da cidade\n");
scanf("%s", cidade1);

Printf("digite a populacao da carta\n");
scanf("%li", populacao1);

printf("digite a area em km\n");
scanf("%f", &area1);

printf("digite o PIB\n");
scanf("%f", &PIB1);

printf("digite a quantidade de pontos turisticos\n");
scanf("%d", &pontosturisticos1);

printf("\n");

printf("Entre vom os dados da segunda carta\n");
printf("digite o codigo da primeira carta\n");
scanf("%s", codigo2);

printf("digite o estado da carta\n");
scanf("%s", estado2);

printf("digite o nome da cidade\n");
scanf("%s", cidade2);

printf("digite a populacao da carta\n");
scanf("%li", &populacao2);

printf("digite a area em km\n");
scanf("%f", &area2);

printf("digite o PIB\n");
scanf("%f", &PIB2);

printf("digite a quantidade de pontos turisticos\n");
scanf("%d", &pontosturisticos2);
printf("\n");

Densidade1 = (float)populacao1 / area1;
Densidade2 = (float)populacao2 / area2;
PIBCap1 = (float)PIB1 / populacao1;
PIBCap2 = (float)PIB2 / populacao2;
Superpoder1 = (float)1/ populacao1 + area1 + PIB1 + PIBCap1 + populacao1;
Superpoder2 = (float)1/ populacao2 + area2 + PIB2 + PIBCap2 + populacao2;
printf("\n");

if(populacao1 > populacao2){
    printf("Populacao: Carta 1 ganhou");
}
else{
    printf("Populacao: Carta 2 ganhou");
}
printf("\n");
if(area1 > area2){
    printf("Area: Carta 1 ganhou");
}
else{
    printf("Area: Carta 2 ganhou");
}
printf("\n");
if(PIB1 > PIB2){
    printf("PIB: Carta 1 ganhou");
}
else{
    printf("PIB: Carta 2 ganhou");
}
printf("\n");
if(pontosturisticos1 > pontosturisticos2){
    printf("Pontos turisticos: Carta 1 ganhou");
}
else{
    printf("Pontos turisticos: Carta 2 ganhou");    
}
printf("\n");
if(Densidade1 < Densidade2){
    printf("Densidade: Carta 1 ganhou");
}
else{
    printf("Densidade: Carta 2 ganhou");
}
printf("\n");
if(PIBCap1 > PIBCap2){
    printf("PIBperCapta: Carta 1 ganhou");
}
else{
    printf("PIBperCapta: Carta 2 ganhou");
}
printf("\n");
if(Superpoder1 > Superpoder2){
    printf("Superpoder: Carta 1 ganhou");
}
else{
    printf("Superpoder: Carta 2 ganhou");
}    
    return 0;
}
