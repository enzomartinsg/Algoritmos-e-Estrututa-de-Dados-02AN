#include <stdio.h>

int vetor(int v[10]) {
    int soma = 0, i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        soma += v[i]; 
    }
    return soma; 
}

int calcularResultado(int v[10], int soma) {
    int resultado;
    int primeiroValor = v[0];
    int ultimoValor = v[9];
    
    resultado = soma + (primeiroValor * 5) + (ultimoValor * 2);
    return resultado;
}

int main() {
    int v[10]; 
    int soma = vetor(v); 
    
    int resultado = calcularResultado(v, soma); 
    printf("Resultado: %d\n", resultado); 
    
    return 0;
}
