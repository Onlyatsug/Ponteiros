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
Função IsOn(head:Pno, x: real): lógica
var
    current_head: Pno
inicio
    current_head <- head
    enquanto current_head != NULO faça
        se current_head^.valor = x então
            retorne VERDADEIRO
        fim se
        current_head <- head^.prox
    fim enquanto
    retorne FALSO
fim Função

recursiva

tipo
    Tno = registro
            valor: real
            prox: Pno
          fim registro
    Pno = ponteiro para Tno
Função IsOn(head: Pno, x: real): lógica
inicio
    retorne head != NULO e (head^.valor = x ou IsOn(head^.prox, x))
fim Função

*/
