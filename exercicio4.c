#include <stdio.h>
#include <math.h>

int area(float raio){
    float PI = 3.14159;
    float conta = PI * pow(raio, 2);
    printf("area = %f", conta);
    
    return 0;
}

int main(){
    float n, resultado;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &n);
    
    resultado = area(n);
    
    return 0;
}