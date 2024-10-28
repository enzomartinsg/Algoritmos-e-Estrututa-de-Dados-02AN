// Enzo Martins
#include <stdio.h>

int somatorio(int n) {
    int somator = 0; 
	int i;
    for (i = 1; i <= n; i++) {
        somator += (5 * i * i + 2 * i + 8);
    }

    return somator; 
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = somatorio(n); 

    printf("O somatório é: %d\n", resultado); 

    return 0;
}


