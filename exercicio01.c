#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;

    do {
        printf("\n1 - ABACAXI - R$ 5,00");
        printf("\n2 - MACA - R$ 1,00");
        printf("\n3 - PERA - R$ 4,00");
        printf("\n0 - Finalizar");
        printf("\nEscolha uma fruta: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Quantidade: ");
            scanf("%d", &quantidade);

            if (opcao == 1)
                total = total + quantidade * 5;
            else if (opcao == 2)
                total = total + quantidade * 1;
            else
                total = total + quantidade * 4;
        }

    } while (opcao != 0);

    printf("\nValor total: R$ %.2f\n", total);

    return 0;
}
