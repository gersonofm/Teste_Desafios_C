#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void maior()
{

    int X;
    int Y;
    int Z;

    scanf("%d %d %d", &X, &Y, &Z);

    int maior;

    if (X > Y)
    {
        maior = X;
    }
    else
    {
        maior = Y;
    }

    if (maior < Z)
    {
        maior = Z;
    }

    printf("%d", maior);
}

void velocidade()
{

    double velocidade, tempo, distancia;

    printf("Digite a distancia: ");
    scanf("%lf", &distancia);

    printf("Digite o tempo: ");
    scanf("%lf", &tempo);

    velocidade = distancia / (tempo * 60);

    printf("A velocidade media e: %lf", velocidade);
}

void fatorial()
{

    int numero;
    int fatorial = 1;

    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        fatorial = fatorial * i;

        printf("\nFatorial: %d", fatorial);
    }
}

void emprestimo()
{

    float emprestimo;
    double prazo = 30;
    double taxa = 0.08;
    double acrescimo = 0.33;
    int datapagamento;
    float pagamento;

    printf("Informe o valor do emprestimo\n");
    scanf("%f", &emprestimo);
    printf("Com quantos dias foi realizado o pagamento? \n");
    scanf("%d", &datapagamento);

    if (datapagamento <= prazo)
    {
        pagamento = emprestimo + (emprestimo * taxa);
        printf("%.2f", pagamento);
    }
    else if (datapagamento > prazo)
    {
        pagamento = emprestimo + (emprestimo * taxa) + acrescimo * (datapagamento - 30);
        printf("%.2f", pagamento);
    }
}

void vetor()
{

    int i;
    int troca;
    int copia;
    int vetor[5];

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        vetor[i] = rand() % 10;
    }

    printf("Vetor: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    do
    {
        troca = 0;

        for (i = 0; i < 4; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                copia = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = copia;
                troca = 1;
            }
        }
    } while (troca);

    printf("\n\nVetor em ordem crescente: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void volume()
{

    float V, raio = 15, h = 15;

    V = (M_PI * raio * raio * h);

    printf("\nO volume do cilindro e = %f", V);
}

int menu()
{

    int opcao = 0;
    printf("Digite a opcao:\n  1 - Maior\n  2 - Velocidade\n  3 - Fatorial\n  4 - Emprestimo\n  5 - Vetor\n  6 - Volume\n");
    printf("Opcao ==> ");
    scanf("%d", &opcao);
    return opcao;
}

int main()
{

    switch (menu())
    {

    case 1:
        maior();
        break;

    case 2:
        velocidade();
        break;

    case 3:
        fatorial();
        break;

    case 4:
        emprestimo();
        break;

    case 5:
        vetor();
        break;

    case 6:
        volume();
        break;
    }
}
