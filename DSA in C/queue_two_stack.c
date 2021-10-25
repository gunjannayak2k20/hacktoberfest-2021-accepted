
#include <stdio.h>
#include <stdlib.h>
int stack1[100], stack2[100];
int top1 = -1, top2 = -1;
int count = 0;
void create()
{
top1 = top2 = -1;
}
void push1(int element)
{
stack1[++top1] = element;  
}
int pop1()
{
return(stack1[top1--]); 
}
void push2(int element)
{
stack2[++top2] = element;  
}
int pop2()
{
return(stack2[top2--]); 
}
void enqueue()
{
int data, i;
printf("Enter the data : ");
scanf("%d", &data);
push1(data); 
count++;
}
void dequeue()
{
if(count==0)
printf("Underflow\n");
else{
for (int i = 0;i <= count;i++)
{
push2(pop1()); 
}
printf("%d is popped\n",stack2[count-1]);
pop2(); 
count--;
for (int i = 0;i <= count;i++)
{
push1(pop2()); 
}
}}
void display()
{
int i;
if(top1 == -1)
{
printf("\nEMPTY QUEUE\n");
}
else
{
printf("\nQUEUE ELEMENTS : ");
for (i = 0;i <= top1;i++)
{
printf(" %d ", stack1[i]);
}
printf("\n");
}}
int main()
{
    enqueue();  enqueue();   enqueue();
    display();
    dequeue();
    display();
    enqueue();
    display();
    dequeue();  dequeue();
    enqueue();
    display();
    return 0;
}
