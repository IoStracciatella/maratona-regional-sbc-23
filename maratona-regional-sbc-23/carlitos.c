// Carlitos, cara, sinceramente, cresça. >:(

#include <stdio.h>

int main()
{
    int N, H;
    int A[6];
    int contador = 0;

    scanf("%d %d", &N, &H);

    // Verifica se os valores inseridos estão dentro do permitido
    if (N < 1 || N > 6) {
        printf("Erro: N fora do limite permitido (1 <= N <= 6).\n");
        return 1;
    }
    if (H < 90 || H > 200) {
        printf("Erro: H fora do limite permitido (90 <= H <= 200).\n");
        return 1;
    }

    // Insere os valores das alturas mínimas
    for (int i = 0; i < N; i++) {

        scanf("%d", &A[i]);

    }

    // Verifica em quantos brinquedos Carlitos pode brincar
    for (int i = 0; i < N; i++) {

        if (A[i] <= H) {
            contador++;
        }

    }

    printf("%d", contador);

    return 0;
}
