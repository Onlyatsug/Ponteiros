/*

Função RemoverMaiorOuIgualaX(ref: head: Pno, x: string): lógico
var
    p, ant, trash:  Pno
inicio
    p <- head
    ant <- NULO
    enquanto p != NULO então
        se p^.value >= x então
            trash <- p
            se ant = NULO então
                head <- head^.prox
            senão
                ant^.prox <- p^.prox
            fim se
            p <- p^.prox
            desaloca(trash)
            retorne VERDADEIRO
        se não
            ant <- p
            p <- p^.prox
        fim se
    fim enquanto
    retorne FALSO
fim se

recursiva

Função RemoverMaiorOuIgualaX(ref: head: Pno, x: string): lógico
var
    trash: Pno
    resto: lógico
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head^.value >= x então
        trash <- head
        head <- head^.prox
        desaloca(trash)
        resto <- RemoverMaiorOuIgualaX(head, x)
        retorne VERDADEIRO
    senão
        retorne RemoverMaiorOuIgualaX(head^.prox, x)

*/