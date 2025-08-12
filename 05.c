#include <stdio.h>

typedef struct Node{
    char text;
    struct Node* next;
} Node;

char CharInTheMiddle(Node* head){
    //implementei a técnica dos ponteiros: lento & rápido
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->text; 
}

int main() {
}

/*

tipo
    Tno = registro
            texto: string
            prox: PNo
          fim registro
    Pno = ponteiro para Tno
Função StrInTheMiddle(head: PNo): string
var
    slow: PNo
    fast: Pno
inicio
    slow <- head
    fast <- head
    se head = NULO então
        retorne ""
    senão
        enquanto fast != NULO e fast^.prox != NULO faça
            slow <- slow^.prox
            fast <- fast^.prox^.prox
        fim enquanto
        retorne slow^.texto
    fim se
fim Função

*/