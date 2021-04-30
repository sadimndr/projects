#include<iostream>
using namespace std;
#define max 10                
 
int stack[max],top=-1;           
 
void push(int n)         
{
    if(top==max)    
    {
        cout<<"OVERFLOW!";
    }
    else
    {
        top=top+1;             
        stack[top]=n;        
    }
} 
int pop()               
{
    if(top==-1)      
    {
        cout<<"UNDERFLOW!";
    }
    else
    {
        top=top-1;
        return stack[top+1]; 
    }
}
int peek()
{
    if(top==-1)      
    {
        cout<<"UNDERFLOW!";
    }
    else
    {
        return stack[top];    
    }
}
void show()
{
    int i=0;
    if(top==-1)    
    {
        cout<<"UNDERFLOW!";
    }
    else if(top==max)     
    {
        cout<<"OVERFLOW!";
    }
    else
    {
        while(i<=top)   
        {
            cout<<"\t"<<stack[i];
            i++;
        }
        cout<<endl;
    }
}
int main() 
{ 
    int ch,val;
    cout<<"MENU";       
    cout<<"\n1.Push into the Stack\n2.Pop from Stack\n";
    cout<<"3.Peek from Stack\n4.Display the Stack\n5.Exit";
    while(1)    
    {
        printf("\nEnter the choice:");
        scanf("%d",&ch);
          
        switch(ch)
        {
            case 1: cout<<"Enter the item to be inserted: ";
                    cin>>val;
                    push(val);
                    break;
            case 2: cout<<"The popped element is : "<<pop()<<endl;
                    break;
            case 3: cout<<"The top-most element is : "<<peek()<<endl;
                    break;
            case 4: cout<<"Stack : ";
                    show();
                    break;
            case 5: exit(0);
              
            default: printf("\n Invalid choice!...");
        }
    }
    return 0;
}