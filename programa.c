#include <stdio.h>
#include <math.h>

/* Funcao que resolve uma equacao do primeiro grau */
void primeiroGrau()
{
    float a, b, x;

    printf("\n=== RESOLUCAO DA EQUACAO DO PRIMEIRO GRAU ===\n");
    printf("Forma: ax + b = 0\n\n");

    /* Entrada dos valores */
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    /* Verifica se a equacao pode ser de primeiro grau */
    if (a == 0)
    {
        if (b == 0)
        {
            printf("\nA equacao possui infinitas solucoes.\n");
        }
        else
        {
            printf("\nA equacao nao possui solucao.\n");
        }

        return;
    }

    /* Mostra a equacao digitada */
    printf("\nEquacao informada: %.2fx + %.2f = 0\n", a, b);

    printf("\nPassos:\n");

    /* Primeiro passo */
    printf("1) Escrevendo a equacao:\n");
    printf("   (%.2f)x + (%.2f) = 0\n", a, b);

    /* Segundo passo */
    printf("\n2) Isolando o termo com x:\n");
    printf("   %.2fx = - (%.2f)\n", a, b);
    printf("   %.2fx = %.2f\n", a, -b);

    /* Terceiro passo */
    printf("\n3) Dividindo os dois lados por %.2f:\n", a);
    printf("   x = (%.2f) / (%.2f)\n", -b, a);

    /* Calcula o valor de x */
    x = -b / a;

    /* Mostra o resultado */
    printf("\n4) Calculo:\n");
    printf("   x = %.5f\n", x);

    printf("\nSolucao: x = %.5f\n", x);
}


/* Funcao que resolve uma equacao do segundo grau */
void segundoGrau()
{
    float a, b, c;
    float delta;
    float x1, x2;

    printf("\n=== RESOLUCAO DA EQUACAO DO SEGUNDO GRAU ===\n");
    printf("Forma: ax^2 + bx + c = 0\n\n");

    /* Entrada dos valores */
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    /* Verifica se a equacao e realmente de segundo grau */
    if (a == 0)
    {
        printf("\nO valor de a nao pode ser zero em uma equacao do segundo grau.\n");
        return;
    }

    /* Mostra a equacao informada */
    printf("\nEquacao informada: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);

    printf("\nPassos:\n");

    /* Primeiro passo */
    printf("1) Identificando os coeficientes:\n");
    printf("   a = %.2f\n", a);
    printf("   b = %.2f\n", b);
    printf("   c = %.2f\n", c);

    /* Segundo passo: calcular o Delta */
    printf("\n2) Calculando o discriminante (Delta):\n");
    printf("   Delta = b^2 - 4.a.c\n");

    printf("   Delta = (%.2f)^2 - 4.(%.2f).(%.2f)\n",
           b, a, c);

    delta = (b * b) - (4 * a * c);

    printf("   Delta = %.2f\n", delta);

    /* Verifica o valor do Delta */
    if (delta < 0)
    {
        printf("\n3) Como Delta < 0, nao existem raizes reais.\n");
    }
    else if (delta == 0)
    {
        /* Quando Delta e zero, existe uma raiz real */
        printf("\n3) Como Delta = 0, existe uma raiz real.\n");

        printf("\n4) Calculando a raiz:\n");
        printf("   x = (-b + sqrt(Delta)) / (2.a)\n");
        printf("   x = (-%.2f + sqrt(%.2f)) / (2.%.2f)\n",
               b, delta, a);

        x1 = (-b + sqrt(delta)) / (2 * a);

        printf("   x = %.5f\n", x1);

        printf("\nSolucao: x = %.5f\n", x1);
    }
    else
    {
        /* Quando Delta e maior que zero, existem duas raizes reais */
        printf("\n3) Como Delta > 0, existem duas raizes reais.\n");

        printf("\n4) Calculando x1:\n");
        printf("   x1 = (-b + sqrt(Delta)) / (2.a)\n");
        printf("   x1 = (-%.2f + sqrt(%.2f)) / (2.%.2f)\n",
               b, delta, a);

        x1 = (-b + sqrt(delta)) / (2 * a);

        printf("   x1 = %.5f\n", x1);

        printf("\n5) Calculando x2:\n");
        printf("   x2 = (-b - sqrt(Delta)) / (2.a)\n");
        printf("   x2 = (-%.2f - sqrt(%.2f)) / (2.%.2f)\n",
               b, delta, a);

        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("   x2 = %.5f\n", x2);

        printf("\nSolucoes reais:\n");
        printf("x1 = %.5f\n", x1);
        printf("x2 = %.5f\n", x2);
    }
}


/* Funcao que mostra as informacoes do programa */
void sobrePrograma()
{
    printf("\n=== SOBRE O PROGRAMA ===\n");

    printf("Programa desenvolvido para a disciplina de Algoritmos I.\n");
    printf("Resolucao de equacoes do primeiro e segundo grau.\n\n");

    printf("Aluno: Guilherme Borinelli\n");
}


/* Funcao principal do programa */
int main()
{
    int opcao;

    /* O menu continua aparecendo ate escolher 0 */
    do
    {
        printf("\n========================================\n");
        printf("           MENU PRINCIPAL\n");
        printf("========================================\n");
        printf("1 - Resolver equacao do primeiro grau\n");
        printf("2 - Resolver equacao do segundo grau\n");
        printf("3 - Sobre o Programa\n");
        printf("0 - Sair\n");
        printf("========================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        /* Escolhe qual funcao sera executada */
        switch (opcao)
        {
            case 1:
                primeiroGrau();
                break;

            case 2:
                segundoGrau();
                break;

            case 3:
                sobrePrograma();
                break;

            case 0:
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}