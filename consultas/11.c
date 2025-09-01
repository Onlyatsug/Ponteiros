#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    struct Node *prox;
} Node;

// iterativa

bool exist(Node *head, int x){
    Node *p = head;
    while (p != NULL && p->key <= x){
        if (p->key == x){
            return true;
        }
        p = p->prox;
    }
    return false;
}

// recusiva

bool existR(Node *head, int x){
    Node *p = head;
    if (p == NULL || p->key > x){
        return false;
    }
    if (p->key == x){
        return true;
    } else {
        return existR(p->prox, x);
    }
}


int main(){
    Node n3 = {30, NULL};
    Node n2 = {20, &n3};
    Node n1 = {10, &n2};
    Node *head = &n1;

    printf("Busca iterativa (20): %s\n", exist(head, 20) ? "true" : "false");
    printf("Busca recursiva (25): %s\n", existR(head, 25) ? "true" : "false");
    return 0;
}

/*

iterativa

tipos
    Pno: ponteiro para no
    Tno: registro
            key: inteiro
            prox: Pno
         fim registro

Função XApareceEmListaOrdenada(head: Pno, x: inteiro): lógico
var
    p: Pno
inicio
    p <- head
    enquanto p != NULO e p^.key <= x faça
        se p^.key = x então
            retorne VERDADEIRO
        fim se
        p <- p^.prox
    fim enquanto
    retorne FALSO
fim Função

recursiva

Função XApareceEmListaOrdenadaR(head: Pno, x: inteiro): lógico
inicio
    se head = NULO || head^.key > x então
        retorne FALSO
    fim se
    se head^.key = x então
        retorne VERDADEIRO
    senão
        retorne XApareceEmListaOrdenadaR(head^.prox, x)
    fimse
fim Função

*/