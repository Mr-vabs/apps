#include <stdio.h>
#include<stdlib.h>

typedef struct {
    int data;
    struct dbl *prev;
    struct dbl *next ;
} dbl;

void doublylinkedlist (dbl *ptr) {
    while (ptr!='/0') {
        printf ("element : %d\n",ptr ->data )       ;
        ptr=ptr->next;
    }
}

dbl *insertafter(dbl *p,dbl *head,int data) {
    dbl *ptr=(dbl *)malloc(sizeof (dbl ) );
    p->next =ptr;
    ptr ->prev=p;
    ptr ->next =p->next ;
    ptr->data =data;
    return head ;
}

int main() {
    dbl *head ;
    dbl *second;
    dbl *third;
    dbl *forth;
    head=(dbl *)malloc (sizeof (dbl ));
    second=(dbl *)malloc (sizeof (dbl ));
    third=(dbl *)malloc (sizeof (dbl ));
    forth=(dbl *)malloc (sizeof (dbl ));
    head ->data =6;
    head ->prev ='/0';
    head ->next =second ;
    second ->data=7;
    second ->prev =head;
    second ->next =third;
    third ->data =8;
    third ->prev =second;
    third ->next =forth;
    forth ->data =9;
    forth ->prev =third;
    forth ->next ='/0';
    doublylinkedlist (head );
    printf("Insert after a node\n");
    head =insertafter(head, third,64);
    doublylinkedlist(head);
}
