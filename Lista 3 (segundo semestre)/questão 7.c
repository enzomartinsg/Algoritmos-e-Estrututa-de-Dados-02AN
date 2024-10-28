// Enzo Martins Guinzani
#include <stdio.h>


int maior(int v[3]){
	int maior = v[0];
	int i;
	for(i = 1; i <3; i++){
	if (maior <v[i])
	maior = v[i];
}
return maior;
}

int main (){
	int v[3];
		int i;
	scanf("%d %d %d", &v[0], &v[1], &v[2]);
		
	int resul = maior(v);
	
	int posicao = 0; 
	
    for (i = 0; i < 3; i++) {
        if (v[i] == resul) {
            posicao = i;
        }
    }
	printf("Maior: %d\n", resul);
	printf("posicao: %d", posicao);

	return 0;
}







