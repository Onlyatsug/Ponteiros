#include <stdio.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int SumValues(Node *head){
    int sum = 0;
    while (head != NULL){
        sum += head->value;
        head = head->next;
    }
    return sum;
}

int main() {

    return 0;
}

/*

tipos
    Tno = registro
            valor: inteiro
            prox: Pno
          fim registro
    Pno = ponteiro para TNo

Função CalcularMedia(head: Pno): inteiro
var
    soma, count, p: inteiro
inicio
    se head = NULO então
        retorne 0
    fim se

    soma <- 0
    count <- 0
    p <- head
    enquanto p != NULO faça
        soma <- soma + p.valor
        contador <- contador + 1
        p <- p.prox
    fim enquanto
    retorne soma / contador
fim Função


*/