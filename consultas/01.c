#include <stdio.h>
#include <stdbool.h>

// criando o Tipo Nó (Tno)
typedef struct No {
    int dado;
    struct No* prox;
} Tno;
// definindo Ponteiro para o Tno
typedef Tno* Pno;
// verifica ao receber a lista (tipo Pno) se é NULL ou não
bool IsEmpty(Pno l){
    return (l == NULL);
}
int main() {
    return 0;
}

/*
tipo
    Pno = ponteiro para Tno
    Tno = registro
            dado: ...
            prox: Pno
          fim registro
var

    Função VerificaSeListaVazia(head:Pno): lógico
    inicio
        se head = NULO então
            retorne VERDADEIRO
        senão
            retone FALSO
        fim se
    fim Função
*/