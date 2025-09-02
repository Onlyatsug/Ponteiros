/*

Função DuplicarLista(head: Pno): Pno
var
    copy, last, new, trash: Pno 
inicio
    copy <- NULO
    last <- NULO
    enquanto head != NULO faça
        new <- aloca(Tno)
        se new = NULO então
            enquanto copy != NULO faça
                trash <- copy
                copy <- copy^.prox
                desaloca(trash)
            fim enquanto
            retorne NULO
        fim se
        new^.value <- head^.value
        new^.prox <- NULO
        se last = NULO então
            copy <- new
        senão
            last^.prox <- new
        fim se
        last <- new
        head <- head^.prox
    fim enquanto
    retorne copy
fim Função

recursivo

Função DuplicarLista(head: Pno): Pno
var
    new: Pno
inicio
    se head = NULO então
        retorne NULO
    fim se

    new <- aloca(Tno)
    se new = NULO então
        retorne NULO
    fim se

    new^.value <- head^.value
    new^.prox <- DuplicarLista(head^.prox)

    retorne new
fim Função

*/