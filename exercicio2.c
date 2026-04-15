#include <stdio.h>

int diametro(float raio){
    float conta = raio * 2;
    printf("diametro = %2.f", conta);
    
    return 0;
}

int main(){
    float n, resultado;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &n);
    
    resultado = diametro(n);
    
    return 0;
}