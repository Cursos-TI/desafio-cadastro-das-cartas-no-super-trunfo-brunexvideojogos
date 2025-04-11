#include <stdio.h>


int main(){

    //Variaveis 
     char cidade[30];
     char CodigoDaCarta[3];
     char estado[30];
     int população;
     int Pontosturisticos;
     float Km2;
     float PIB;
     float densidadeP;
     float pibporcapita;


    //variaveis com um "2" para codificar a segunda carta
     char cidade2[30];
     char CodigoDaCarta2[3];
     char estado2[30];
     int população2;
     int Pontosturisticos2;
     float Km22;
     float PIB2;
     float densidadeP2;
     float pibporcapita2;
    


     //Apresentação 
     printf ("Bem vindo ao super trunfo\n Registre suas cartas\n");
    
    //O codigo a seguir sera usado para registrar as cartas
       printf("Carta A\nEstado: ");
       scanf("%s", &estado);
       
       printf("Codigo: ");
       scanf("%s", &CodigoDaCarta);
    
       printf("Cidade: ");
       scanf("%s", &cidade);
    
       printf("Km²: ");
       scanf("%f", &Km2);
    
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
       scanf("%f", &Km22);
    
       printf("População: ");
       scanf("%d", &população2);
    
       printf("Pontos turisticos: ");
       scanf("%d", &Pontosturisticos2);
    
       printf("PIB: ");
       scanf("%f",&PIB2);

       
       //Codigo para calcular a densidade populacional e o pib por capita
       
       densidadeP = (população / Km2);
       pibporcapita = (PIB / população);
  
       densidadeP2 = (população2 / Km22);
       pibporcapita2 = (PIB2 / população2);
       
       //Codigo para printar os resultados das caras "A" e "B"
       printf("Resultados:\n Carta A\n Estado:%s\n", estado);
       printf("Codigo:%s\n", CodigoDaCarta);
       printf("Cidade:%s\n", cidade);
       printf("Km²:%.2f\n", Km2);
       printf("População:%d\n", população);
       printf("Pontos turisticos:%d\n", Pontosturisticos);
       printf("PIB:%.2f\n", PIB);
       printf("Densidade populacional:%.2f\n", densidadeP);
       printf("PIB por capita:%.2f\n\n", pibporcapita);
    
       printf("Carta B\n Estado:%s\n", estado2);
       printf("Codigo:%s\n", CodigoDaCarta2);
       printf("Cidade:%s\n", cidade2);
       printf("Km²:%.2f\n", Km22);
       printf("População:%d\n", população2);
       printf("Pontos turisticos:%d\n", Pontosturisticos2);
       printf("PIB:%.2f\n", PIB2);
       printf("Densidade populacional:%.2f\n", densidadeP2);
       printf("PIB por capita:%.2f\n", pibporcapita2);

       return 0;
    }

