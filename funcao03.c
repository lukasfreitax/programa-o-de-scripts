#include <stdio.h>

void verificaNumero (int n1);
void imprimirTabuada(int num);


int main()
{
    int numero;

    printf("Digite um numero para verificacao e em seguida o programa ira mostrar sua tabuada: \n");
    scanf("%d", &numero );

    verificaNumero(numero);
    imprimirTabuada(numero);


    return 0;
}

void verificaNumero (int n1)
{

    if(n1 %2 == 0)
    {
        printf("O numero %d e  PAR!\n", n1);
    }
    else
    {
        printf("O numero %d e IMPAR! \n", n1);
    }
}

void imprimirTabuada(int num)
{
    printf("A tabuada do numero %d e : \n", num);
    for(int i=0 ; i<=10; i++)
    {
        printf("%d x %d = %d\n", i, num, i*num);
    }
}

