2024

1-questão:

tipos
    Pno = ponteiro para Tno
    Tno = registro
            x: real
            prox: Pno
          fim registro
Função VerificaAscen(head: Pno): lógico
inicio
    se head = NULO então
        retorne VERDADEIRO
    fim se
    se head^.prox != NULO e head^.prox então
        retorne FALSO
    fim se
    retorne VerificaAscen(head^.prox)
fim Função

2-questão:

tipos
    Pno = ponteiro para Tno
    Tno = registro
            x: real
            prox: Pno
          fim registro
Função XandY(head: Pno, x, y: inteiro): lógico
var
    p: Pno
    Function searchY(head: Pno, y: inteiro): lógico
    var
        p: Pno
    inicio
        p <- head
        se p = NULO então
            retorne FALSO
        fim se
        se p^.key = y então
            retorne VERDADEIRO
        senão
            retorne searchY(p^.prox, y)
        fim se
    fim Função
inicio
    p <- head
    se p = NULO então
        retorne FALSO
    fim se
    se p^.key = x então
        retorne searchY(p^.prox, y)
    senão
        retorne XandY(p^.prox, x, y)
    fim se
fim Função

3-questão:

Função Inverter(ref head: Pno): lógico
var
    prev, next: Pno
inicio
    prev <- NULO
    enquanto head != NULO faça
        next <- head^.prox    
        head^.prox <- prev   
        prev <- head            
        head <- next            
    fim enquanto
    head <- prev                
fim Função