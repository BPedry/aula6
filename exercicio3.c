#include <stdio.h>

int circuferencia(float raio){
    float PI = 3.14159;
    float conta = 2 * PI * raio;
    printf("circuferencia = %f", conta);
    
    return 0;
}

int main(){
    float n, resultado;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &n);
    
    resultado = circuferencia(n);
    
    return 0;
}