#include <stdio.h>

int main()
{
    int tabuada;

    printf("Digite um numero de 1 a 10 para ver a tabuada: \n");
    scanf("%d", &tabuada);

    imprimirTabuada(tabuada);

    return 0;
}

void imprimirTabuada(int numero)
{
    for (int i=0 ; i<=10 ; i++)
    {
        printf("%d x %d = %d\n", i, numero, i*numero);
    }

}
