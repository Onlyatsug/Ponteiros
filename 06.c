#include <stdio.h>


typedef struct Node {
    char element;
    struct Node* next;
} Node;


//iterativa
char CharInPosition(Node* head, int p) {
    int index = 1;
    while (head != NULL && index <= p) {
        if (index == p){
            return head->element;
        }
        index++;
        head = head->next;
    }
    return ' ';
}

//recursiva
char CharInPositionR(Node* head, int p) {
    if (head == NULL) {
        return ' ';
    }
    if (p > 1) {
        return CharInPositionR(head->next, p - 1);
    } else {
        return head->element;
    }
} 

int main() {
    return 0;
}

/*

interativa 

tipo
    Tno = registro
            texto: string
            prox: Pno
          fim registro
    Pno = ponteiro para Tno
Função CharInPosition(head: Pno, p: inteiro): string
var
    index: inteiro
inicio
    index <- 1
    enquanto head != NULO e index <= p faça
        se index == p então
            retorne head^.texto
        fim se
        index = index + 1
        head = head^.prox
    fim enquanto
    retorne ""
fim Função


tipo
    Tno = registro
            texto: string
            prox: Pno
          fim registro
    Pno = ponteiro para Tno
Função CharInPosition(head: Pno, p: inteiro): string
inicio
    se head = NULO então
        retorne ""
    fim se
    se p > 1 então
        retorne CharInPosition(head^.prox, p-1)
    senão
        retorne head^.texto
    fim se 
fim Função

*/