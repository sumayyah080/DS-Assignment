#include<stdio.h>
#define MAX 2
int stack[MAX];
int top=-1;
int isEmpty();
int isFull();
void push(int value);
void pop();
int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();
    pop(); //should show underflow
    return 0;
}
//checking if stack is empty
int isEmpty()
{
    return top==-1;
}
//checking if is it full
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
/* Output:
10 pushed to stack
20 pushed to stack
Overflow
popped value: 20
popped value: 10
Underflow
*/
