#include <stdio.h>

int main(){

//Variaveis 
 char cidade[30];
 char CodigoDaCarta[3];
 char estado[30];
 int população;
 int Pontosturisticos;
 float Km²;
 float PIB;
//variaveis com um "2" para codificar a segunda carta
 char cidade2[30];
 char CodigoDaCarta2[3];
 char estado2[30];
 int população2;
 int Pontosturisticos2;
 float Km²2;
 float PIB2;

 //Apresentação 
 printf("Bem vindo ao Super trunfo Brasil!\n Registre as informações das suas cartas\n");

//O codigo a seguir sera usado para registrar as cartas
   printf("Carta A\nEstado: ");
   scanf("%s", &estado);
   
   printf("Codigo: ");
   scanf("%s", &CodigoDaCarta);

   printf("Cidade: ");
   scanf("%s", &cidade);

   printf("Km²: ");
   scanf("%f", &Km²);

   printf("População: ");
   scanf("%d", &população);

   printf("Pontos turisticos: ");
   scanf("%d", &Pontosturisticos);

   printf("PIB: ");
   scanf("%f", &PIB);

   printf(" Carta B\nEstado: ");
   scanf("%s", &estado2);
   
   printf("Codigo: ");
   scanf("%s", &CodigoDaCarta2);

   printf("Cidade: ");
   scanf("%s", &cidade2);

   printf("Km²: ");
   scanf("%f", Km²2);

   printf("População: ");
   scanf("%d", &população2);

   printf("Pontos turisticos: ");
   scanf("%d", &Pontosturisticos2);

   printf("PIB: ");
   scanf("%f",&PIB2);

   //Codigo para printar os rsultados das caras "A" e "B"
   
   printf("Resultados:\n Carta A\n Estado:%s\n", estado);
   printf("Codigo:%s\n", CodigoDaCarta);
   printf("Cidade:%s\n", cidade);
   printf("Km²:%.2f\n", Km²);
   printf("População:%d\n", população);
   printf("Pontos turisticos:%d\n", Pontosturisticos);
   printf("PIB:%.2f\n", PIB);

   printf("Carta B\n Estado:%s\n", estado2);
   printf("Codigo:%s\n", CodigoDaCarta2);
   printf("Cidade:%s\n", cidade2);
   printf("Km²:%.2f\n", Km²2);
   printf("População:%d\n", população2);
   printf("Pontos turisticos:%d\n", Pontosturisticos2);
   printf("PIB:%.2f\n", PIB2);
}