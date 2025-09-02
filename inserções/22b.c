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
Função RemoveOcorrenciaDeXDupla(ref head, x: string): lógico
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

Função RemoveOcorrenciaDeXDupla(ref: head, x: string): lógico
var
    trash: Pno
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head^.x = x então
        trash <- head
        head <- head^.prox  
        se head != NULO então
            head^.prev <- trash^.prev
        fim se
        desaloca(trash)
        retorne VERDADEIRO
    fim se
    retorne RemoveXduoRec(head^.prox, x)
fim Função

*/;