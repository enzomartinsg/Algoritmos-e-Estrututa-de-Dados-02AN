// Enzo Martins
#include <stdio.h>

int maior(int a, int b){
	 if (a > b)
	 return a;
	 else
	 
	 return b;	

}
int main (){
	
	int a, b;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	
	printf("O maior: %d ", maior(a, b));
	
	return 0;
}
