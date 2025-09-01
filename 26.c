/*

Função JuntarNaPosiçãoP(ref: head, p: inteiro):lógico
var
    q, trash: Pno
    pos: inteiro
inico
    se head = NULO ou p <= 0 então
        retorne FALSO
    fim se
    q <- head
    pos <- 1
    enquanto q !- NULO e pos < p faça
        q <- q^.prox
        pos++
    fim enquanto
    se q = NULO ou q^.prox = NULO então
        retorne FALSO
    fim se
    q^.value <- q^.value + q^.prox^.value
    trash <- q^.prox
    q^prox <- q^prox^.prox
    desaloca(trash)
    retorne VERDADEIRO
fim Função


Função JuntarNaPosiçãoP(ref: head, p: inteiro):lógico
var
    trash: Pno
inicio
    se head = NULO ou p <= 0 então
        retorne FALSO
    fim se
    se p = 1 então
        se head^.prox = NULO então
            retorne FALSO
        fim se
        head^.value <- head^.value + head^.prox^.value
        trash <- head^.prox
        head^.prox <- head^.prox^.prox
        desaloca(trash)
        retorne VERDADEIRO
    fim se
    retorne JuntarNaPosiçãoP(head^.prox, p)
fim Função

*/