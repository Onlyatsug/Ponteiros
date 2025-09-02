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

Procedimento SepararParesImparesR(head: Pno, ref pares: Pno, ref impares: Pno)
var
    new: Pno
inicio
    se head = NULO então
        retorne
    fim se
    SepararParesImparesRec(head^.prox, pares, impares)
    new <- aloca(Tno)
    se new = NULO então
        retorne
    fim se
    new^.value <- head^.value
    new^.prox <- NULO
    se (head^.value mod 2) = 0 então
        new^.prox <- pares
        pares <- new
    senão
        new^.prox <- impares
        impares <- new
    fim se
fim Procedimento

*/