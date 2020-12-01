#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio_ext.h>

void somar(),subtrair(),dividir(),multiplicar(), entrada_valor();
int soma, subtracao, divisao, multiplicacao, valor_a, valor_b, operacao, resposta;

int main(){
    system("clear");
    printf("Digite dois valores para realizar uma operação:\n");
    scanf("%i %i", &valor_a, &valor_b);
    system("clear");
    printf("Selecione o tipo de operação:\n1- Soma\n2- Subtração\n3- Divisão\n4- Multiplicação\n");
    scanf("%i", &operacao);
    system("clear");
    if(operacao == 1){
        somar();
    }
    if(operacao == 2){
        subtrair();
    }
    if(operacao == 3){
        dividir();
    }
    if(operacao == 4){
        multiplicar();
    }
    resposta = 0;
    printf("\nDeseja realizar outra operação?\n1- Sim\n2- Não\n");
    scanf("%i", &resposta);
    if(resposta == 1){
        return main();
    }
    if(resposta == 2){
        return 0;
    }
}
void somar(){
    soma = valor_a + valor_b;
    printf("Soma: %i\n", soma);
}
void subtrair(){
    subtracao = valor_a - valor_b;
    printf("Subtração: %i\n", subtracao);
}
void dividir(){
    divisao = valor_a / valor_b;
    printf("Divisão: %i\n", divisao);
}
void multiplicar(){
    multiplicacao = valor_a * valor_b;
    printf("Multiplicação: %i\n", multiplicacao);
}
void entrada_valor(){
    printf("Entre com valor a: ");
    scanf("%i", &valor_a);
    printf("Entre com valor b:");
    scanf("%i", &valor_b);
}