// Enzo Martins Guinzani
#include <stdio.h>

void maiorNumero(int num1, int num2){
	if (num1 > num2){
	printf("Maior: %d", num1);
}
	else if(num1 < num2){
	printf("Maior: %d", num2);
	}
	else {
	printf("Erro, numeros iguais");
}
}
int main (){
	int a, b;
	scanf("%d %d", &a, &b);
	maiorNumero(a, b);
	return 0;
}




