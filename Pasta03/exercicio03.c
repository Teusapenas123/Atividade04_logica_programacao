#include <stdio.h>

int main() {
    int i, idade;
    char opiniao;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int somaRuim = 0;
    int maiorPessimo = 0, maiorOtimo = 0, maiorRuim = 0;

    for (i = 1; i <= 100; i++) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        do {
            printf("Opiniao (A/B/C/D/E): ");
            scanf(" %c", &opiniao);
        } while (opiniao != 'A' && opiniao != 'B' && opiniao != 'C' &&
                 opiniao != 'D' && opiniao != 'E' &&
                 opiniao != 'a' && opiniao != 'b' && opiniao != 'c' &&
                 opiniao != 'd' && opiniao != 'e');

        if (opiniao == 'A' || opiniao == 'a') {
            otimo++;
            if (idade > maiorOtimo)
                maiorOtimo = idade;
        }
        else if (opiniao == 'B' || opiniao == 'b')
            bom++;
        else if (opiniao == 'C' || opiniao == 'c')
            regular++;
        else if (opiniao == 'D' || opiniao == 'd') {
            ruim++;
            somaRuim = somaRuim + idade;

            if (idade > maiorRuim)
                maiorRuim = idade;
        }
        else {
            pessimo++;

            if (idade > maiorPessimo)
                maiorPessimo = idade;
        }
    }

    printf("\nRespostas otimo: %d\n", otimo);
    printf("Diferenca percentual entre bom e regular: %.2f%%\n",
           ((bom - regular) < 0 ? (regular - bom) : (bom - regular)));

    if (ruim > 0)
        printf("Media de idade das respostas ruim: %.2f\n", somaRuim / (float)ruim);
    else
        printf("Nao houve respostas ruim.\n");

    printf("Percentual de pessimo: %.2f%%\n", pessimo);

    if (pessimo > 0)
        printf("Maior idade que respondeu pessimo: %d\n", maiorPessimo);

    if (otimo > 0 && ruim > 0) {
        int diferenca = maiorOtimo - maiorRuim;

        if (diferenca < 0)
            diferenca = -diferenca;

        printf("Diferenca entre as maiores idades de otimo e ruim: %d\n", diferenca);
    }

    return 0;
}
