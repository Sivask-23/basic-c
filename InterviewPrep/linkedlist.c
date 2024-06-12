#include <stdio.h>
#include <stdlib.h>

void insertAtbeg(int);
void printList();
void insertAtlast(int);
void remFirst();
void remLast();
void revlist();
struct node * reverseRec(struct node *);
void insertAtpos(int,int);
void delAtpos(int);


struct node {
    int data;
    struct node*next;
};


struct node *head=NULL;
int size=0;

int main()
{
    insertAtbeg(10);
    insertAtbeg(20);
    insertAtbeg(30);
    insertAtbeg(40);
    printList();
    insertAtlast(60);
    insertAtlast(70);
    printList();
    remFirst();
    printList();
    remLast();
    printList();
    revlist();
    printList();
    head=reverseRec(head);
    printList();
    insertAtpos(1,2);
    printList();
    delAtpos(2);
    printList();
    printf("Size of list is %d ",size);

    return 0;
}

void insertAtbeg(int data){
    size++;

struct node *newnode=(struct node *)malloc(sizeof(struct node));
if (head==NULL)
{
    newnode->data=data;
    newnode->next=NULL;
    head=newnode;
}else
{
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}



}

void printList(){
    if (head==0)
    {
        printf("list is empty\n");
        return;
    }

    struct node * currNode=head;
    while (currNode!=NULL)
    {
        printf("%d->",currNode->data);
        currNode=currNode->next;
    }
    printf("Null\n");
    
    
}
void insertAtlast(int data){
    size++;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    if (head==NULL)
    {
        newnode->data=data;
        newnode->next=NULL;
        head=newnode;
    }

    struct node * cuRnode=head;

    while (cuRnode->next!=NULL)
    {
        cuRnode=cuRnode->next;
    }
    cuRnode->next=newnode;
    newnode->data=data;
    newnode->next=NULL;
    
    

}

void remFirst(){
    size--;

    if (head==NULL)
    {
        printf("List empty\n");
        return;
    }

    head=head->next;
    return;
    
}

void remLast(){
    size--;
    if (head==NULL)
    {
        printf("List empty\n");
        return;
    }
    struct node * lastNode=head->next;
    struct node * prevNode=head;
    while (lastNode->next!=NULL)
    {
       lastNode=lastNode->next;
       prevNode=prevNode->next;
    }
    prevNode->next=NULL;
    

}


void revlist(){

    if (head==NULL || head->next==NULL)
    {
        return;
    }
    struct node * prevNode=head;
    struct node * curNode=head->next;
    while (curNode!=NULL)
    {
        struct node * nextNode=curNode->next;
        curNode->next=prevNode;

        // update
        prevNode=curNode;
        curNode=nextNode;
    }

    head->next=NULL;
    head=prevNode;
    

}

struct node * reverseRec(struct node *head){

    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    


    struct node * newHead=reverseRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}

void insertAtpos(int data,int pos){
    size++;
    struct node * newnode=(struct node *)malloc(sizeof(struct node));

    if (head==NULL)
    {
        printf("List empty\n");
        return;
    }
    if (pos==1)
    {
        insertAtbeg(data);
    }
    else{
    
    struct node * curNode=head;
    int i=1;
    while (i<pos-1)
    {
        curNode=curNode->next;
        i++;
    }
    newnode->data=data;
    newnode->next=curNode->next;
    curNode->next=newnode;
}
    
}

void delAtpos(int pos){

    size--;

    if (head==NULL)
    {
        printf("List empty\n");
        return;
    }

    struct node * prevNode=head;
    int i=1;
    while (i<pos-1)
    {
        prevNode=prevNode->next;
        i++;
    }
    prevNode->next=prevNode->next->next;
    
}



