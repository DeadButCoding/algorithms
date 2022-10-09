#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int num){
    struct Node *last, *t;
    first = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < num; i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    while(p){
        printf("%d\t", p->data);
        p=p->next;
    }
}

//! Remove duplicate for linked list
// works only for closest duplicate number
void removeDuplicates(struct Node *p){
    struct Node *q = p->next;
    while (q != NULL){
        if (p->data != q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}

int main(){
    int A[] = {20, 20, 50, 50, 50};
    create(A, 5);
    removeDuplicates(first);
    display(first);
    return 0;
}
