#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int a[],int size);
void InsertAtBiggining(struct Node *head,int data);
void PrintList(struct Node *head);
struct Node{
    int data;
    struct Node *next;
};
int main(){
    int a[]={52,101,310};
    struct Node *head=NULL;
    head=createLinkedList(a,3);
    PrintList(head);
    InsertAtBiggining(head,500);
    
    return 0;
}
void PrintList(struct Node *head){
    while(head!=NULL){
        printf("%d --> ",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
void InsertAtBiggining(struct Node *head,int data){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    struct Node *newHead=temp;
    PrintList(newHead);
}
struct Node *createLinkedList(int a[],int size){
    struct Node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            current=temp;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
    return head;

}