/*
 * Atividade 2 - Sistema de Caixa Eletrônico (ATM)
 * Algoritmos e Pensamento Computacional - UNICID
 * Grupo 6
 */

#include <stdio.h>

int main(void) {
    // Saldo de exemplo pra fazer a simulação do caixa eletrônico
    int saldo = 1000;
    int valor;
    int resto;
    int n100, n50, n20, n10, n5, n2, n1;

    // Mostra o saldo e pergunta quanto a pessoa quer sacar
    printf("Saldo disponivel: R$ %d\n", saldo);
    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    // Primeiro confere se o valor digitado faz sentido
    if (valor <= 0) {
        printf("Erro: valor invalido. Digite um valor maior que zero.\n");
    } else if (valor > saldo) {
        printf("Erro: saldo insuficiente. Saldo: R$ %d | Saque pedido: R$ %d\n",
               saldo, valor);
    } else {
        // Vai pegando as notas maiores primeiro e guardando o que sobra
        n100 = valor / 100;
        resto = valor % 100;

        n50 = resto / 50;
        resto = resto % 50;

        n20 = resto / 20;
        resto = resto % 20;

        n10 = resto / 10;
        resto = resto % 10;

        n5 = resto / 5;
        resto = resto % 5;

        n2 = resto / 2;
        resto = resto % 2;

        // Se sobrar 1 real, ele fica como moeda de 1
        n1 = resto;

        // Só mostra as notas e moedas que vão ser usadas no saque
        printf("Notas entregues:\n");
        if (n100 > 0) printf("%d nota(s) de 100\n", n100);
        if (n50 > 0) printf("%d nota(s) de 50\n", n50);
        if (n20 > 0) printf("%d nota(s) de 20\n", n20);
        if (n10 > 0) printf("%d nota(s) de 10\n", n10);
        if (n5 > 0) printf("%d nota(s) de 5\n", n5);
        if (n2 > 0) printf("%d moeda(s) de 2\n", n2);
        if (n1 > 0) printf("%d moeda(s) de 1\n", n1);
    }

    return 0;
}
