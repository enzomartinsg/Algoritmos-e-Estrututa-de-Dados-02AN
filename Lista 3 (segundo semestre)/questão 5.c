// Enzo Martins Guinzani
#include <stdio.h>

int imparesSemMulti7 (int a){
	int i;
	for(i = a; i > 0; i--){
	if (i%2 != 0 && i%7 != 0){
	 printf("%d\n", i);
}
} 
};

int main (){
	int a;
	
	scanf("%d", &a);
	
	imparesSemMulti7(a);

	return 0;	
}
