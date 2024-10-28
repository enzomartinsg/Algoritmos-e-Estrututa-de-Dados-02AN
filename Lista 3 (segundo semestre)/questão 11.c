// Enzo Martins Guinzani
#include <stdio.h>

int menorNumero(int num1, int num2, int num3){

	if (num1<num2 && num1 < num3){
		printf("Menor: %d", num1);
	}
	else if (num2<num1 && num2 < num3){
		printf("Menor: %d", num2);
	}
	else if (num3< num1 && num3 < num2){
	
		printf("Menor: %d", num3);
}
}
int main (){
	int a, b, c;
	scanf("%d %d %d", &a, &b,&c);
	
	menorNumero(a, b, c);
	return 0;	
}
