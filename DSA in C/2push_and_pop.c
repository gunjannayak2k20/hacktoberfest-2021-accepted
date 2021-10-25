#include<stdio.h>
struct node{
 int data;
struct nide* next;
}*top=NULL;

void push(int data){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    if(top==NULL)
    top=new;
    else{
    new->next=top;
    top=new;
    }   
}
void pop(){
    if(top==NULL){
    printf("No element to pop\n");
    return;
    }
    struct node*t=top;
    top=top->next;
    printf("%d popped\n",t->data);
    free(t);
}
void print(){
    if(top==NULL){
    printf("No element");
    return;
    }
    
    struct node* t=top;
    while(t){
    printf("%d ",t->data);
    t=t->next;
    }
    printf("\n");
}
int main(){
    push(4);
    push(6);
    push(5);
    push(8);
    print();
    pop();
    print();
    return 0;
} 
