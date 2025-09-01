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

tipos
    TNo = registro
            valor: real
            prox: PNo
          fim registro
    PNo = ponteiro para TNo

Função ContarTamanhoDaLista(head: PNo): inteiro
var
    count: inteiro
    p: head
inicio
    se head = NULO então
        retorne 0
    fim se
    count <- 0
    p <- head
    enquanto p != NULO faça
        count <- count + 1
        p <- p.prox
    fim enquanto
    retorne count
fim Função

recursiva

Função ContarTamanhoDaListaR(head: Pno)
inicio
    se head = NULO então
        retorne 0
    senão
        retorne ContarTamanhoDaListaR(head^.prox) + 1;
    fim se
fim Função
*/