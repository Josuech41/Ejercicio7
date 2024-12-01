#include <stdio.h>

int multiplo(int num1, int num2);

int main() {
    int cantidad, num1, num2, resultado;

    printf("¿Cuántos pares de números desea introducir? ");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        printf("\nPar %d:\n", i + 1);

        printf("Introduce el primer número: ");
        scanf("%d", &num1);
        printf("Introduce el segundo número: ");
        scanf("%d", &num2);

        resultado = multiplo(num1, num2);

        if (resultado == 1) {
            printf("El número %d es múltiplo de %d.\n", num2, num1);
        } else {
            printf("El número %d no es múltiplo de %d.\n", num2, num1);
        }
    }

    return 0;
}

int multiplo(int num1, int num2) {
    if (num1 == 0) {
        return 0; 
    }
    return (num2 % num1 == 0) ? 1 : 0;
}
