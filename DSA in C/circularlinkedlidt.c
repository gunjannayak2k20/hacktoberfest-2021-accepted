#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node* next;
};
struct node *num=NULL;


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
int main(){
    num=(struct node*)malloc(sizeof(struct node));
    num->data=0;
    num->next=NULL;
    
    createlist(5);
    count();
    display();
    return 0;
}
