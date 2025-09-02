1- questão
/* Faça um função lógica recursiva que verifica se os elementos de uma lista simples 
de reais encontra-se em ordem ascendente. */
tipos
    TNo = registro
            dado: real
            prox: PNo
        fim registro
    PNo = ponteiro para TNo
Função VerificarOrdemAscendente(lista: PNo): lógico
inicio
    se lista = NULO ou lista^.prox = NULO então
        retorne VERDADEIRO
    fim se
    se lista^.dado > lista^.prox^.dado então
        retorne FALSO
    fim se
    retorne VerificarOrdemAscendente(lista^.prox)
fim Função

2- questão
/* Faça um função lógica iterativa que remove um elemento 
de uma lista duplamente encadeada de inteiros. */
tipos
    TNo = registro
        chave: inteiro
        prox: PNo
        prev: PNo
      fim registro
    PNo = ponteiro para TNo   
Função RemoverPelaChave_Dupla(ref head: PNo, key: inteiro): lógico
var
    p: PNo
inicio
    p <- head
    enquanto p != NULO e p^.chave != key faça
        p <- p^.prox
    fim enquanto
    se p = NULO então
        retorne FALSO 
    fim se
    se p^.prev != NULO então
        p^.prev^.prox <- p^.prox
    senão
        head <- p^.prox
    fim se
    se p^.prox != NULO então
        p^.prox^.prev <- p^.prev
    fim se
    desaloca(p)
    retorne VERDADEIRO
fim Função
    
3- questão
/* Faça um procedimento lógico que inverta uma lista simples. */
tipos
    TNo = registro
        dado: caractere
        prox: PNo
      fim registro

    PNo = ponteiro para TNo
Procedimento InverterLista_Iterativo(ref head: PNo)
var
    ant, p, next: PNo
inicio
    ant <- NULO
    p <- head
    enquanto p != NULO faça
        next <- p^.prox
        p^.prox <- ant
        ant <- p
        p <- next
    fim enquanto
    head <- ant
fim Procedimento

4- questão
/*Faça uma função lógica iterativa que insira um elemento em uma
arvore binária de busca de string*/
tipos
    TNo = registro
        chave: string
        esq: PNo
        dir: PNo
      fim registro
    PNo = ponteiro para TNo
Função InserirEmABB_Iterativo(ref: raiz: PNo, new_key: string): lógico
var
    new, p, ant: PNo
inicio
    new <- aloca(TNo)
    se new = NULO então
        retorne FALSO
    fim se
    new^.chave <- new_key
    new^.esq <- NULO
    new^.dir <- NULO
    se raiz = NULO então
        raiz <- new
        retorne VERDADEIRO
    fim se
    p <- raiz
    ant <- NULO
    enquanto p != NULO faça
        ant <- p
        se new_key < p^.chave então
            p <- p^.esq
        senão se new_key > p^.chave então
            p <- p^.dir
        senão   
             desaloca(new) 
            retorne FALSO
        fim se
    fim enquanto
    se new_key < ant^.chave então
        ant^.esq <- new
    senão
        ant^.dir <- new
    fim se
    retorne VERDADEIRO
fim Função

5- questão
/*Faça um procedimento recursivo que receba uma árvore com o filho da esquerda
menor que o o pai e modifique para que o filho da esquerda seja maior que o pai*/
tipos
    TNo = registro
        dado: real
        esq: PNo
        dir: PNo
      fim registro

    PNo = ponteiro para TNo
Procedimento InverterArvore(raiz: PNo)
var
    temp: PNo
inicio
    se raiz = NULO então
        retorne
    fim se
    temp <- raiz^.esq
    raiz^.esq <- raiz^.dir
    raiz^.dir <- temp
    InverterArvore(raiz^.esq)
    InverterArvore(raiz^.dir)
fim Procedimento