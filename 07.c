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
Função Somar(head: Pno): inteiro
var
    soma: inteiro
inicio
    soma <- 0
    enquanto head != NULO faça
        soma <- soma + head^.valor
        head <- head^.prox
    fim enquanto
    retorne soma
fim Função

*/