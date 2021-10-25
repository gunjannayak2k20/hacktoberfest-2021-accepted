#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node *front=NULL;
struct node *rear=NULL;


void createlist(int n){
    if(n<=0)
    return;
    int t;
    struct node* new=(struct node*)malloc(sizeof(struct node));
    printf("enter at %d: ",1);
    scanf("%d",&t);
    new->data=t;
    front=new;
    front->prev=NULL;
    front->next=NULL;
    rear=new;
    rear->prev=NULL;
    rear->next=NULL;
    for(int i=2;i<=n;i++){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    printf("enter at %d: ",i);
    scanf("%d",&t);
    new->data=t;
    rear->next=new;
    new->prev=rear;
    new->next=NULL;
    rear=rear->next;
    }
    
}

void display(){
    struct node* p= front;
    while(p){
    printf("%d ",p->data);
    p=p->next;
    }
    printf("\n");
}
void rdisplay(){
    struct node* p= rear;
    while(p){
    printf("%d ",p->data);
    p=p->prev;
    }
    printf("\n");
}
void insert_at_first(int data){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=front;
    front->prev=new;
    new->prev=NULL;
    front=front->prev;
    printf("%d is insert at first\n",data);
}
void insert_at_last(int data){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->prev=rear;
    new->next=NULL;
    rear->next=new;
    
    rear=rear->next;
    printf("%d is insert at last\n",data);
}
void insert_at_mid(int data){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    struct node*p=front;
    struct node*q=front;
    while(q){
    p=p->next;
    q=q->next->next;
    }
    new->next=p;
    new->prev=p->prev;
    p->prev->next=new;
    p->prev=new;
    
    printf("%d is insert at mid\n",data);
}
int main(){
    
    createlist(3);
    
    display();
    insert_at_first(10);
    display();
    insert_at_mid(30);
    display();
    insert_at_last(60);
    display();
    return 0;
}