#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};
// Node* A;
// A = NULL;//empty list
// Node* temp = (Node*)malloc(sizeof(Node));
int main(){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data =45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
}
