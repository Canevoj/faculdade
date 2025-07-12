#include <stdio.h>

int main()
{
    // Comecei declarando as variáveis necessárias para cada país deixando as variáveis de mesmo tipo agrupadas para facilitar a leitura do código.
    char player[20], nome1[20], nome2[20]; // Nome do jogador/usuário e dos países em char, pois são strings e limitei o tamanho para 20 caracteres 
    int povo1, povo2, pontos1, pontos2; // População e pontos turísticos em formato int, pois são números inteiros
    float area1, area2, pib1, pib2; // Área e PIB dos países em float, pois podem ter casas decimais

    // Iniciei o jogo com uma mensagem de boas-vindas e solicitei o nome do jogador para personalizar a experiência.
    printf("Seja muito bem-vindo ao Super Trunfo Países!\n");
    printf("Qual o seu nome?\n");
    scanf("%s", player);
    printf("Muito prazer em conhecer você, %s! Vamos começar o jogo!\n", player);
    printf("Você vai precisar cadastrar dois países para jogar.\n");

    // Solicitei os dados dos países, um de cada vez, com instruções claras sobre o que deveria ser informado.
    printf("--- PRIMEIRO PAÍS ---\n");

    printf("Qual o nome do primeiro país?\n");
    scanf("%s", nome1); // Aqui a função scanf lê o nome do país digitado pelo usuário e armazena na variável nome1

    printf("Quantos habitantes existem no(a) %s? (digite o número completo, sem pontos ou vírgulas)\n", nome1); // Como estou usando o formato %d, o usuário deve digitar o número inteiro sem formatação
    scanf("%d", &povo1);

    printf("Qual a área do(a) %s em km²? (use ponto para decimais, se houver)\n", nome1); // A área pode ter casas decimais, então uso %f para ler um número de ponto flutuante
    scanf("%f", &area1);

    printf("Qual o PIB do(a) %s em bilhões de dólares? (use ponto para decimais)\n", nome1); // PIB também pode ter casas decimais, então uso %f novamente
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem no(a) %s? (reconhecidos pela UNESCO)\n", nome1); 
    scanf("%d", &pontos1);

    // Após o cadastro do primeiro país, o programa irá informar ao usuário que agora ele deve cadastrar o segundo país.
    printf("Muito bem, agora vamos cadastrar o segundo país.\n");
    
    // Aqui seguirá o mesmo processo de cadastro do segundo país, mudando apenas as variáveis e mensagens para refletir o segundo país.
    printf("--- SEGUNDO PAÍS ---\n");

    printf("Qual o nome do segundo país?\n");
    scanf("%s", nome2);

    printf("Quantos habitantes existem no(a) %s?  (digite o número completo, sem pontos ou vírgulas)\n", nome2);
    scanf("%d", &povo2);

    printf("Qual a área do(a) %s em km²? (use ponto para decimais, se houver)\n", nome2);
    scanf("%f", &area2);

    printf("Qual o PIB do(a) %s em bilhões de dólares? (use ponto para decimais)\n", nome2);
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem no(a) %s? (reconhecidos pela UNESCO)\n", nome2);
    scanf("%d", &pontos2);

    printf("\nPerfeito! Os países foram cadastrados com sucesso!\n");
    // Após o cadastro, o programa irá exibir os dados dos países cadastrados para que o usuário possa conferir se tudo foi inserido corretamente.
    printf("Vamos conferir os países cadastrados:\n");

    // Exibindo os dados dos países cadastrados com formatação adequada para facilitar a leitura.
    printf("\n→ País 1: %s\n• População: %'d habitantes\n• Área: %'.0f km²\n• PIB: US$ %.2f bilhões\n• Quantidade de pontos turísticos: %d\n", nome1, povo1, area1, pib1, pontos1);
    printf("\n→ País 2: %s\n• População: %'d habitantes\n• Área: %'.0f km²\n• PIB: US$ %.2f bilhões\n• Quantidade de pontos turísticos: %d\n", nome2, povo2, area2, pib2, pontos2);
    
    return 0;
}