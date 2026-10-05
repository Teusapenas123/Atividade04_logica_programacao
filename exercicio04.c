#include <stdio.h>

int main() {
    int i;
    char elevador, periodo;
    int A_M = 0, A_V = 0, A_N = 0;
    int B_M = 0, B_V = 0, B_N = 0;
    int C_M = 0, C_V = 0, C_N = 0;
    int M, V, N;
    int maior, menor;

    for (i = 1; i <= 50; i++) {
        printf("\nMorador %d", i);

        do {
            printf("\nElevador (A/B/C): ");
            scanf(" %c", &elevador);
        } while (elevador != 'A' && elevador != 'B' && elevador != 'C');

        do {
            printf("Periodo (M/V/N): ");
            scanf(" %c", &periodo);
        } while (periodo != 'M' && periodo != 'V' && periodo != 'N');

        if (elevador == 'A' && periodo == 'M') A_M++;
        if (elevador == 'A' && periodo == 'V') A_V++;
        if (elevador == 'A' && periodo == 'N') A_N++;

        if (elevador == 'B' && periodo == 'M') B_M++;
        if (elevador == 'B' && periodo == 'V') B_V++;
        if (elevador == 'B' && periodo == 'N') B_N++;

        if (elevador == 'C' && periodo == 'M') C_M++;
        if (elevador == 'C' && periodo == 'V') C_V++;
        if (elevador == 'C' && periodo == 'N') C_N++;
    }

    M = A_M + B_M + C_M;
    V = A_V + B_V + C_V;
    N = A_N + B_N + C_N;

    maior = M;
    menor = M;

    if (V > maior) maior = V;
    if (N > maior) maior = N;
    if (V < menor) menor = V;
    if (N < menor) menor = N;

    printf("\nPeriodo mais usado: ");
    if (maior == M) printf("Matutino");
    else if (maior == V) printf("Vespertino");
    else printf("Noturno");

    printf("\nQuantidade de cada periodo:");
    printf("\nM: %d", M);
    printf("\nV: %d", V);
    printf("\nN: %d", N);

    printf("\n\nElevador A: %d", A_M + A_V + A_N);
    printf("\nElevador B: %d", B_M + B_V + B_N);
    printf("\nElevador C: %d", C_M + C_V + C_N);

    printf("\n\nDiferenca percentual entre maior e menor periodo: %.2f%%\n",
           (maior - menor) * 100.0 / 50);

    return 0;
}
