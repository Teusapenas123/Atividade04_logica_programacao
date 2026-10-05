#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite o termo da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido.\n");
    }
    else if (n == 0) {
        printf("Resultado: 0\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            proximo = a + b;
            a = b;
            b = proximo;
        }

        printf("Resultado: %d\n", a);
    }

    return 0;
}
