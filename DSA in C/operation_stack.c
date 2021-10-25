#include<stdio.h>
int qa[100];
int front = -1;
int rear = -1;
void push(int n){
    if(front==-1){
    front=0;
    qa[++rear]=n;
    printf("%d is puhed\n",n);
    }
    else if(rear>=100){
    printf("Overflow \n");
    return;
    }
    else{
    qa[++rear]=n;
    printf("%d is puhed\n",n);
    }
} 
void pop(){
    if(front==-1){
    printf("Underflow\n");
    return;
    }
    else if(rear+1==front){
    printf("Empty queue \n");
    return;
    } 
    else{
    printf("%d is popped\n",qa[front++]);
    } 
}
void display(){
    for(int i=front;i<=rear;i++)
    printf("%d ",qa[i]);
    printf("\n");
}
int main(){
    push(5); push(3);push(4); push(1); 
    display();
    pop(); pop(); pop();
    display();
    pop(); pop();
    display();
    return 0;
}
