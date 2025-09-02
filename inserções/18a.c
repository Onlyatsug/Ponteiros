#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    struct Node *prox;
} Node;


// inserção iterativa
bool InserirEmPosicaoSimples(Node **head, int key, int position){
    Node *novo = malloc(sizeof(Node));
    if (novo = NULL){return false;}
    novo->key = key;
    if (position = 1){
        novo->prox = *head;
        *head = novo;
        return true;
    }
    Node *p = *head;
    int pos = 1;
    while (p != NULL && pos < position - 1) {
        p = p->prox;
        pos++;
    }
    if (p == NULL){
        free(new)
        return false;
    }
    novo->prox = p->prox;
    p->prox = novo;
}


//recursiva
bool InserirEmPosicaoSimplesR(Node **head, int key, int position){
    if (position == 1){
         Node *novo = malloc(sizeof(Node));
        if (novo == NULL){return false;}
        novo->key = key;
        novo->prox = *head;
        *head = novo;
        return true;
    }
    if (*head == NULL){
        return false;
    }
    return InserirEmPosicaoSimplesR(&((*head)->prox), key, position - 1);
}


int main() {
    return 0;
}

/*

Tno = registro
        key: inteiro
        prox: Pno
      fim registro
Pno = ponteiro para Tno

Função InserirEmPosiçãoSimples(ref: head: Pno, ch, position: inteiro):lógico
var
    p, new: Pno;
    pos: inteiro;
incio
    se position < 1 então
        retorne FALSO
    fim se
    new <- aloca(Tno)
    new^.key <- ch
    se position = 1 então
        new^.prox <- head
        head <- new
        retorne VERDADEIRO
    fim se
    p <- head
    pos <- 1
    enquanto p != NULO e pos < position - 1 faça
        p <- p^.prox
        pos <- pos + 1
    fim enquanto
    se p = NULO então
        desaloca(new)
        retorne FALSO
    fim se
    new^.prox <- p^.prox
    p^.prox <- new
    retorne VERDADEIRO
fim Função 

// recursivo

Função InserirEmPosiçãoSimplesR(head: Pno, ch, position: inteiro):lógico
inicio
    se position < 1 então
        retorne FALSO
    fim se
    se position = 1 então
        new <- aloca(Tno)
        se new = NULO então
            retorne FALSO
        fim se
        new^.key <- ch
        new^.prox <- head
        head <- new
        retorne VERDADEIRO
    fim se
    se head = NULO então
        retorne FALSO
    fim se
    retorne InserirEmPosiçãoSimplesR(head->prox, ch, position -1):lógico
fim Função

*/
