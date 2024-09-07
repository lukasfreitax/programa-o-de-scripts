// Enunciado: Escreva um programa em C que receba 8 números inteiros do usuário e os armazene em um vetor. Em seguida, o programa deve calcular e imprimir a soma, maior e o menor desses números e inverter a ordem dos elementos do
// vetor e imprimir o vetor resultante.

#include <stdio.h>

int main(){

    int numeros [8];
    int soma = 0;

    printf("Digite 8 numeros inteiros: \n ");

    for (int i = 0 ;i < 8 ; i++ ){
        printf("Digite o numero %d\n", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma: %d\n", soma);


    return 0;
}



