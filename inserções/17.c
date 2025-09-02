#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    char data;
    struct Node *prox;
} Node;

// iterativo

bool InserirIndexado(Node **head, int ch, char x){
    //criar no
    Node *new = malloc(sizeof(Node));
    if (new == NULL){return false;}
    new->key = ch;
    new->data = x;

    if (*head == NULL || (*head)->key <= ch){
        if (*head != NULL && (*head)->key == ch){return false;}
        // inserir no inicio
        new->prox = (*head)->prox;
        (*head)->prox = new;
        return true;
    } else {
        Node *p = *head;
        while (p->prox != NULL && p->prox->key < ch){
            if (p->prox->key == ch){return false;}
            // percorrer
            p = p->prox;
        }
        // adicionar meio ou final
        new->prox = p->prox;
        p->prox = new;
    }
}

// recursivo

bool InserirIndexadoR(Node **head, int ch, char x){
    if (*head == NULL || (*head)->key >= ch){
        if (*head != NULL && (*head)->key == ch){return false;}
        Node *new = malloc(sizeof(Node));
        if (new == NULL){return false;}
        new->key = ch;
        new->data = x;
        new->prox = *head;
        *head = new;
        return true;
    }  else {
        return InserirIndexadoR(&((*head)->prox), ch, x);
    }
}

int main(){return 0;}

/*
tipos
    Tno = registro
            key: inteiro
            value: string
            prox: Pno
          fim registro
    Pno = ponteiro para Tno

Função inserirOrdenado_Iterativo(ref: head: Pno, ch: inteiro, info: string): lógico
var
    new, p, ant: Pno
inicio
    new <- aloca(Tno)
    se new = NULO então
        retorne FALSO 
    fim se
    new^.key <- ch
    new^.value <- info
    new^.prox <- NULO
    ant <- NULO
    p <- head
    enquanto p != NULO e p^.key < ch então
        ant <- p
        p <- p^.prox
    fim enquanto

    se p != NULO e p^.key = ch então
        desaloca(new) 
        retorne FALSO
    fim se
    new^.prox <- p
    se ant = NULO então
        head <- new
    senão
        ant^.prox <- new
    fim se
    retorne VERDADEIRO
fim Função

recursivo

Função Ordena(ref: head: Pno, ch: inteiro, info: string):lógico
var
    new: Pno
inicio
    se head == NULO ou head^.key <= ch então
        se head != NULP e head^.key == ch então
            retorne FALSO
        fim se
        new <- aloca(Tno)
        se new = NULO então
            retorne FALSO
        fim se
        new^.key <- ch
        new^.value <- info
        new^.prox <- head
        head <- new
    senão
        retorne Ordena(head^.prox, ch, info)
    fim se
fim Função

*/