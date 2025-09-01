#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    char str;
    struct Node *next;
} Node;

// iterativa

bool AreTheSame(Node *head, Node *head_two){
    while (head != NULL && head_two != NULL){
        if (head->str != head_two->str) {
            return false;
        }
        head = head->next;
        head_two = head_two->next;
    }
    if (head == NULL && head_two == NULL){
        return true;
    } else {
        return false;
    }
}

// recursiva

bool AreTheSameR(Node *head, Node *head_two){
    if (head == NULL && head_two == NULL){
        return true;   
    } 
    if ((head == NULL || head_two == NULL)){
        return false;
    }
    if (head->str != head_two->str){
        return false;
    } else {
        return AreTheSameR(head->next, head_two->next);
    }
}

int main() {
    return 0;
}

/*

iterativa

tipos
    Pno: ponteiro para no
    Tno: registro
            str: string
            prox: Pno
         fim registro

Função VerificaSeListasSaoIguais(head, head_two: Pno): lógico
    enquanto head != NULO e head_two != NULO faça
        se head^.str != head_two^.str então
            retorne FALSO
        fim se
        head <- head^.prox
        head_two <- head_two^.prox
    fim enquanto
    se head = NULO e head_two = NULO então
        retorne VERDADEIRO
    fim se
    retorne FALSO
fim Função

recursiva

Função VerificaSeListasSaoIguais(head, head_two: Pno): lógico
    se head = NULO e head_two = NULO então
        retorne VERDADEIRO
    fim se
    se head = NULO ou head_two = NULO então
        retorne FALSO
    fim se
    se head^.str != head_two^.str então
        retorne FALSO
    fim se
    retorne VerificaSeListasSaoIguais(head^.prox, head_two^.prox)
fim Função
*/