// Enzo Martins Guinzani
#include <stdio.h> // bibliotecas
#include <locale.h>
int calcularResultado(int v[], int n); // Declara��o da fun��o

int main() {
	setlocale(LC_ALL, "portuguese");
    int vetor[5], i, resultado;

    for (i = 0; i < 5; i++) { // Loop for que define o valor do vetor pela multiplica��o
    						  // da v�riavel por 2 
        vetor[i] = i * 2;
    }

    resultado = calcularResultado(vetor, 5); // Chama a fun��o

    printf("O resultado �: %d\n", resultado);

    return 0;
}

int calcularResultado(int v[], int n) { // Estrutura da fun��o
    int i, soma = 0; // V�riaveis

    for (i = 0; i < n; i++) { // loop for onde soma os vetores at� o n�mero definido
        soma += v[i];
    }

    return soma;
}
