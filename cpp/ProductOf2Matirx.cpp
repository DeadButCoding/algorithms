#include <stdio.h>
#include <stdlib.h>

struct Matrix{
    int Dimention;
    int *A;
};

//? for frist Matrix
void create0(struct Matrix *p){
    p->A = (int *)malloc(2*p->Dimention*sizeof(int));
    printf("\nEnter each elements of first Matrix: \n");
    int terms = 0;
    for (int i = 0; i < p->Dimention; i++){
        for (int j = 0; j < p->Dimention; j++){
            printf("%d.%d ", i+1,j+1);
            scanf("%d", &p->A[terms]);
            terms++;
        }
        printf("\n");
    }
}

void display0(struct Matrix p){
    printf("\nThe first matrix is: \n");
    int terms = 0;
    for (int i = 0; i < p.Dimention; i++){
        for (int j =0; j < p.Dimention; j++){
            printf("%d\t",p.A[terms]);
            terms++;
        }
        printf("\n");
    }
}

//? For second matrix
void create1(struct Matrix *q){
    q->A = (int *)malloc(2*q->Dimention*sizeof(int));
    printf("\nEnter each elements of second Matrix: \n");
    int terms = 0;
    for (int i = 0; i < q->Dimention; i++){
        for (int j = 0; j < q->Dimention; j++){
            printf("%d.%d ", i+1,j+1);
            scanf("%d", &q->A[terms]);
            terms++;
        }
        printf("\n");
    }
}

void display1(struct Matrix q){
    printf("\nThe second matrix is: \n");
    int terms = 0;
    for (int i = 0; i < q.Dimention; i++){
        for (int j =0; j < q.Dimention; j++){
            printf("%d\t",q.A[terms]);
            terms++;
        }
        printf("\n");
    }
}

//! Product of two matrix;
void product(struct Matrix *p, struct Matrix *q){
    struct Matrix *multi;
    int terms = 0;
    multi->Dimention = p->Dimention;
    multi->A = (int *)malloc(multi->Dimention*multi->Dimention*sizeof(int));
    multi->A[terms] = 0;
    printf("\nThe product of both the matrix is: ");
    for (int i = 0; i < multi->Dimention; i++){
        for (int j = 0; j < multi->Dimention; j++){
            multi->A[terms] += p->A[terms] * q->A[terms];
            terms ++;
        }
    }
    // for printing result;
    for (int i =0; i < multi->Dimention; i++){
        for (int j = 0; j < multi->Dimention; j ++){
            printf("%d\t", multi->A[terms]);
            terms ++;
        }
        printf("\n");
    }
    printf("\n\n");
}

int main(){
    struct Matrix p, q;
    printf("\nEnter the Dimention of first Square Matrix: ");
    scanf("%d", &p.Dimention);
    create0(&p);
    display0(p);
    printf("\n");
    printf("\nEnter the Dimention of second Square Matrix: ");
    scanf("%d", &q.Dimention);
    create1(&q);
    display1(q);
    printf("\n");

    product(&p, &q);
    return 0;
}
