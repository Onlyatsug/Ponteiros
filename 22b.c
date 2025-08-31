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
Função RemoveXduo(ref head, x: string): lógico
var
    p: Pno
inicio
    p <- head
    enquanto p != NULO e p^.x != x faça
        p <- p^.prox
    fim enquanto
    se p = NULO então
        retorne FALSO
    fim se
    se p^.prev != NULO então
        p^.prev^.prox <- p^.prox
    senão
        head <- p^.prox
    fim se
    se p^.prox != NULO então
        p^.prox^.prev <- p^.prev
    fim se
    desaloca(p)
    retorne VERDADEIRO
fim Função

// recursiva

Função RemoveXduoRec(ref: head, x: string): lógico
inicio
    se head = NULO então
        retorne FALSO
    fim se

    se head^.x = x então
        se head^.prox != NULO então
            head^.prox^.prev <- head^.prev
        fim se
        se head^.prev != NULO então
            head^.prev^.prox <- head^.prox
        senão
            head <- head^.prox
        fim se
        desaloca(head)
        retorne VERDADEIRO
    fim se

    retorne RemoveXduoRec(head^.prox, x)
fim Função

*/;