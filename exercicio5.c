#include <stdio.h>
#include <math.h>

int area(float raio){
    float PI = 3.14159;
    float conta = PI * pow(raio, 2);
    printf("area = %f \n", conta);
    
    return 0;
}

int circuferencia(float raio){
    float PI = 3.14159;
    float conta = 2 * PI * raio;
    printf("circuferencia = %f \n", conta);
    
    return 0;
}

int diametro(float raio){
    float conta = raio * 2;
    printf("diametro = %2.f \n", conta);
    
    return 0;
}

int main(){
    float n, r1, r2, r3;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &n);
    
    printf("raio = %f \n", n);
    r1 = area(n);
    r2 = circuferencia(n);
    r3 = diametro(n);
    
    return 0;
}