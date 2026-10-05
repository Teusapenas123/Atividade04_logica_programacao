#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade, total = 0, quantidade = 0;
    float salario;

    while (1) {
        printf("\nDigite a idade (-1 para terminar): ");
        scanf("%d", &idade);

        if (idade == -1)
            break;

        while (idade < 10 || idade > 100) {
            printf("Idade invalida. Digite entre 10 e 100: ");
            scanf("%d", &idade);
        }

        do {
            printf("Sexo (m/f): ");
            scanf(" %c", &sexo);
        } while (sexo != 'm' && sexo != 'f' && sexo != 'M' && sexo != 'F');

        do {
            printf("Olhos (a/v/c/p): ");
            scanf(" %c", &olhos);
        } while (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p' &&
                 olhos != 'A' && olhos != 'V' && olhos != 'C' && olhos != 'P');

        do {
            printf("Cabelos (l/c/p/r): ");
            scanf(" %c", &cabelos);
        } while (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r' &&
                 cabelos != 'L' && cabelos != 'C' && cabelos != 'P' && cabelos != 'R');

        do {
            printf("Salario: ");
            scanf("%f", &salario);
        } while (salario < 0);

        total++;

        if ((sexo == 'f' || sexo == 'F') &&
            idade >= 18 && idade <= 35 &&
            (olhos == 'c' || olhos == 'C') &&
            (cabelos == 'c' || cabelos == 'C')) {
            quantidade++;
        }
    }

    if (total > 0)
        printf("\nPorcentagem: %.2f%%\n", quantidade * 100.0 / total);
    else
        printf("\nNenhum habitante cadastrado.\n");

    return 0;
}
