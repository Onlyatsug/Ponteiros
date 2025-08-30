#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    char x;
    struct Node *prox;
} Node;




int main() {
    return 0;
}
/*

Função RemoveNaPos(ref: head: Pno, p: inteiro):lógico
var
    q, trash: Pno
    pos: inteiro
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se p = 1 então
        trash <- head
        head <- head^.prox
        desaloca(trash)
        retorne VERDADEIRO
    fim se
    q <- head
    pos <- 1
    enquanto q^.prox != NULO e pos < p-1 faça
        pos <- pos + 1
        q <- q^.prox
    fim enquanto
    se q^.prox = NULO então
        retorne FALSO
    fim se
    trash <-  q^.prox
    q^.prox <- q^.prox^.prox
    desaloca(trash)
    retorne VERDADEIRO
fim Função

recursiva

Função RemoveNaPos(ref: head: Pno, p: inteiro):lógico
var
    trash: Pno
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se p = 1 então
        trash <- head
        head <- head^.prox
        desaloca(trash)
        retorne VERDADEIRO
    fim se
    retorne RemoveNaPos(head, p-1)
fim Função


*/