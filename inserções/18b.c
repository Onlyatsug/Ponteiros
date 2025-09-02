#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    struct Node *prox;
} Node;

// é foda

int main() {
    return 0;
}

/*

Função InserirEmPosicaoPDupla(ref: head: Pno, ch: real, position: inteiro): lógico
var
    p, new: Pno
    pos: inteiro
inicio
    se position < 1 então
        retorne FALSO
    fim se
    new <- aloca(Tno)
    se new = NULO então
        retorne FALSO
    fim se
    new^.key <- ch
    new^.prox <- NULO
    new^.ant <- NULO

    se position = 1 então
        new^.prox <- head
        se head != NULO então
            head^.ant <- new
        fim se
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
    new^.ant <- p
    se p^.prox != NULO então
        p^.prox^.ant <- new
    fim se
    p^.prox <- new
    retorne VERDADEIRO
fim Função

recursiva

Função InsereNaPosicaoPDuplaR(ref head: PNo; x: real; p: inteiro): lógico
var
    função Insere(ant, l: PNo; i: inteiro): lógico
    var
        novo: PNo
    início
        se i = p então
            novo <- aloca(TNo)
            se novo = Nulo então
                retorne falso
            fim se
            novo^.info <- x
            novo^.prox <- l
            novo^.prev <- ant
            se l != Nulo então
                l^.prev <- novo
            fim se
            se ant != Nulo então
                ant^.prox <- novo
            senão
                head <- novo
            fim se
            retorne verdadeiro
        senão
            se l = Nulo então
                retorne falso
            senão
                retorne Insere(l, l^.prox, i+1)
            fim se
        fim se
    fim função
início
    se p <= 0 então
        retorne falso
    fim se
    retorne Insere(Nulo, head, 1)
fim função
*/
