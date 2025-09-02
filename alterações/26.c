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
    i <- 1
    enquanto i < p e q^.prox <> NULO faça
        q <- q^.prox
        i <- i + 1
    fim enquanto
    se i < p ou q^.prox = NULO então
        retorne FALSO   -- posição p ou p+1 não existe
    fim se
    q^.value <- q^.value + q^.prox^.value
    trash <- q^.prox
    q^.prox <- q^.prox^.prox
    desaloca(trash)
    retorne VERDADEIRO
fim Função


Função JuntarNaPosiçãoP(ref: head, p: inteiro):lógico
var
    trash: Pno
inicio
    se head = NULO ou head^.prox = NULO ou p <= 0 então
        retorne FALSO
    fim se
    se p = 1 então
        head^.value <- head^.value + head^.prox^.value
        trash <- head^.prox
        head^.prox <- head^.prox^.prox
        desaloca(trash)
        retorne VERDADEIRO
    fim s
    retorne JuntarNaPosiçãoP(head^.prox, p - 1)
fim Função

*/