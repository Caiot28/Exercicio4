#include<stdio.h>
#include<math.h>

main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 4 && numero < 6) {
        printf("O numero e igual a 5");

    } else if (numero > 199 && numero < 201) {
        printf("O numero e igual a 200");

    } else if (numero > 399 && numero < 401) {
        printf("O numero e igual a 400");

    } else if (numero >= 500 && numero <= 1000) {
        printf("O numero esta entre 500 e 1000");
    } else {
        printf("O numero nao obedece as condicoes, tente novamente");
    }

}