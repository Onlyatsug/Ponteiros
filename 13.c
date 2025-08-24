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
Função AestáContidoEmB(headA, headB: Pno): lógico
var
    pA, pB: Pno
inicio
    pA <- headA
    pB <- headB
    enquanto pA != NULO e pB != NULO faça
        se pA^.chave = pB^.chave então
            p2 <- head2
            pA <- pA^.prox
        senão
            p2 <- p2^.prox
        fim se
    fim enquanto
    se pA = NULO então
        retorne VERDADEIRO
    senão
        retorne FALSO
    fim se
fim Função

*/
