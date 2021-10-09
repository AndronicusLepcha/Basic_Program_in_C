//Algorithm
//1.Begin the push operation check if top is pointing the the 1-size of the stack then print stack is 
//full else ask user to enter data and now increment the top pointer by value 1.
//2.Begin the peek operation check is the top pointing to the -1 is yes then print stack is empty or 
//underfolw if not then print the element of the stack.
//3.Begin the pop operation check is the top pointing to -1 if yes then print stack is empty else decrement
//the pointer Top by 1 and print the poped value.
//4. Exit the program
#include<stdio.h>
 
#include<stdlib.h>
  
#define Size 4
  
int Top=-1, inp_array[Size];
void Push();
void Pop();
void Peek();
  
int main()
{
    int choice;
     
    while(1)    
    {
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.Peek the element\n4.End the operation");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
         
        switch(choice)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: Peek();
                    break;
            case 4: exit(0);
             
            default: printf("\nInvalid choice!!");
        }
    }
}

void Push()
{
    int x;
    if(Top==Size-1)
    {
        printf("****Stack is in Overflow condition*****\n");
    }
    else{
        printf("\n**Enter the element to insert in the stack**\n");
        scanf("%d",&x);
        Top = Top+1;
        inp_array[Top]=x;
    }
}

void Peek()
{
    if(Top==-1)
    {
        printf("**Stack is in underflow condition!!**");
    }
    else
    {
        printf("\n**The element are:**\n");
        for(int i=0;i<=Top;i++)
        {
        printf("%d\t",inp_array[i]);
        }
    }
}
void Pop()
{
    if(Top==-1)
    {
        printf("\n**The stack is empty!**");
    }
    else{
        printf("\n**The element poped is %d**",inp_array[Top]);
        Top = Top-1;
    }
}
