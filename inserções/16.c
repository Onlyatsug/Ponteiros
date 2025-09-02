#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    char data;
    struct Node *prox;
} Node;

bool InserirOrdenado(Node **head, int id, char x){
    Node *new = (Node*)malloc(sizeof(Node));
    new->key = id;
    new->data = x;
    
    if(*head != NULL || (*head)->key >= id){
        new->prox = *head;
        *head = new;
    } else {
        Node *p = *head;
        while(p->prox != NULL && id > p->prox->key){
            p = p->prox;
        }
        new->prox = p->prox;
        p->prox = new;
    }
    return true;
}

// recursivo

bool InserirOrdenadoR(Node **head, int id, char x){
    Node *p = *head;
    if(p == NULL || id < p->key){
        Node *new = (Node*)malloc(sizeof(Node));
        if (new == NULL){return false;}
        new->key = id;
        new->data = x;
        new->prox = p;
        *head = new;
        return true;
    } else {
        return InserirOrdenadoR(&((*head)->prox), id, x);
    }
}


int main() {
    return 0;
}

/*

tipos
    Pno = Ponteiro para Tno
    Tno = registro
            key: inteiro
            elemento: string
            prox: Pno      
          fim registro

Função InserirOrdenado(ref: head: Pno, ch: inteiro, x: string): lógico
var
    p, new: Pno
inicio
    new <- aloca(Pno)
    se new = NULO então
        retorne FALSO
    fim se
    new^.key <- ch
    new^.elemento <- x
    new^.prox <- NULO
    
    se head = NULO ou ch < head^.key então
        new^.prox <- head
        head <- new
        retorne VERDADEIRO
    fim se
    p <- head
    enquanto p^.prox != NULO e p^.prox^.key < ch faça
        p <- p^.prox
    fim enquanto
    new^.prox <- p^.prox
    p^.prox <- new 
    retorne VERDADEIRO
fim Função

recursivo

Função InserirOrdenadoR(ref: head: Pno, ch: inteiro, x: string): lógico
var
    new: Pno
inicio
    se head = NULO ou ch < head^.key então
        new <- aloca(Pno)
        se new = NULO então
            retorne FALSO
        fim se
        new^.key <- ch
        new^.elemento <- x
        new^.prox <- head
        head <- new
        retorne VERDADEIRO
    fim se
    retorne InserirOrdenadoR(head^.prox, ch, x)
fim Função

*/