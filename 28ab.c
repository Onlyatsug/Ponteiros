/*

Função MergeListas(head: Pno, head2: Pno): Pno
var
    p, last, new, trash: Pno
inicio
    p <- NULO
    last <- NULO

    enquanto head != NULO ou head2 != NULO faça
        new <- aloca(Tno)
        se new = NULO então
            enquanto p != NULO faça
                trash <- p
                p <- p^.prox
                desaloca(trash)
            fim enquanto
            retorne NULO
        fim se

        se head = NULO então
            new^.value <- head2^.value
            head2 <- head2^.prox
        senão se head2 = NULO então
            new^.value <- head^.value
            head <- head^.prox
        senão se head^.value <= head2^.value então
            new^.value <- head^.value
            head <- head^.prox
        senão
            new^.value <- head2^.value
            head2 <- head2^.prox
        fim se

        new^.prox <- NULO
        --*  se duplamente encadeada, adicionar: new^.prev <- last  *--d

        se p = NULO então
            p <- new
        senão
            last^.prox <- new
        fim se
        last <- new
    fim enquanto

    retorne p
fim Função


*/