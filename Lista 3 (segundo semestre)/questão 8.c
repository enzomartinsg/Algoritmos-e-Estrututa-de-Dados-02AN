// Enzo Martins Guinzani
#include <stdio.h>

int exibirpares(int numero){
	int i;
	
	for(i = 1; i < numero; i++){
		if (i%2==0)
		printf("%d\n", i);
	}
};
int main (){
	
	int a;
	
	scanf("%d", &a);
	
	exibirpares(a);
	
	
	return 0;
}
