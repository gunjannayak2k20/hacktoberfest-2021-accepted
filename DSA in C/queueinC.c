//This is a basic queue question by which a person can understand queue implementation(Enqueue,Dequeue) in C
//Question - To get queue elements and then get a element p ... print all the element of the queue greater than p , if there is no element greater than p then print no
#include <stdio.h>
int queue[100];
int f=-1;
int r=-1;

void enqueue(int n,int item){
;
    if(r>=n-1){
        return;
    }
    if(f==-1 && r==-1){
        f=f+1;
        r=r+1;
        queue[r]=item;
        
        
    }
    else{
        if(r<n-1){
        r=r+1;
        queue[r]=item;
    
            
        }
        
    }
    
}

int dequeue(int n){
    if((f==-1 && r==-1)||(f>r)){
        return -1;
    }
    return queue[f++];
    
}
int main(){
    
    
    int n;
    int x;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&x);
        
        enqueue(n,x);
        
        
    }
   
   
    int p;
    int c=0;
    scanf("%d",&p);
    for(int i=0;i<n;i++){
        x=dequeue(n);
        if(x>p){
            c=1;
            printf("%d ",x);
        }
    }
    
    if(c==0){
        printf("no");
    }
    
    
}
