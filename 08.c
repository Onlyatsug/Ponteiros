#include <stdio.h>


typedef struct Node {
    char info;
    struct Node *next;
} Node;

// iterativo

char ReturnBigger(Node *head){
    if(head == NULL){
        return ' ';
    }
    char response = head->info;
    head = head->next;
    while (head != NULL){
        if (head->info > response){
            response = head->info;
        }
        head = head->next;
    }
    return response;
}

// recursivo

char ReturnBiggerR(Node *head){
    if(head == NULL){
        return ' ';
    }
    if (head->next == NULL){
        return head->info;
    }
    char response = ReturnBiggerR(head->next);
    if (head->info > response){
        return head->info;
    } else {
        return response;
    }
}

int main() {
    return 0;
}

/*

iterativa

tipos
    Tno = registro
            texto: string
            prox: Pno
          fim registro
Função MaiorStr(head: Pno): string
var 
    response: string
inicio
    se head = NULO então
        retorne ""
    fim se
    response <- head^.texto
    head <- head^.prox
    enquanto head != NULO faça
        se head^.texto > response então
            response <- head^.texto
        fim se
        head <- head^.prox
    fim enquanto
    retorne response
fim Função

recursiva

tipos
    Tno = registro
            texto: string
            prox: Pno
          fim registro
Função MaiorStr(head: Pno): string
var
    response: string
inicio
    se head = NULO então
        retorne ""
    fim se
    se head^.prox = NULO então
        retorne head^.texto
    fim se
    reponse <- MaiorStr(head^.prox)
    se head^.texto > response então
        retorne head^.texto
    senão
        retorne response
    fim se
fim Função
*/