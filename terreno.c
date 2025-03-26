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
    double largura, comprimento, valor, area, preco;

    printf("Largura do terreno: ");
    scanf("%lf", &largura);
    limpar_entrada();
    printf("Comprimento do terreno: ");
    scanf("%lf", &comprimento);
    limpar_entrada();
    printf("Valor do metro quadrado: ");
    scanf("%lf", &valor);


    area = largura*comprimento;
    preco = area*valor;

    printf("A area total do terreno: %lf\n", area);
    printf("O preco do terreno:%lf\n", preco);

 return 0;
}

