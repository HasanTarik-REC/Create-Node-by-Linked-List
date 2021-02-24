#include<stdio.h>
#include<stdlib.h>
struct Node *head;
struct Node
{
    int data;
    struct node *next;
};
void Insert(int x){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head !=NULL){
    temp->next=head;
    }
    head=temp; 
}
void print(){
    struct Node *temp=head;
    printf("Linked List is: ");
    while (temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    int i,n,x;
    printf("How many numbers:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(x);
        print();
        printf("\n");
    }
}
