// Enzo Martins Guinzani
#include <stdio.h>
	int i;
// declaração da 'pessoa' que contém três atributos: peso, idade e altura
typedef struct {
    double peso;   // atributo para armazenar o peso da pessoa
    int idade;     // atributo para armazenar a idade da pessoa
    double altura; // atributo para armazenar a altura da pessoa
} pessoa;

// função que permite ao usuário inserir os dados de cada pessoa no vetor
void insereDados(pessoa pessoas[], int tamanho) {
    for (i = 0; i < tamanho; i++) {
        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%lf", &pessoas[i].peso);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%lf", &pessoas[i].altura);

        printf("\n");
    }
}

// função que imprime os atributos de uma pessoa
void imprimePessoa(pessoa p) {
    // imprime o peso, a idade e a altura da pessoa com duas casas decimais para o peso e altura
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf.\n\n", p.peso, p.idade, p.altura);
}

// função principal
int main() {
	int i;
    pessoa pessoas[5]; // vetor de 5 pessoas
    int tamanho = 5;

    // chama a função para inserir dados nas pessoas
    insereDados(pessoas, tamanho);

    // imprime os dados de cada pessoa no vetor
    for (i = 0; i < tamanho; i++) {
        printf("Dados da pessoa %d:\n", i + 1);
        imprimePessoa(pessoas[i]);
    }

    return 0; // encerra o programa
}


