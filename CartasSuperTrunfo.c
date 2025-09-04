#include <stdio.h>
       
     int main(){


        //variaveis para guardar os valores das cartas
        char estado = 'S', estado2 = 'S';
        char codigo[20] = "Codigo", codigo2[20] = "Codigo";
        char nomecidade[28] = "Cidade", nomecidade2[28] = "Cidade";
        unsigned long int habitantes, habitantes2;
        float tamanho, tamanho2;
        float pib, pib2;
        int pontosturisticos, pontosturisticos2;
        float densidade, densidade2;
        float pibpercapt, pibpercapt2;
        float superPoder, superPoder2;


       //variaveis para guardar o valor da comparação de cartas
        int cartaVenceuH;
        int cartaVenceuP;
        int cartaVenceuT;
        int cartaVenceuS;
        int cartaVenceuA;
        int cartaVenceuD;
        int cartaVenceuPP;

        

        







        //inserção de dados para as duas cartas
       

        printf("Bem vindo ao jogo Super Trunfo! \nPara iniciar Insira uma letra inicial de dois estados: \n");
        scanf(" %c %c" , &estado, &estado2);

        printf("Insira o código de duas cartas: \n");
        scanf("%s %s", codigo, codigo2);

        printf("Insira o nome da primeira cidade: \n");
        scanf(" %[^\n]", nomecidade);

        printf("Insira o nome da segunda cidade: \n");
        scanf(" %[^\n]", nomecidade2);

        printf("Insira a população para as duas cartas: \n");
        scanf("%lu %lu", &habitantes, &habitantes2);

        printf("Insira a área da cidade para as duas cartas: \n");
        scanf("%f %f", &tamanho, &tamanho2);

        printf("Insira o PIB para as duas cartas: \n");
        scanf("%f %f", &pib, &pib2);

        printf("Insira o número de pontos turisticos de duas cidades: \n");
        scanf("%d %d", &pontosturisticos, &pontosturisticos2);

        densidade = (float) habitantes / tamanho;
        pibpercapt = (float) pib / habitantes;

        densidade2 = (float) habitantes2 / tamanho2;
        pibpercapt2 = (float) pib2 / habitantes2;





            //Valores para imprimir dados: Carta 01


            printf("Carta 01: \nEstado: %c \n", estado);

            printf("Codigo: %s \n", codigo);

            printf("Nome da cidade: %s \n", nomecidade);

            printf("População: %lu \n", habitantes);

            printf("Área: %.2f \n", tamanho);

            printf("PIB: %.2f \n", pib);

            printf("Numero de pontos turisticos: %d \n", pontosturisticos);

            printf("Densidade populacional: %.2f \n", densidade);

            printf("PIB per capita: %.2f \n", pibpercapt);



            //Valores para imprimir dados Carta 02



            printf("Carta 02: \nEstado: %c \n", estado2);

            printf("Codigo: %s \n", codigo2);

            printf("Nome da cidade: %s \n", nomecidade2);

            printf("População: %lu \n", habitantes2);

            printf("Área: %.2f \n", tamanho2);

            printf("PIB: %.2f \n", pib2);

            printf("Número de pontos turisticos: %d \n", pontosturisticos2);

            printf("Densidade populacional: %.2f \n", densidade2);

            printf("PIB per capita: %.2f \n", pibpercapt2);

            //superPoder, soma de todas os valores numericos

            superPoder = (float) (pontosturisticos + pib + tamanho + densidade + pibpercapt);
            printf("O SuperPoder da primeira carta é: %.2f \n", superPoder);

            superPoder2 = (float) (pontosturisticos2 + pib2 + tamanho2 + densidade2 + pibpercapt2);
            printf("O SuperPoder da segunda carta é: %.2f \n", superPoder2);

            //operadores relacionais para compração de carta
            cartaVenceuH = habitantes > habitantes2;
            cartaVenceuA = tamanho > tamanho2;
            cartaVenceuP = pib > pib2;
            cartaVenceuT = pontosturisticos > pontosturisticos2;
            cartaVenceuD = densidade < densidade2;
            cartaVenceuPP = pibpercapt > pibpercapt2;
            cartaVenceuS = superPoder > superPoder2;

        
            //resutado da comparação de cartas
            printf("**Comparação de cartas** \n");
            printf("População: Carta %d Venceu\n", cartaVenceuH);
            printf("Área: Carta %d Venceu\n", cartaVenceuA);
            printf("PIB: Carta %d Venceu\n", cartaVenceuP);
            printf("Pontos Turísticos: Carta %d Venceu\n", cartaVenceuT);
            printf("Densidade Populacional: Carta %d Venceu\n", cartaVenceuD);
            printf("PIB per Capita: Carta %d Venceu\n", cartaVenceuPP);
            printf("Super Poder: Carta %d Venceu\n", cartaVenceuS);


            return 0;
            
            











    

      }