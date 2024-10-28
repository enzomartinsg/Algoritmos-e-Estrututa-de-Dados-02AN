// Enzo Martins Guinzani
#include <stdio.h>

int multi(int a,int b){
	return a * b;
};
int main (){
	int a, b;
	scanf("%d %d", &a, &b);
	int resul = multi(a, b);
	printf("%d", resul);
	return 0;
}
