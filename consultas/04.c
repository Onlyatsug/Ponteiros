#include <stdio.h>


typedef struct Node {
    float value;
    struct Node* next;
} Node;

// iterativo
int CountWhenIsIn(Node* head, float x) {
    int count = 0;
    while (head != NULL){
        if (head->value == x) {
            count++;
        }
        head = head->next;
    }
    return count;
}

//recursivo
int CountWhenIsInR(Node* head, float x){
    if (head == NULL){
        return 0;
    }
    if (head->value == x){
        return CountWhenIsInR(head->next, x) + 1;
    } else {
        return CountWhenIsInR(head->next, x);
    }
}

int main() {
    return 0;
}

/*

// iterativa

tipo
    Tno = registro
            valor: real
            prox: Pno
          fim registro
    Pno = ponteiro para Tno


Função QuantasVezesX(head: Pno, x: real): inteiro
var
    count: inteiro
inicio
    count <- 0
    p <- head
    enquanto p != NULO faça
        se p^.valor = x então
            count <- count + 1
        fim se
        p <- p^.prox
    fim enquanto
    retorne count
fim Função

// recursiva

Função QuantasVezesXR(head: Pno, x: real): inteiro
inicio
    se head = NULO então
        retorne 0
    fim se
    se head^.valor = x então
        retorne 1 + QuantasVezesXR(head^.prox, x)
    fim se
    retorne QuantasVezesXR(head^.prox, x)
fim Função
*/