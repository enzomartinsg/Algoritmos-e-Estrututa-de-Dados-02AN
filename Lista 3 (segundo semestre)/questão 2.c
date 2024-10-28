// Enzo Martins Guinzani
#include <stdio.h>
#include <string.h> //bibliotecas
#include <locale.h>

typedef struct {
    char modelo[50];
    int ano; //estrutura de dados
    double preco;
} Carro;

void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; //fun��o para modificar o pre�o
}

void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano); //fun��o para imprimir os dados
    printf("Pre�o: R$ %.2lf\n", c->preco);
}
//c�digo principal
int main() {
    setlocale(LC_ALL, "portuguese");

    Carro carrol; //v�riavel

    strcpy(carrol.modelo, "Xyz");
    carrol.ano = 2020; //inserir os dados do carro
    carrol.preco = 90000.00;

    printf("Dados antes da modifica��o:\n");
    imprimirCarro(&carrol); //imprimir os dados do carro antes da atualiza��o do pre�o

    modificarPreco(&carrol, 115000.00);

    printf("\nDados ap�s a modifica��o do pre�o:\n");
    imprimirCarro(&carrol); //imprimir os dados do carro depois da atualiza��o do pre�o

    return 0;
}
