1- questão
/* O mesmo que a Questão 1 de 2025 */

2- questão
/* Faça um função lógica recursiva para veriificar se
X e Y apracem juntos nessa ordem mas não juntos. */
tipos
    TNo = registro
        key: inteiro
        prox: PNo
      fim registro
    PNo = ponteiro para TNo
Função XeYNaListaR(head: Pno, x, y: inteiro): lógica
var
    xCheck: lógico
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head.key = x então
        xCheck <- VERDADEIRO
    fim se
    se head.key = y e xCheck então
        retorne VERDADEIRO
    fim se
    retorne XeYNaListaR(head.prox, x, y, xCheck)
fim Função

3- questão
/* O mesmo que a Questão 3 de 2025 */

4- questão
/*
Faça ma função lógica recursiva para juntar dois elementos de uma 
lista simplesde reais, das posições p e p + 1, somando
seus valores, em um único nó.
*/
tipos
    TNo = registro
        value: inteiro
        prox: PNo
      fim registro
    PNo = ponteiro para TNo
Função JuntarNaPosicaoP(ref: head, p: inteiro):lógico
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
    fim se
    retorne JuntarNaPosiçãoP(head^.prox, p - 1)
fim Função