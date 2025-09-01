/*

Procedimento SepararParesImpares(head: Pno, pares: Pno, impares: Pno)
var
    p, lastPar, lastImpar, new: Pno
inicio
    pares <- NULO
    impares <- NULO
    lastPar <- NULO
    lastImpar <- NULO
    p <- head

    enquanto p != NULO faça
        new <- aloca(Tno)
        se new = NULO então
            retorne
        fim se
        new^.value <- p^.value
        new^.prox <- NULO

        se (p^.value mod 2) = 0 então
            se pares = NULO então
                pares <- new
            senão
                lastPar^.prox <- new
            fim se
            lastPar <- new
        senão
            se impares = NULO então
                impares <- new
            senão
                lastImpar^.prox <- new
            fim se
            lastImpar <- new
        fim se
        p <- p^.prox
    fim enquanto
fim Procedimento

recursiva

Procedimento SepararParesImparesRec(head: Pno, pares: Pno, impares: Pno)
var
    new, lastPar, lastImpar: Pno
inicio
    se head != NULO então
        SepararParesImparesRec(head^.prox, pares, impares, lastPar, lastImpar)

        new <- aloca(Tno)
        se new != NULO então
            new^.value <- head^.value
            new^.prox <- NULO

            se (head^.value mod 2) = 0 então
                se pares = NULO então
                    pares <- new
                    lastPar <- new
                senão
                    lastPar^.prox <- new
                    lastPar <- new
                fim se
            senão
                se impares = NULO então
                    impares <- new
                    lastImpar <- new
                senão
                    lastImpar^.prox <- new
                    lastImpar <- new
                fim se
            fim se
        fim se
    fim se
fim Procedimento

*/