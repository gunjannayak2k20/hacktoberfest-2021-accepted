#include<stdio.h>
int cq[3];
int front=0;
int rear=0;
void push(int data){
    if(front==(rear+1)%3){
    printf("Overflow,");
    printf("%d can not push\n",data);
    return;
    }
    else{
    rear=(rear+1)%3;
    cq[rear]=data;
    }
    printf("%d is pushed \n",data);
}
void pop(){
    if(front==rear)
    printf("Underflow\n");
    else{
    front= (front+1)%3;
    printf("%d is popped\n",cq[front]);
    }   
}
void display(){
    for(int i=front+1;i<=rear;i++)
    printf("%d ",cq[i]);
    printf("\n");
}
int main()
{
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    display();
    push(6);
    pop();
    display();
    pop();
    display();
    return 0;
}
