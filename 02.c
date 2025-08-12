#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    float value;
    struct Node* next;
} Node;

// interativa
int Len(Node* head){
    Node* current_head = head;
    int count = 0;
    while (current_head != NULL){
        count++;
        current_head = current_head->next;  
    }
    return count;
}

// recursiva
int Count(Node* head){
    if (head == NULL){
        return 0;
    } else {
        return Count(head->next) + 1;
    }
}

int main(){
    return 0;
}

/*

interativa

tipo
    TNo = registro
            valor: inteiro
            prox: PNo
          fim registro
    PNo = ponteiro para TNo
Função CountLen(head: PNo)
var
    head: PNo
    count: inteiro
    current_head: PNo
inicio
    count <- 0
    current_head <- head
    enquanto current_head != NULO faça
        count <- count + 1
        current_head <- current_head^.prox
    fim enquanto
    retorne count
fim Função

recursiva

tipo
    TNo = registro
            valor: inteiro
            prox: PNo
          fim registro
    PNo = ponteiro para TNo
Função CountLen(head: Pno)
inicio
    se head = NULO então
        retorne 0
    senão
        retorne CountLen(head^.prox) + 1;
    fim se
fim Função
*/