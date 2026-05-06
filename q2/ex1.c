#include <stdio.h>

/*Give a non-recursive definition of the function int length (LInt) which calculates the length of a
linked list.*/
typedef struct lligada{
    int valor;
    struct lligada *prox;
}*LInt;

int length(LInt l){
    int comp = 0;
    while(l != NULL){
        comp++;
        l = l -> prox;
    }
    return comp;
}

