#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int stack[100],top,size,data,i;
void push();
void pop();
void print();

int main()
{
    int choice;
    printf("\nEnter Size of Stack : ");
    scanf("%d",&size);
    printf("\n    Stack Using Array\n  ---------------------");
    printf("\n\t1.Push\n\t2.Pop\n\t3.Print\n\t4.Exit\n");
    top=-1;
    do
    {
        printf("\nEnter Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: print();
                    break;
            case 4: printf("\nExiting...");
                    break;
            default : printf("\nWrong Choice!!!\n");

        }
    }while(choice!=4);
    return 0;
}

void push()
{
    if(top>=size-1)
    {
        printf("\tStack is Overflow\n");
    }
    else
    {
        printf("Enter Data : ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("\tData PUSHED : %d",data);
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("\tStack is Underflow");
    }
    else
    {
        printf("\tData popped : %d",stack[top]);
        top--;
    }
}

void print()
{
    if(top>=0)
    {
        printf("\n   Elements In Stack\n  --------------------\n");
        for(i=top;i>=0;--i)
        {
            printf("\t  %d\n",stack[i]);
        }
    }
    else
    {
        printf("\tStack is Empty");
    }
}
