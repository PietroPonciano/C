#include <stdio.h>

int main() {
    int senha1, senha2;
    senha2 = 2002;
    printf("Digite a senha: ");
    scanf("%d", &senha1);


    while (senha1 != senha2) {
        printf("Senha invalida!\n");
        printf("Digite a senha: ");
        scanf("%d", &senha1);
    }


    printf("Acesso permitido!\n");

    return 0;
}
