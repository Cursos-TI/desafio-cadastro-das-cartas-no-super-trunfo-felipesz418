#include <stdio.h>
       
     int main(){

        char estado = 'S', estado2 = 'S';
        char codigo[20] = "Codigo", codigo2[20] = "Codigo";
        char nomecidade[28] = "Cidade", nomecidade2[28] = "Cidade";
        int habitantes, habitantes2;
        float tamanho, tamanho2;
        float pib, pib2;
        int pontosturisticos, pontosturisticos2;


        //inserção de dados para as duas cartas
       

        printf("Bem vindo ao jogo Super Trunfo! \nPara iniciar Insira uma letra inicial de dois estados: \n");
        scanf(" %c %c" , &estado, &estado2);

        printf("Insira o código de duas cartas: \n");
        scanf("%s %s", codigo, codigo2);

        printf("Insira o nome de duas cidades: \n");
        scanf("%s %s", nomecidade, nomecidade2);

        printf("Insira a população para as duas cartas: \n");
        scanf("%d %d", &habitantes, &habitantes2);

        printf("Insira a área da cidade para as duas cartas: \n");
        scanf("%f %f", &tamanho, &tamanho2);

        printf("Insira o PIB para as duas cartas: \n");
        scanf("%f %F", &pib, &pib2);

        printf("Insira o número de pontos turisticos de duas cidades: \n");
        scanf("%d %d", &pontosturisticos, &pontosturisticos2);



            //Valores para imprimir dados: Carta 01


            printf("Carta 01: \nEstado: %c \n", estado);

            printf("Codigo: %s \n", codigo);

            printf("Nome da cidade: %s \n", nomecidade);

            printf("População: %d \n", habitantes);

            printf("Área: %f \n", tamanho);

            printf("PIB: %f \n", pib);

            printf("Numero de pontos turisticos: %d \n", pontosturisticos);



            //Valores para imprimir dados Carta 02



            printf("Carta 02: \nEstado: %c \n", estado2);

            printf("Codigo: %s \n", codigo2);

            printf("Nome da cidade: %s \n", nomecidade2);

            printf("População: %d \n", habitantes2);

            printf("Área: %f \n", tamanho2);

            printf("PIB: %f \n", pib2);

            printf("Número de pontos turisticos: %d \n", pontosturisticos2);


        
       

      }