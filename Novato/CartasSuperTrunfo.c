#include <stdio.h>

int main()
{
    // Declaração das variáveis principais do jogo
    char player[20], estado1[50], estado2[50], cidade1[50], cidade2[50]; // Nome do jogador, estados e cidades, juntei as variaveis de mesmo formato para facilitar a leitura
    char codigo1[5], codigo2[5]; // Códigos das cartas (ex: SP01)
    int povo1, povo2, pontos1, pontos2; // População e pontos turísticos
    float area1, area2, pib1, pib2; // Área e PIB

    // Mensagens iniciais para ambientar o usuário
    printf("Seja muito bem-vindo ao Super Trunfo - Países!\n");
    printf("Neste jogo teremos cartas de 8 estados sendo 4 cidades de cada estado.\n");
    printf("Você será o jogador que irá cadastrar as cidades.\n");
    printf("Cada carta terá um código único, que será composto pela SIGLA do estado e o número referente a cada uma das 4 cidades. Exemplo: SP01, SC02.\n");
    printf("Vamos começar!\n");

    // Cadastro do nome do jogador
    printf("Qual o seu primeiro nome?\n");
    scanf("%19s", player); // Lê o nome do jogador, limitando a 19 caracteres para evitar overflow

    printf("Muito prazer em conhecer você, %s! Vamos começar o jogo!\n", player);
    printf("Você vai precisar cadastrar duas cidades para jogar.\n");

    // Cadastro da primeira cidade
    printf("--- PRIMEIRA CARTA ---\n");

    printf("Qual o nome do estado onde está localizada a primeira cidade? (sem espaço)\n");
    scanf("%49s", estado1); 

    printf("Qual o nome da primeira cidade? (sem espaço)\n");
    scanf("%49s", cidade1);

    printf("Crie um código para essa carta (use 2 letras e 2 números, por exemplo: SP01):\n", estado1);
    scanf("%s", codigo1);

    printf("Quantos habitantes existem em (no) %s? (digite o número completo, sem pontos ou vírgulas)\n", cidade1);
    scanf("%d", &povo1);

    printf("Qual a área de (o) %s em km²? (use ponto para decimais, se houver)\n", cidade1);
    scanf("%f", &area1);

    printf("Qual o PIB do(a) %s em bilhões de dólares? (use ponto para decimais)\n", cidade1);
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos existem em (no) %s?\n", cidade1);
    scanf("%d", &pontos1);

    printf("Muito bem, agora vamos cadastrar a segunda cidade.\n");

    // Cadastro da segunda cidade
    printf("--- SEGUNDA CARTA ---\n");

    printf("Qual o nome do estado onde está localizada a segunda cidade?\n");
    scanf("%49s", estado2); 

    printf("Qual o nome da segunda cidade?\n");
    scanf("%49s", cidade2); 

    printf("Crie um código para essa carta (use 2 letras e 2 números, por exemplo: SP01):\n", estado2);
    scanf("%s", codigo2);

    printf("Quantos habitantes existem em (no) %s? (digite o número completo, sem pontos ou vírgulas)\n", cidade2);
    scanf("%d", &povo2);

    printf("Qual a área de (o) %s em km²? (use ponto para decimais, se houver)\n", cidade2);
    scanf("%f", &area2);

    printf("Qual o PIB do(a) %s em bilhões de dólares? (use ponto para decimais)\n", cidade2);
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos existem em (no) %s?\n", cidade2);
    scanf("%d", &pontos2);

    // Exibe o resumo das cidades cadastradas
    printf("\nPerfeito! As cidades foram cadastradas com sucesso!\n");
    printf("Vamos conferir as cartas\n");

    printf("\n--- CARTA 1 ---\n→ Estado: %s\n→ Cidade: %s\n• População: %d habitantes\n• Área: %.0f km²\n• PIB: US$ %.2f bilhões\n• Quantidade de pontos turísticos: %d\n# Código: %s\n", estado1, cidade1, povo1, area1, pib1, pontos1, codigo1);

    printf("\n--- CARTA 2 ---\n→ Estado: %s\n→ Cidade: %s\n• População: %d habitantes\n• Área: %.0f km²\n• PIB: US$ %.2f bilhões\n• Quantidade de pontos turísticos: %d\n# Código: %s\n", estado2, cidade2, povo2, area2, pib2, pontos2, codigo2);

    return 0;
}