#include <stdio.h>
#include <stdbool.h>


typedef struct Node{
    float value;
    struct Node *next;
} Node;

// iterativo

bool XandYtogether(Node *head, float x, float y){
    Node *p = head;
    while (p != NULL || p->next != NULL){
        if (p->value == x && p->next->value == y){
            return true;
        }
        p = p->next;
    }
    return false;
}

// recursivo


bool XandYtogetherR(Node *head, float x, float y){
    Node *p = head;
    if (p == NULL || p->next == NULL){
        return false;
    }
    if (p->value == x && y == p->next->value){
        return true;
    } else {
        return XandYtogetherR(p->next, x, y);
    }
}


int main(){
    return 0;
}


/*
iterativa

tipos
    Pno: ponteiro para Tno
    Tno: registro
            key: inteiro
            prox: Pno
         fim registro

Função XeYJuntos(head: Pno, x, y: inteiro): lógico
var
    p: Pno
inicio
    p <- head
    enquanto p != NULO e p^.prox != NULO faça
        se p^.key = x e p^.prox^.key = y então
            retorne VERDADEIRO
        fim se
        p <- p^.prox
    fim enquanto
    retorne FALSO
fim Função

recursiva

Função XeYJuntosR(head: Pno, x, y: inteiro): lógico
inicio
    se head = NULO ou head^.prox = NULO então
        retorne FALSO
    fim se
    se head^.key = x e head^.prox^.key = y então
        retorne VERDADEIRO
    senão
        retorne XeYJuntosR(head^.prox, x, y)
    fim se
fim Função

*/