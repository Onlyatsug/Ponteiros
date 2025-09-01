#include <stdio.h>
#include <stdbool.h>


typedef struct Node{
    int value;
    struct Node *next;
} Node;

// iterativa

bool XandY(Node *head, int x, int y){
    Node *p = head;
    bool Xcheck = false;
    while (p != NULL){
        if (p->value == x){
            Xcheck = true;
        }
        if (p->value == y && Xcheck){
            return true;
        }
        p = p->next;
    }
    return false;
}

// recursiva

bool XandYR(Node *head, int x, int y){
    bool searchY(Node *head, int y){
        Node *p = head;
        if (p == NULL){
            return false;
        }
        if (p->value == y) {
            return true;
        } else {
            return searchY(p->next, y);
        }
    }
    Node *p = head;
    if (p == NULL || p->next == NULL) {
        return false;
    }
    if (p->value == x) {
        return searchY(p->next, y);
    } else {
        return XandYR(p->next, x, y);
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

Função XeYNaLista(head:Pno x, y: inteiro): lógico
var
    p: Pno
    xCheck: lógico
inicio
    p <- head
    xCheck <- FALSO
    enquanto p != NULO faça
        se p^.key = x então
            xCheck = VERDADEIRO
        fim se
        se p^.key = y e xCheck então
            retorne VERDADEIRO
        fim se
        p <- p^.prox
    fim enquanto
    retorne FALSO
fim Função

Recursiva

Função XeYNaListaR(head: Pno, x, y: inteiro): lógica
var
    xCheck: lógico
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head.key = x então
        xCheck <- VERDADEIRO
    fim se
    se head.key = y e xCheck então
        retorne VERDADEIRO
    fim se
    retorne XeYNaListaR(head.prox, x, y, xCheck)
fim Função

*/

