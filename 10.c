#include <stdio.h>
#include <stdbool.h>


typedef struct Node{
    int value;
    struct Node *next;
} Node;


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
Função XanY(head:Pno x, y: inteiro): lógico
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

Função XandY(head: Pno, x, y: inteiro): lógica
var
    p: Pno
    Function searchY(head: Pno, y: inteiro): lógica
    var
        p: Pno
    inicio
        p <- head
        se p = NULO então
            retorne FALSO
        fim se
        se p^.key = y então
            retorne VERDADEIRO
        senão
            retorne searchY(p^.prox, y)
        fim se
    fim Função
inicio
    p <- head
    se p = NULO então
        retorne FALSO
    fim se
    se p^.key = x então
        retorne searchY(p^.prox, y)
    senão
        retorne XandY(p^.prox, x, y)
    fim se
fim Função

*/

