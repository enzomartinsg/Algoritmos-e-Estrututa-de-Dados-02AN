#include <stdio.h>

void m(int n){
    int m[n][n];
    int i, j;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j < i){
                m[i][j] = i + 1;
            } else {
                m[i][j] = 0;
            }
        }
    }


    printf("Matriz de tamanho %d\n", n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Informe o tamanho: ");
    scanf("%d", &n);
    m(n);
    
    return 0;
}

