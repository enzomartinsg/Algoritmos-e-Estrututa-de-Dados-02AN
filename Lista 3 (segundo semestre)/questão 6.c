// Enzo Martins Guinzani
#include <stdio.h>


int somavetor(int v[3]){
	int soma = v[0] + v[1] + v[2];
	
	return soma;
	
}

int main (){
	int v[3];
	int media;
	
	scanf("%d %d %d", &v[0], &v[1], &v[2]);
	
	int resul = somavetor(v);
	media = resul/3;
	
	printf("soma: %d\nmedia: %d", resul, media);
	return 0;
}
