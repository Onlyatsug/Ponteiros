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
    
Função ElementoNaPosicao(head: Pno, p: inteiro): string
var
    index: inteiro
    q: Pno
inicio
    se head = NULO ou p < 1 então
        retorne ""
    fim se
    index <- 1
    q <- head
    enquanto q != NULO faça
        se index = p então
            retorne q^.texto
        fim se
        index = index + 1
        q = q^.prox
    fim enquanto
    retorne ""
fim Função

recursivo 

Função ElementoNaPosicao(head: Pno, p: inteiro): string
inicio
    se head = NULO ou p < 1 então
        retorne ""
    fim se
    se p = 1 então
        retorne head^.texto 
    fim se
    retorne ElementoNaPosicao(head^.prox, p - 1)
fim Função

*/