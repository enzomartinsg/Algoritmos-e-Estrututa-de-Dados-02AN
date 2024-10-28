// Enzo Martins Guinzani
#include <stdio.h> // bibliotecas
#include <locale.h>
int calcularResultado(int v[], int n); // Declaração da função

int main() {
	setlocale(LC_ALL, "portuguese");
    int vetor[5], i, resultado;

    for (i = 0; i < 5; i++) { // Loop for que define o valor do vetor pela multiplicação
    						  // da váriavel por 2 
        vetor[i] = i * 2;
    }

    resultado = calcularResultado(vetor, 5); // Chama a função

    printf("O resultado é: %d\n", resultado);

    return 0;
}

int calcularResultado(int v[], int n) { // Estrutura da função
    int i, soma = 0; // Váriaveis

    for (i = 0; i < n; i++) { // loop for onde soma os vetores até o número definido
        soma += v[i];
    }

    return soma;
}
