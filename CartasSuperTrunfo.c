#include <stdio.h>
       
     int main(){

        char estado = 'S';
        char codigo[7] = "Codigo";
        char nomecidade[28] = "Cidade";
        int habitantes;
        float tamanho;
        float pib;
        int pontosturisticos;
       

        printf("Insira uma letra inicial do estado: \n");
        scanf("%c", &estado);

        printf("Insira o código da carta: \n");
        scanf("%c", &codigo);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &nomecidade);

        printf("Insira a população: \n");
        scanf("%d", &habitantes);

        printf("Insira a área da cidade: \n");
        scanf("%f", &tamanho);

        printf("Insira o PIB: \n");
        scanf("%f", &pib);

        printf("Insira o número de pontos turisticos: \n");
        scanf("%d", &pontosturisticos);

      

        
       

      }