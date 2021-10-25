#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node* next;
};
struct node *num=NULL;
struct node *r=NULL;


void createlist(int n){
    if(n<=0)
    return;
    int t;
    struct node* p=num;
    for(int i=1;i<=n;i++){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    printf("enter at %d: ",i);
    scanf("%d",&t);
    new->data=t;
    p->next=new;
    new->next=num->next;
    p=p->next;
    (num->data)++;
    }
    r=p;
}
void count(){
    printf("number of elements is : %d\n",num->data);
}
void display(){
    struct node* p= num->next;
    do{
    printf("%d ",p->data);
    p=p->next;
    }while(p!=num->next);
    printf("\n");
}
void insert_at_first(int data){
    struct node * new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=num->next;
    r->next=new;
    num->next=new;
    printf("%d is insert at top\n",data);
}
void insert_at_last(int data){
    printf("%d is insert at last\n",data);
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=num->next;
    r->next=new;
    r=r->next;
}
void insert_at_mid(int data){
    struct node* p= num->next;
    int k=(num->data)/2;
    
    while(k--){
    p=p->next;
    }
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=p->next;
    p->next=new;
    printf("%d is insert at mid\n",data);
   
}
int main(){
    num=(struct node*)malloc(sizeof(struct node));
    num->data=0;
    num->next=NULL;
    
    createlist(3);
    count();
    display();
    insert_at_first(25);
    display();
    insert_at_mid(50);
    display();
    insert_at_last(75);
    display();
    return 0;
}
