#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    char x;
    struct Node *prox;
} Node;

bool DeleteXOcorrence(Node **head, char x){
    if (*head == NULL) return false;
    if ((*head)->x == x){
        Node *trash = *head;
        *head = (*head)->prox;
        free(trash);
        return true;
    }
    Node *p = *head;
    while (p->prox != NULL && p->prox->x != x){
        p = p->prox;
    }
    if (p->prox == NULL) return false;
    Node *trash = p->prox;
    p->prox = p->prox->prox;
    free(trash);
    return true;
}

// recursivo

bool DeleteXOcorrenceR(Node **head, Node **ant, char x){
    if  (*head == NULL) return false;
    if ((*head)->x == x){
        Node *trash = *head;
        *head = (*head)->prox;
        if (*ant == NULL){
            *head = (*head)->prox;
        } else {
            (*ant)->prox = (*head)->prox;
        }
        free(trash);
        return true;
    }
    return DeleteXOcorrenceR(&((*head)->prox), &(*head), x);
}

int main() {
    return 0;
}

/*

Função DeleteX(ref: head, x: string):lógico
var
    p, trash: Pno
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head^.x = x então
        trash <- head
        head <- head^.prox
        desaloca(trash)
        retorne VERDADEIRO
    fim se
    p <- head
    enquanto p^.prox != NULO e p^.prox^.x != x faça
        p <- p^.prox
    fim enquanto
    se p^.prox = NULO então
        retorne FALSO
    fim se
    trash <- p^.prox
    p^.prox <- p^.prox^.prox
    desaloca(trash)
    retorne VERDADEIRO
fim Função


FunçãoDeletarOcorrenciaDeX(ref: head: Pno, x: string): lógico
var
    ant: Pno
    Função DeletarX(ref: head, ant: Pno, x: string):lógico
    var
        trash: Pno
    inicio
        se head = NULO então
            retorne FALSO
        fim se
        se head^.x == x então
            trash <- head
            se ant == NULO então
                head <- head^.prox
            senão
                ant^.prox <- head^.prox
            fim se
            desaloca(trash)
            retorne VERDADEIRO
        fim se
        retorne DeletarX(head->prox, head, x)
    fim Função
inicio
    ant <- NULO
    retorne DeletarX(head, ant, x);
fim Função
*/;