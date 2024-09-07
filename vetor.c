#include <stdio.h>

int main(){

    float nota, total = 0, maior, menor;
    float  notas[4];
    int n = 4;

    for (int i = 1; i <= n; i++){
        printf("Digite a nota: %d \n", i );
        scanf("%f", &nota);
        notas[i]= nota;
        total = total + nota;
        if (i == 1){
            maior = nota;
            menor = nota;
        }
        if (nota > maior){
            maior = nota;
        }
        if (nota < menor){
            menor = nota;
        }
    }

    printf("Media:  %.2f \n", total/ n);
    printf("Maior: %.2f \n ", maior);
    printf("Menor: %.2f \n ", menor);

    for (int i = 0 ; i <n; i++){
        printf("Vetor na posicao %d valor: %.2f \n", i, notas[i]);
    }
    return 0;
}
