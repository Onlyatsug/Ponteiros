/*

Procedimento InverterOPrimeiroeUltimo(ref: head: Pno)
var
    p, ant: PNo
inicio
    se head != NULO e head^.prox != NULO então
        ant <- NULO
        p <- head
        enquanto p^.prox != NULO faça
            ant <- p
            p <- p^.prox
        fim enquanto
        ant^.prox <- NULO
        p^.prox <- head
        head <- p
    fim se
fim Procedimento

recursiva

Procedimento InverterOPrimeiroeUltimoR(ref: head: Pno)
var
    last: PNo
inicio
    se head != NULO e head^.prox != NULO então
        se head^.prox^.prox = NULO então
            last <- head^.prox
            head^.prox <- NULO
            last^prox <- head
            head <- last 
        senão
            InverterOPrimeiroeUltimoR(head^.prox)
        fim se
    fim se
fim Procedimento


*/