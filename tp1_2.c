#include <stdio.h>

int cuadradoDeUnNro (int n) {
    return n * n ;
}

void cuadradoNro (int n) {

    int resultado = n * n ;
    printf("El cuadrado del numero %d es: %d\n" , n , resultado);
}


void direcYcontenido (int var) {
    printf("El contenido de la variable es: %d\n" , var);
    printf("La direccion de memoria de la variable es: %p\n", &var);
}

void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main()
{
    int num1 = 60;
    int num2 = 2;

    printf("El cuadrado de %d es: %d \n" , num1 , cuadradoDeUnNro(num1));
    cuadradoNro(num2);
    direcYcontenido (num1);

    Invertir(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2); 

    orden(&num1, &num2);
    printf("Ordenados: num1 = %d, num2 = %d\n", num1, num2);


    return 0;
}
