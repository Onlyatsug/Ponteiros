#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    char data;
    struct Node *next;
} Node;

// iterativo

bool InsertOnEnd(Node **head, int id, char x){
    Node *new = (Node*)malloc(sizeof(Node));
    if(new == NULL){
        return false;
    }
    new->key = id;
    new->data = x;
    new->next = NULL;
    
    if(*head == NULL){
        *head = new;
    } else {
        Node *p = *head;
        while (p->next != NULL){
            p = p->next;
        }
        p->next = new;
    }
    return true;
}

// rercursivo
bool InsertOnEndR(Node **head, int id, char x) {
    if (*head == NULL) {
        Node *newNode = (Node*)malloc(sizeof(Node));
        if (newNode == NULL) {
            return false;
        }
        newNode->key = id;
        newNode->data = x;
        newNode->next = NULL;

        *head = newNode;
        return true;
    } else {
        return InsertOnEndR(&((*head)->next), id, x);
    }
}


int main() {
    return 0;
}

/*

tipos
    PNo: ponteiro para TNo
    TNo: registro
            info: string
            prox: PNo
         fim registro
Função InserirNoFinal(ref: head, x:string): lógico
var
    p, new: PNo
inicio    
    new <- aloca(Pno)
    se new = NULO então
        retorne FALSO
    fim se
    new^.info <- x
    new^.prox <- NULO
    
    se head == NULO então
        head <- new
        retorne VERDADEIRO
    senão
        p <- head
        enquanto p^.prox != NULO faça
            p <- p^.prox
        fim enquanto
        p^.prox <- new
        retorne VERDADEIRO
    fim se
fim Função

recursiva

tipos
    PNo: ponteiro para TNo
    TNo: registro
            info: string
            prox: PNo
         fim registro
Função InserirNoFinal(ref: head, x:string): lógico
var
    new: Pno
inicio
    se head = NULO então
        new <- aloca(Pno)
        se new = NULO então
            retorne FALSO
        fim se
        new^.info <- x
        new^.prox <- NULO
        head <- new

        retorne VERDADEIRO
    senão
        retorne InserirNoFInal(head^.prox, x)
    fim se
fim Função


*/