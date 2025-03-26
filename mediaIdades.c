#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    double idade1, idade2, media;
    char nome1[50], nome2[50];

    printf("Digite a primeira idade:");
    scanf("%lf", &idade1);
    printf("Digite a segunda idade:");
    scanf("%lf", &idade2);

    printf("Digite o primeiro nome:");
    ler_texto(nome1, 50);
    limpar_entrada();
    printf("Digite o segundo nome:");
    ler_texto(nome2, 50);


    media = (idade1 + idade2) / 2;

    printf("A media das idades sera de %.2lf", media);

    return 0;
}
