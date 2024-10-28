// Enzo Martins
#include <stdio.h>
int soma (int a, int b){
	return a + b;
}


int main (){
	int a, b;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	
	
	printf("Resultado: %d", soma(a, b));
	
	
	return 0;
}
