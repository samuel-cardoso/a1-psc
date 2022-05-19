#include <stdio.h>
#include <stdlib.h>

float mediaPonderada(valor1, valor2)
{
    float valor3 = valor1 + valor2;
    float mediaP = ((valor1 * 1) + (valor2 * 3) + (valor3 * 5)) / (1 + 3 + 5);
    return mediaP;
}





int tabuadas(valor1, valor2)
{   
    int res1[10]; 
    int res2[10];

    printf("\n == Tabuada do %d ==\n\n", valor1);
    for (int number = 1; number <= 10; number++)
    {
        printf("  %d x %d = %d\n", valor1, number, res1[number] = number * valor1);
    }        

    int somaTab1 = res1[1]+res1[2]+res1[3]+res1[4]+res1[5]+res1[6]+res1[7]+res1[8]+res1[9]+res1[10];
    printf("\n A soma de todos os resultados: %d\n", somaTab1); 

    printf("\n == Tabuada do %d ==\n\n", valor2);
    for (int number = 1; number <= 10; number++)
    {   
        printf("  %d x %d = %d\n", valor2, number, res2[number] = number * valor2);
    }
    
    int somaTab2 = res2[1]+res2[2]+res2[3]+res1[4]+res2[5]+res2[6]+res2[7]+res2[8]+res2[9]+res2[10];
    printf("\n A soma de todos os resultados: %d\n", somaTab2);

    int somaTab12 = somaTab1 + somaTab2;

    float mediaPond = ((somaTab1 * 1) + (somaTab2 * 3) + (somaTab12 * 5)) / (1 + 3 + 5);

    return mediaPond; 
}




void main()
{
    int valor1, valor2;

    printf("\n ===== Tarefa Avaliativa =====\n\n");
    printf(" Digite um numero: ");
    scanf("%d", &valor1);
    printf(" Digite outro numero: ");
    scanf("%d", &valor2);

    //if (valor1 > 0 && valor2 < 0 || valor1 < 0 && valor2 > 0 || valor1 > 0 && valor2 > 0 || valor1 < 0 && valor2 < 0)
    //{
        if (valor1 > 0 && valor2 > 0)
        {
            printf("\n Temos dois numeros positivos: %d, %d", valor1, valor2);
        }
        else if (valor1 < 0 && valor2 < 0)
        {
            printf("\n Temos dois numeros negativos: %d, %d", valor1, valor2);
        }
        if (valor1 > 0 && valor2 < 0)
        {
            printf("\n Temos um numero positivo %d e um numero negativo %d ", valor1, valor2);
        }
        else if (valor1 < 0 && valor2 > 0)
        {
            printf("\n Temos um numero negativo %d e um numero positivo %d ", valor1, valor2);
        }
   // }
  //  else
   // {
    //    printf("\n\n   DADO INVALIDO!!!\n\n");
     //   printf(" Digite apenas numeros\n");
     //   exit(0);
  //  }

    float mediaFinal = mediaPonderada(valor1, valor2);
    printf("\n\n Media Final = %.1f\n", mediaFinal);
    
    int mediaPondTabs = tabuadas(valor1, valor2);
    printf("\n\n Media ponderada: %d\n\n",mediaPondTabs);

  

} // fim da função main
