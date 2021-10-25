#include<stdio.h>
#include<stdlib.h>
    int top=-1;
    int a[100];
void push(){
    int data ;
    scanf("%d",&data);
    a[++top]=data;
}
int pop(){
    int temp=a[top--];
    return temp;
}
void print(){
    for(int i=0;i<=top;i++)
    printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    push();
    push();
    push();
    print();
    printf("%d\n",pop());
    print();
    return 0;
}
