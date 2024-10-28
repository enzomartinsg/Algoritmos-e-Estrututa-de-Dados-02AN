// Enzo Martins Guinzani
#include <stdio.h>

int nota (int a, int b, int c, int d){
	int media;

	media = (a + b + c + d)/4;
	
	return media;
};

int main (){
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int resul = nota(a, b, c ,d);
	
	if (resul >= 7)
		printf("Aprovado: %d", resul);
		
		else
		printf("Reprovado: %d", resul);
	
	
	return 0;
}
		
	
