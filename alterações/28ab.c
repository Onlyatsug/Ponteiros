/*

Função MergeListasSimples(head1: Pno, head2: Pno): Pno
var
    new, last, trash: Pno
    p: Pno
inicio
    p <- NULO
    last <- NULO
    enquanto head1 != NULO ou head2 != NULO faça
        new <- aloca(Tno)
        se new = NULO então
            enquanto p <> NULO faça
                trash <- p
                p <- p^.prox
                desaloca(trash)
            fim enquanto
            retorne NULO
        fim se
        se head1 = NULO então
            new^.value <- head2^.value
            head2 <- head2^.prox
        senão se head2 = NULO então
            new^.value <- head1^.value
            head1 <- head1^.prox
        senão se head1^.value <= head2^.value então
            new^.value <- head1^.value
            head1 <- head1^.prox
        senão
            new^.value <- head2^.value
            head2 <- head2^.prox
        fim se
        new^.prox <- NULO
        se p = NULO então
            p <- new
        senão
            last^.prox <- new
        fim se
        last <- new
    fim enquanto
    retorne p
fim Função

duplamente

Função MergeListasDupla(head1: Pno, head2: Pno): Pno
var
    new, last, trash: Pno
    p: Pno
inicio
    p <- NULO
    last <- NULO
    enquanto head1 != NULO ou head2 != NULO faça
        new <- aloca(Tno)
        se new = NULO então
            enquanto p <> NULO faça
                trash <- p
                p <- p^.prox
                desaloca(trash)
            fim enquanto
            retorne NULO
        fim se
        se head1 = NULO então
            new^.value <- head2^.value
            head2 <- head2^.prox
        senão se head2 = NULO então
            new^.value <- head1^.value
            head1 <- head1^.prox
        senão se head1^.value <= head2^.value então
            new^.value <- head1^.value
            head1 <- head1^.prox
        senão
            new^.value <- head2^.value
            head2 <- head2^.prox
        fim se
        new^.prox <- NULO
        new^.prev <- last 
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