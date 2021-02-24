#include<stdio.h>
#include<stdlib.h>
struct Node *head;
struct Node{
    int data;
    struct Node *next;
};
void Insert(int value){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=head;
    head=temp;

}
void Print(){
    struct Node *temp;
    temp =head;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
int main()
{
    head=NULL;
    Insert(15);
    Print();


    return 0;
}