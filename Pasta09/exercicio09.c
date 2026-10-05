#include <stdio.h>

int main() {
    char nome[50], sexo;
    int i, homens = 0, mulheres = 0;
    float altura, peso;
    float somaAltHomens = 0, somaAltMulheres = 0, somaAltGrupo = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoGrupo = 0;

    for (i = 1; i <= 10; i++) {
        printf("\nPessoa %d\n", i);

        printf("Nome: ");
        scanf(" %[^\n]", nome);

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Peso: ");
        scanf("%f", &peso);

        somaAltGrupo += altura;
        somaPesoGrupo += peso;

        if (sexo == 'M' || sexo == 'm') {
            homens++;
            somaAltHomens += altura;
            somaPesoHomens += peso;
        }
        else {
            mulheres++;
            somaAltMulheres += altura;
            somaPesoMulheres += peso;
        }
    }

    printf("\nNumero de homens: %d\n", homens);
    printf("Numero de mulheres: %d\n", mulheres);

    if (homens > 0) {
        printf("Altura media dos homens: %.2f\n", somaAltHomens / homens);
        printf("Peso medio dos homens: %.2f\n", somaPesoHomens / homens);
    }

    if (mulheres > 0) {
        printf("Altura media das mulheres: %.2f\n", somaAltMulheres / mulheres);
        printf("Peso medio das mulheres: %.2f\n", somaPesoMulheres / mulheres);
    }

    printf("Altura media do grupo: %.2f\n", somaAltGrupo / 10);
    printf("Peso medio do grupo: %.2f\n", somaPesoGrupo / 10);

    return 0;
}
