// Enzo Martins
#include <stdio.h>

int somavetor(int v[]) {
    int soma = 0;
    int i; 
    for (i = 0; i < 3; i++) {
        soma += v[i]; 
    }
    return soma;  
}
int main() {
    int v[3];  
    int i;

    printf("Digite 3 valores:\n");
    for (i = 0; i < 3; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]); 
    }

    int resultado = somavetor(v);  

    printf("A soma dos valores digitados: %d\n", resultado);

    return 0;
}


