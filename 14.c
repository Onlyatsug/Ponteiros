#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    char data;
    struct Node *next;
} Node;

bool InsertOnInit(Node **head, int id, char x){
    Node *p = *head;
    Node *new = (Node*)malloc(sizeof(Node));
    if (new == NULL){
        return false;
    } else {
        new->key = id;
        new->data = x;
        new->next = p;
        *head = new;
        return true;
    }
}

int main(){
    return 0;
}

/*

tipos
    PNo: ponteiro para TNo
    TNo: registro
            key: inteiro
            info: string
            prox: PNo
         fim registro
Função InserirNoInicio(ref: head: Pno, ch: inteiro, x: string): lógico
var
    new, p: Pno
inicio
    p <- head
    new <- aloca(Tno)
    se new = NULO então
        retorne FALSO
    fim se
    new^.key <- ch
    new^.info <- x
    new^.prox <- p
    head <- new
fim Função
*/