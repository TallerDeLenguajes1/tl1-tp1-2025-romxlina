#include <stdio.h>

int main()
{

    printf("Hola Mundo\n");
    
    /*Declare un puntero en el procedimiento principal que apunte a una
    variable de algún tipo y muestre por pantalla lo siguiente:
    1) El contenido del puntero
    2) La dirección de memoria almacenada por el puntero.
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la
    función sizeof() */ 

    int numero = 10;
    int *puntero = &numero;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &numero);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamanio en memoria de la variable: %lu bytes\n", sizeof(numero));

    return 0;
}
