#include <stdio.h>

int main()
{
    char player[20], nome1[20], nome2[20];
    int povo1, povo2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("Seja muito bem-vindo ao Super Trunfo Países!\n");

    printf("Qual o seu nome?\n");
    scanf("%s", player);
    printf("Muito prazer em conhecer você, %s! Vamos começar o jogo!\n", player);

    printf("Você vai precisar cadastrar dois países para jogar.\n");

    printf("Vamos começar com o primeiro país.\n");

    printf("Qual o nome do primeiro país?\n");
    scanf("%s", nome1);

    printf("Quantos habitantes existem no(a) %s?\n", nome1);
    scanf("%d", &povo1);

    printf("Qual a área do(a) %s em km²?\n", nome1);
    scanf("%f", &area1);

    printf("Qual o PIB do(a) %s em bilhões de dólares?\n", nome1);
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem no(a) %s?\n", nome1);
    scanf("%d", &pontos1);

    printf("Muito bem, agora vamos cadastrar o segundo país.\n");

    printf("Qual o nome do segundo país?\n");
    scanf("%s", nome2);

    printf("Quantos habitantes existem no(a) %s?\n", nome2);
    scanf("%d", &povo2);

    printf("Qual a área do(a) %s em km²?\n", nome2);
    scanf("%f", &area2);

    printf("Qual o PIB do(a) %s em bilhões de dólares?\n", nome2);
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem no(a) %s?\n", nome2);
    scanf("%d", &pontos2);

    printf("Perfeito! Os países foram cadastrados com sucesso!\n");
    printf("Vamos conferir os países cadastrados:\n");

    printf("\n→País 1: %s\n•População: %d\n•Área: %f km²\n•PIB:$ %3f bilhões\n•Quantidade de pontos turísticos: %d\n", nome1, povo1, area1, pib1, pontos1);
    printf("\n→País 2: %s\n•População: %d\n•Área: %f km²\n•PIB:$ %3f bilhões\n•Quantidade de pontos turísticos: %d\n", nome2, povo2, area2, pib2, pontos2);

    return 0;
}