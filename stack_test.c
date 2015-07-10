#include<stdio.h>
#include<string.h>
#define size 3
#include<stdlib.h>
struct node
{
    int value;
    int *next;
};

typedef struct node stack;
stack *top;
stack *tail;
int push(int);
int pull();
void display();
int main()
{

    int ch;
    do
    {


        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\n\nENTER YOUR CHOICE\n");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
        {
            int value;
            printf("enter the number to push\n");
            scanf("%d",&value);

                push(value);
                printf("\npushed a value\n\n");
                break;

        }
        case 2:
        {
            int m;
            m=pop();
            printf(" popping\n");
            printf(" popped element %d ",m);
            break;
        }
        case 3:
        {

            printf("\n displaying\n\n");
            display();
            break;
        }
        case 4:
        {
            return 0;;
            break;
        }

        default:
        {
            printf("no choice\n");
        }
        }
    }
    while(ch!=4);
    return 0;
}
/*int stackfull()
{
    if(->top==(size-1))
    {
        printf("\nstack is full\n");
        return 1;
    }
    else
        return 0;
}*/
int stackempty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
        return 0;
}
int push(int value)
{
    if(top==NULL)
    {
        top=(stack *)malloc(sizeof(stack));
        top->value=value;
        top->next=NULL;

    }
    else
        {
        top=(stack *)malloc(sizeof(stack));
        top->value=value;
        top->next=NULL;
        top=top->next;
        }
}




int pop()
{   //stack *ptr=top;
    int k;
    {
        k=top->value;
        top=top->next;
    }

    return k;
}
void display()
{

    if (top==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        stack *ptr=top;
        while(ptr!=NULL)
        {
            printf("\n %d \n",ptr->value);
            ptr=ptr->next;
        }

    }
}
