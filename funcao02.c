#include <stdio.h>
//cria se o procedimento(void), e ela será chamada no int main
//cria uma função com parametro
//ao ser chamada no main,
//ela executa o for com o numero enviado

void imprimirTabuada(int num)
{
    for(int i=0 ; i<=10; i++)
    {
        printf("%d x %d = %d\n", i, num, i*num);
    }
}

float calcularMedia (float n1, float n2)
{
    float media = (n1 + n2)/2;
    return media;
}

int main()
{
    int n1;
    float mediaLucas;
    printf("Digite o numero da tabuada : \n");
    scanf("%d", &n1);
    imprimirTabuada(n1);


    mediaLucas = calcularMedia (8, 9.2);
    printf("A media do Lucas e : %f", mediaLucas);

    return 0;
}

