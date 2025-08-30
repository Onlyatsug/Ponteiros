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

Função Remove(ref: head: Pno):lógico
var
    retard: Pno
    RemoveUltimo(ref: head, ant: Pno):lógico
    inicio
        se head = NULO então
            retorne FALSO
        fim se
        se head^.prox = NULO então
            desaloca(head)
            head <- NULO
            se ant != NULO então
                ant^.prox <- NULO
            fim se
           retorne VERDADEIRO
        fim se
        retorne RemoveUltimo(head->prox, head)
    fim Função
inicio
    retard <- NULO
    retorne RemoveUltimo(head, retard)
fim Função


*/