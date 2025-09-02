#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    char x;
    struct Node *prox;
} Node;


bool RemoveLastElement(Node **head){
    if (*head == NULL){
        return false;
    }
    if ((*head)->prox == NULL){
        free(*head);
        *head = NULL;
        return true;        
    }
    Node *e = *head;
    while (e->prox->prox == NULL){
        e = e->prox;
    }
    free(e->prox);
    e->prox = NULL;
    return true;
}


bool RemoveLastElementR(Node **head, Node *ant){
    if (*head == NULL){
        return false; 
    }
    if ((*head)->prox == NULL){
        free(*head);
        *head = NULL;
        if ant != NULL){
            ant->prox = NULL;
        }
        return true;
    }
    return RemoveLastElementR(&((*head)->prox), *head);
}

int main() {
    return 0;
}
/*

Função RemoveUltimoELemento(ref: head: Pno): lógico
var
    p, ant: Pno
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head^.prox = NULO então
        desaloca(head)
        head <- NULO
        retorne VERDADEIRO
    fim se
    ant <- NULO
    p <- head
    enquanto p^.prox != NULO faça
        ant <- p
        p <- p^.prox
    fim enquanto
    ant^.prox <- NULO
    desaloca(p)
    retorne VERDADEIRO
fim Função


Função RemoveUltimo(ref: head: Pno):lógico
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head^.prox = NULO então
        desaloca(head)
        head <- NULO
        retorne VERDADEIRO
    fim se
    se head^.prox^.prox = NULO então
        desaloca(head^.prox)
        head^.prox <- NULO
        retorne VERDADEIRO
    fim se
    retorne RemoveUltimo(head^.prox)
fim Função


*/