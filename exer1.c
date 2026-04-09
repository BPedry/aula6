#include <stdio.h>

int conta(int num){
    for (int ini=1; ini <= num; ini++){
        printf("%d \n", ini);
    }
    
    return 0;
}

int main() {
    int n, res;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    res = conta(n);
    return 0;
    
}