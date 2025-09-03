#include <stdio.h>
#include <math.h>
int main(){
    int numero, a, b;

    printf("Selecione uma operação: \n");
    printf("1 - Adicao \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicação \n");
    printf("4 - Divisão\n");

    scanf("%d" , &numero);

    printf("Escolha dois números: \n");
    scanf("%d" , &a);
    scanf("%d" , &b);

    switch (numero){
        case 1:
            printf("Resultado %d \n" , a + b);
            break;
        case 2:
            printf("Resultado %d \n" , a - b );
            break;
        case 3:
            printf("Resultado %d" , a * b);
            break;
        case 4:
            printf("Resultado %d" , a / b);

    }

    return 0;
    
    
}