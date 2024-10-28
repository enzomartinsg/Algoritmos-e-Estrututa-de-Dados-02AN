// Enzo Martins Guinzani
#include <stdio.h>

int vetorinverso(int v[10]){
	int i;
	for(i = 9; i>=0; i--){
		printf("%d\n", v[i]);
	}
}
int main (){
	int v[10];
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &v[0], &v[1],&v[2],&v[3],&v[4],&v[5],&v[6], &v[7],&v[8],&v[9]);
	
	vetorinverso(v);
	
	return 0;
}
