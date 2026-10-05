#include <stdio.h>

int main() {
    char nomes[300][50];
    char sexo[300];
    int idade[300];
    int voto[300];
    int votos[5] = {0, 0, 0, 0, 0};

    int quantidade, i, mulheres = 0, maior;

    printf("Quantidade de entrevistados (50 a 300): ");
    scanf("%d", &quantidade);

    while (quantidade < 50 || quantidade > 300) {
        printf("Quantidade invalida. Digite entre 50 e 300: ");
        scanf("%d", &quantidade);
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", nomes[i]);

        do {
            printf("Idade (maior que 12): ");
            scanf("%d", &idade[i]);
        } while (idade[i] <= 12);

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo[i]);
        } while (sexo[i] != 'M' && sexo[i] != 'F');

        if (sexo[i] == 'F')
            mulheres++;

        do {
            printf("Voto:\n");
            printf("1 - Sam Kerr - Australia\n");
            printf("2 - Alex Morgan - Estados Unidos\n");
            printf("3 - Dzsenifer Marozsan - Alemanha\n");
            printf("4 - Amandine Henry - Franca\n");
            printf("5 - Marta Vieira - Brasil\n");
            printf("Escolha: ");
            scanf("%d", &voto[i]);
        } while (voto[i] < 1 || voto[i] > 5);

        votos[voto[i] - 1]++;
    }

    printf("\n=== VOTOS ===\n");
    printf("Sam Kerr: %d\n", votos[0]);
    printf("Alex Morgan: %d\n", votos[1]);
    printf("Dzsenifer Marozsan: %d\n", votos[2]);
    printf("Amandine Henry: %d\n", votos[3]);
    printf("Marta Vieira: %d\n", votos[4]);

    maior = votos[0];

    for (i = 1; i < 5; i++) {
        if (votos[i] > maior)
            maior = votos[i];
    }

    printf("\n=== MAIS VOTADA(S) ===\n");

    if (votos[0] == maior) printf("Sam Kerr\n");
    if (votos[1] == maior) printf("Alex Morgan\n");
    if (votos[2] == maior) printf("Dzsenifer Marozsan\n");
    if (votos[3] == maior) printf("Amandine Henry\n");
    if (votos[4] == maior) printf("Marta Vieira\n");

    printf("\n=== MULHERES MAIORES DE IDADE ===\n");
    for (i = 0; i < quantidade; i++) {
        if (sexo[i] == 'F' && idade[i] >= 18)
            printf("%s - %d anos\n", nomes[i], idade[i]);
    }

    printf("\n=== MULHERES MENORES DE IDADE ===\n");
    for (i = 0; i < quantidade; i++) {
        if (sexo[i] == 'F' && idade[i] < 18)
            printf("%s - %d anos\n", nomes[i], idade[i]);
    }

    printf("\n=== HOMENS MAIORES DE IDADE ===\n");
    for (i = 0; i < quantidade; i++) {
        if (sexo[i] == 'M' && idade[i] >= 18)
            printf("%s - %d anos\n", nomes[i], idade[i]);
    }

    printf("\n=== HOMENS MENORES DE IDADE ===\n");
    for (i = 0; i < quantidade; i++) {
        if (sexo[i] == 'M' && idade[i] < 18)
            printf("%s - %d anos\n", nomes[i], idade[i]);
    }

    printf("\n=== MAIORES DE IDADE QUE VOTARAM NA MARTA ===\n");
    for (i = 0; i < quantidade; i++) {
        if (idade[i] >= 18 && voto[i] == 5)
            printf("%s - %d anos\n", nomes[i], idade[i]);
    }

    printf("\nQuantidade de mulheres: %d\n", mulheres);

    return 0;
}
