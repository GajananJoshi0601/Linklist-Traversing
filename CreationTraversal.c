#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void linklistTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr -> next;
    }

}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head -> data = 7;
    head -> next = second;

    // Link first and second node
    second -> data = 11;
    second -> next = third;

    // Link first and second node
    third -> data = 17;
    third -> next = fourth;

    // Link first and second node
    fourth -> data = 71;
    fourth -> next = NULL;

    linklistTraversal(head);
    return 0;
}