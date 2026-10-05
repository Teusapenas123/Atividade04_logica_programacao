#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido.\n");
    }
    else {
        printf("Divisores de %d: ", numero);

        for (i = 1; i <= numero; i++) {
            if (numero % i == 0)
                printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
