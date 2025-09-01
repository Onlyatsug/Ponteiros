#include <stdio.h>
#include <stdbool.h>


typedef struct Node{
    int key;
    struct Node *next;
} Node;


bool AisOnB(Node *head, Node *head2){
    Node *p = head;
    Node *p2 = head2;

    while (p != NULL && p2 != NULL){
        if (p->key == p2->key){
            p2 = head2;
            p = p->next;
        } else {
            p2 = p2->next;
        }
    }
    if (p == NULL){
        return true;
    } else {
        return false;
    }
}

int main() {
    return 0;
}
/*

tipos
    Pno = ponteiro para Tno
    Tno - registro
            chave: inteiro
            prox: Pno
          fim registro

Função AestaContidoEmB(headA, headB: Pno): lógico
var
    pA, pB: Pno
inicio
    pA <- headA
    enquanto pA != NULO faça
        check <- FALSO
        pB <- headB
        enquanto pB != NULO e não check faça
            se pA.chave = pB.chave então
                check <- VERDADEIRO
            fim se
            pB <- pB.prox
        fim enquanto
        se não check então
            retorne FALSO
        fim se
        pA <- pA.prox
    fim enquanto
    retorne VERDADEIRO
fim Função

recursiva 

Função EstaContidoEmB(headA, headB: PNo): lógico
var
    Função ExisteEmB(valor: inteiro, headB: PNo): lógico
    Inicio
        se headB = NULO então
            retorne FALSO
        fim se
        se headB.chave = valor então
            retorne VERDADEIRO
        fim se
        retorne ExisteEmB(valor, headB.prox)
    Fim Função
Inicio
    se headA = NULO então
        retorne VERDADEIRO
    fim se
    se não ExisteEmB(headA.chave, headB) então
        retorne FALSO
    fim se
    retorne EstáContidoEmB(headA.prox, headB)
Fim Função





*/
