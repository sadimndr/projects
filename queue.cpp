#include<iostream>
using namespace std;
#define max 10                
 
int queue[max],front=-1,rear=-1;           
 
void enqueue(int n) 
{
    if(rear==max)  
    {
        cout<<" Queue Is  full";
    }
    else if(front==-1 && rear==-1) 
    {
        front=front+1;
        rear=rear+1;
        queue[rear]=n;
    }
    else
    {
        rear=rear+1;
        queue[rear]=n;
    }
} 
int dequeue() 
{
    if(front==-1 || front>rear)  
    {
        cout<<" Queue Is Underflow!";
        return -1;
    }
    else
    {
        cout<<"The deleted data is : "<<queue[front=front+1];  
        return queue[front-1];
    }
}
 
void show()
{
    int i=front;
    if(front==-1 || front>rear)   
    {
        cout<<" Queue Is empty";
    }
    else
    {
        while(i<=rear) 
        {
            cout<<"\t"<<queue[i];
            i++;
        }
        cout<<endl;
    }
}
int main() 
{ 
    int ch,val;
    cout<<"MENU";  
    cout<<"\n1.enqueue\n2.dequeue\n3.Show\n4.Exit";
    while(1)    
    {
        printf("\nEnter the choice:");
        scanf("%d",&ch);
          
        switch(ch)
        {
            case 1: cout<<"Enter the value to be pushed: ";
                    cin>>val;
                    enqueue(val);
                    break;
            case 2: dequeue();
                    break;
            case 3: cout<<"Queue : ";
                    show();
                    break;
            case 4: exit(0);
              
            default: printf("\n Error");
        }
    }
    return 0;
}