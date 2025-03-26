
#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main()
{

    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo:");
    scanf("%lf", &base);
    limpar_entrada();
    printf("digite a altura do retangulo:");
    scanf("%lf", &altura);


    area = base*altura;
    perimetro = 2*(base+altura);
    diagonal = sqrt((base*base) + (altura*altura));

    printf("AREA: %lf \n", area);
    printf("PERIMETRO: %lf\n", perimetro);
    printf("DIAGONAL: %lf\n", diagonal);





    return 0;
}
