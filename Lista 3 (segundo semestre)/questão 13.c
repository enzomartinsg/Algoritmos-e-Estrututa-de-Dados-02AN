#include <stdio.h>

float calcularMedia(int num1, int num2, int num3){
    float media;
    
    media = (num1+num2+num3)/3;
    
    printf("%.2f", media);
}
int main(){
float media;
int a, b, c;

scanf("%d %d %d", &a, &b, &c);

calcularMedia(a, b, c);

return 0;
} 
