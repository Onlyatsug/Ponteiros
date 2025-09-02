/*

Função RemoverMaiorOuIgualaX(ref: head: Pno, x: string): lógico
var
    p, ant, trash: Pno
    removido: lógico
inicio
    p <- head
    ant <- NULO
    removido <- FALSO
    enquanto p != NULO faça
        se p^.value >= x então
            trash <- p
            se ant = NULO então
                head <- head^.prox
            senão
                ant^.prox <- p^.prox
            fim se
            p <- p^.prox
            desaloca(trash)
            removido <- VERDADEIRO
        senão
            ant <- p
            p <- p^.prox
        fim se
    fim enquanto
    retorne removido
fim Função

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
    fim se
    resto <- RemoverMaiorOuIgualaX(head^.prox,x)
    retorne resto
fim Função
*/