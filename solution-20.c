#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
int isEmpty();
int isFull();
void push(int value);
void pop();
void display();
int main()
{
    push(10);
    push(4);
    push(3);
    display();

    pop();
    display();

    pop();
    pop();
    pop(); //Trying to pop from Empty stack
    return 0;
}
int isEmpty()
{
    return top==-1;
}
int isFull()
{
    return top==MAX-1;

}
void push(int value)
{
    if(isFull())
    {
        printf("Overflow\n");
        return;
    }

    else
    {
        top++;
        stack[top]=value;
        printf("%d pushed to stack\n",value);
    }
}
void pop()
{
    if(isEmpty())
    {
        printf("Underflow\n");
    }
    else
    {
       int value=stack[top];
        top--;
        printf("popped value: %d\n",value);
    }
}
 void display()
{

    if(isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {

printf("Stack Elemnts are: ");
for(int i=top; i>=0; i--)
{
    printf("%d\t",stack[i]);
}
printf("\n");
    }
}
/* Output:
10 pushed to stack
4 pushed to stack
3 pushed to stack
Stack Elemnts are: 3    4       10
popped value: 3
Stack Elemnts are: 4    10
popped value: 4
popped value: 10
Underflow */
