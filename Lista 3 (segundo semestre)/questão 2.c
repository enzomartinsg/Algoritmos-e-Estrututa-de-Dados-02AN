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
    c->preco = novoPreco; //função para modificar o preço
}

void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano); //função para imprimir os dados
    printf("Preço: R$ %.2lf\n", c->preco);
}
//código principal
int main() {
    setlocale(LC_ALL, "portuguese");

    Carro carrol; //váriavel

    strcpy(carrol.modelo, "Xyz");
    carrol.ano = 2020; //inserir os dados do carro
    carrol.preco = 90000.00;

    printf("Dados antes da modificação:\n");
    imprimirCarro(&carrol); //imprimir os dados do carro antes da atualização do preço

    modificarPreco(&carrol, 115000.00);

    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carrol); //imprimir os dados do carro depois da atualização do preço

    return 0;
}
