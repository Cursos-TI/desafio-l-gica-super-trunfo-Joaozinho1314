#include <stdio.h>

// // Nível Novato
// int main() {
//     // Definindo as variáveis para armazenar os dados das cartas
//     char estado1 = 'A', estado2 = 'B';
//     char codigo1[] = "A01", codigo2[] = "B02";
//     char cidade1[] = "São Paulo", cidade2[] = "Rio de Janeiro";
//     unsigned long int populacao1 = 12325000, populacao2 = 6748000;
//     float area1 = 1521.11, area2 = 1200.25;
//     float pib1 = 699.28, pib2 = 300.50;
//     int pontos_tur1 = 50, pontos_tur2 = 30;
//     float densidade_populacional1, densidade_populacional2;
//     float pib_per_capita1, pib_per_capita2;

//     // Cálculos para a primeira carta
//     densidade_populacional1 = (float)populacao1 / area1;  // Densidade populacional = população / área
//     pib_per_capita1 = pib1 * 1e9 / populacao1;  // PIB per capita = PIB / população (convertido de bilhões para unidades)

//     // Cálculos para a segunda carta
//     densidade_populacional2 = (float)populacao2 / area2;  // Densidade populacional = população / área
//     pib_per_capita2 = pib2 * 1e9 / populacao2;  // PIB per capita = PIB / população (convertido de bilhões para unidades)

//     // Comparação escolhida: População (você pode mudar esse atributo para outro, como Área, PIB, etc.)
//     printf("Comparação de Cartas (Atributo: População):\n");

//     // Exibindo os dados das cartas para a comparação
//     printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
//     printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

//     // Realizando a comparação da População
//     if (populacao1 > populacao2) {
//         printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
//     } else if (populacao2 > populacao1) {
//         printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
//     } else {
//         printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
//     }

//     return 0;
// }

// // Nível Aventureiro

// int main() {
//     // Definindo os dados das duas cartas (cartas predefinidas)
//     char estado1 = 'A', estado2 = 'B';
//     char codigo1[] = "A01", codigo2[] = "B02";
//     char cidade1[] = "São Paulo", cidade2[] = "Rio de Janeiro";
//     unsigned long int populacao1 = 12325000, populacao2 = 6748000;
//     float area1 = 1521.11, area2 = 1200.25;
//     float pib1 = 699.28, pib2 = 300.50;
//     int pontos_tur1 = 50, pontos_tur2 = 30;
//     float densidade_populacional1, densidade_populacional2;
//     float pib_per_capita1, pib_per_capita2;

//     // Calculando Densidade Populacional e PIB per Capita
//     densidade_populacional1 = (float)populacao1 / area1;
//     pib_per_capita1 = pib1 * 1e9 / populacao1;

//     densidade_populacional2 = (float)populacao2 / area2;
//     pib_per_capita2 = pib2 * 1e9 / populacao2;

//     int escolha;

//     do {
//         printf("\n=== Menu de Comparação ===\n");
//         printf("Escolha o atributo para comparar:\n");
//         printf("1. População\n");
//         printf("2. Área\n");
//         printf("3. PIB\n");
//         printf("4. Número de Pontos Turísticos\n");
//         printf("5. Densidade Populacional\n");
//         printf("6. Sair\n");
//         printf("Escolha: ");
//         scanf("%d", &escolha);

//         switch (escolha) {
//             case 1:
//                 printf("\nComparação de Cartas (Atributo: População):\n");
//                 printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
//                 printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
//                 if (populacao1 > populacao2) {
//                     printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
//                 } else if (populacao2 > populacao1) {
//                     printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
//                 } else {
//                     printf("Resultado: Empate!\n");
//                 }
//                 break;

//             case 2:
//                 printf("\nComparação de Cartas (Atributo: Área):\n");
//                 printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
//                 printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
//                 if (area1 > area2) {
//                     printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
//                 } else if (area2 > area1) {
//                     printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
//                 } else {
//                     printf("Resultado: Empate!\n");
//                 }
//                 break;

//             case 3:
//                 printf("\nComparação de Cartas (Atributo: PIB):\n");
//                 printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
//                 printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
//                 if (pib1 > pib2) {
//                     printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
//                 } else if (pib2 > pib1) {
//                     printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
//                 } else {
//                     printf("Resultado: Empate!\n");
//                 }
//                 break;

//             case 4:
//                 printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
//                 printf("Carta 1 - %s: %d pontos\n", cidade1, pontos_tur1);
//                 printf("Carta 2 - %s: %d pontos\n", cidade2, pontos_tur2);
//                 if (pontos_tur1 > pontos_tur2) {
//                     printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
//                 } else if (pontos_tur2 > pontos_tur1) {
//                     printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
//                 } else {
//                     printf("Resultado: Empate!\n");
//                 }
//                 break;

