#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    char x;
    struct Node *prox;
} Node;


bool RemoveFirstElement(Node **head){
    if (*head == NULL){
        return false;
    }
    Node *trash = *head;
    *head = (*head)->prox;
    free(trash);
    return true;
}

int main() {
    return 0;
}

/*

RemovePrimeiroElementoref: Node **head):lógico
var
    trash: Pno
inicio
    se head = NULO então
        retorne FALSO
    fim se
    trash <- head
    head <- head^.prox
    desaloca(trash)
    retorne VERDADEIRO
fim Função

*/