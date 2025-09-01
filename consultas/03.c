#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    float value;
    struct Node* next;
} Node;


// iterativa
bool IsOn(Node* head, float x){
    Node* current_head = head;
    while (current_head != NULL){
        if (current_head->value == x){
            return true;
        }
        current_head = current_head->next;
    }
    return false;
} 

// recursiva
bool IsOnR(Node* head, float x){
    return head != NULL && (head->value == x || IsOnR(head->next, x));
}

int main (){
}


/*

iterativa

tipo
    Tno = registro
            valor: real
            prox: Pno
          fim registro
    Pno = ponteiro para Tno

Função XApareceNaLista(head:Pno, x: real): lógico
    p: Pno
inicio
    p <- head
    enquanto p != NULO faça
        se p^.valor = x então
            retorne VERDADEIRO
        fim se
        p <- p^.prox
    fim enquanto
    retorne FALSO
fim Função

recursiva

Função XApareceNaLista(head: Pno, x: real): lógico
inicio
    se head = NULO então
        retorne FALSO
    fim se
    se head.valor = x então
        retorne VERDADEIRO
    fim se
    retorne IsOn(head.prox, x)
fim Função

*/