//             case 5:
//                 printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
//                 printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
//                 printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
//                 if (densidade_populacional1 < densidade_populacional2) {
//                     printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
//                 } else if (densidade_populacional2 < densidade_populacional1) {
//                     printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
//                 } else {
//                     printf("Resultado: Empate!\n");
//                 }
//                 break;

//             case 6:
//                 printf("\nSaindo do jogo... Até logo!\n");
//                 break;

//             default:
//                 printf("\nOpção inválida! Tente novamente.\n");
//         }
//     } while (escolha != 6);

//     return 0;
// }

// Nível Mestre

int main() {
    // Definindo os dados das duas cartas (cartas predefinidas)
    char estado1 = 'A', estado2 = 'B';
    char codigo1[] = "A01", codigo2[] = "B02";
    char cidade1[] = "São Paulo", cidade2[] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontos_tur1 = 50, pontos_tur2 = 30;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Calculando Densidade Populacional e PIB per Capita
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1;

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2;

    int escolha1, escolha2;
    int sair = 0;

    do {
        // Exibindo o menu com a opção de sair
        printf("\n=== Menu de Comparação ===\n");
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. Sair\n"); // Opção para sair do programa
        printf("Escolha: ");
        scanf("%d", &escolha1);

        // Validação para garantir que o primeiro atributo seja válido
        if (escolha1 == 6) {
            printf("Saindo do programa...\n");
            sair = 1;
            break;
        }
        
        if (escolha1 < 1 || escolha1 > 5) {
            printf("\nOpção inválida! Tente novamente.\n");
            continue;
        }

        // Menu para o segundo atributo, com exclusão do primeiro atributo
        printf("\nEscolha o segundo atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);

        // Validação para garantir que o segundo atributo não seja igual ao primeiro
        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
            printf("\nOpção inválida! Tente novamente.\n");
            continue;
        }

        // Comparação dos atributos selecionados
        float soma1 = 0, soma2 = 0;

        // Comparação e exibição para o primeiro atributo
        printf("\nComparação de Cartas (Atributo 1):\n");
        if (escolha1 == 1) { // População
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            soma1 += (populacao1 > populacao2) ? populacao1 : 0;
            soma2 += (populacao2 > populacao1) ? populacao2 : 0;
        } else if (escolha1 == 2) { // Área
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            soma1 += (area1 > area2) ? area1 : 0;
            soma2 += (area2 > area1) ? area2 : 0;
        } else if (escolha1 == 3) { // PIB
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
            soma1 += (pib1 > pib2) ? pib1 : 0;
            soma2 += (pib2 > pib1) ? pib2 : 0;
        } else if (escolha1 == 4) { // Pontos Turísticos
            printf("Carta 1 - %s: %d pontos\n", cidade1, pontos_tur1);
            printf("Carta 2 - %s: %d pontos\n", cidade2, pontos_tur2);
            soma1 += (pontos_tur1 > pontos_tur2) ? pontos_tur1 : 0;
            soma2 += (pontos_tur2 > pontos_tur1) ? pontos_tur2 : 0;
        } else if (escolha1 == 5) { // Densidade Populacional
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            soma1 += (densidade_populacional1 < densidade_populacional2) ? densidade_populacional1 : 0;
            soma2 += (densidade_populacional2 < densidade_populacional1) ? densidade_populacional2 : 0;
        }

        // Comparação e exibição para o segundo atributo
        printf("\nComparação de Cartas (Atributo 2):\n");
        if (escolha2 == 1) { // População
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            soma1 += (populacao1 > populacao2) ? populacao1 : 0;
            soma2 += (populacao2 > populacao1) ? populacao2 : 0;
        } else if (escolha2 == 2) { // Área
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            soma1 += (area1 > area2) ? area1 : 0;
            soma2 += (area2 > area1) ? area2 : 0;
        } else if (escolha2 == 3) { // PIB
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
            soma1 += (pib1 > pib2) ? pib1 : 0;
            soma2 += (pib2 > pib1) ? pib2 : 0;
        } else if (escolha2 == 4) { // Pontos Turísticos
            printf("Carta 1 - %s: %d pontos\n", cidade1, pontos_tur1);
            printf("Carta 2 - %s: %d pontos\n", cidade2, pontos_tur2);
            soma1 += (pontos_tur1 > pontos_tur2) ? pontos_tur1 : 0;
            soma2 += (pontos_tur2 > pontos_tur1) ? pontos_tur2 : 0;
        } else if (escolha2 == 5) { // Densidade Populacional
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            soma1 += (densidade_populacional1 < densidade_populacional2) ? densidade_populacional1 : 0;
            soma2 += (densidade_populacional2 < densidade_populacional1) ? densidade_populacional2 : 0;
        }

        // Exibindo o resultado final
        printf("\nSoma dos Atributos:\n");
        printf("Carta 1 (%s) - Soma: %.2f\n", cidade1, soma1);
        printf("Carta 2 (%s) - Soma: %.2f\n", cidade2, soma2);

        if (soma1 > soma2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (soma2 > soma1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    } while (!sair);

    return 0;
}
