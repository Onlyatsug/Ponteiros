/*

Função RemoverDuplicados(ref: head: Pno):inteiro
var
    count: inteiro
    p, trash: PNo
inicio
    se head = NULO então
        retorne 0
    fim se
    count <- 0
    p <- head
    enquanto p != NULO e p^.prox != NULO faça
        se p^.value == p^.prox^.value então
            trash <- p^.prox
            p^.prox <- p^prox^.prox
            desaloca(trash)
            count <- count + 1
        senão
            p <- p^.prox
        fim se
    fim se
    retorne count
fim Função

recursiva

Função RemoverDuplicados(ref: head: Pno):inteiro
var
    trash: Pno
inicio
    se head = NULO ou head^.prox = NULO então
        retorne 0
    fim se
    se head^.value == head^.prox^.value então
        trash <- head^.prox
        head^.prox <- head^.prox^.prox
        desaloca(trash)
        retone 1 + RemoverDuplivados(head^.prox)
    fim se
    retorne RemoverDuplicados(head^.prox)
fim Função
*/