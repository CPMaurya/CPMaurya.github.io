#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// create stack
struct node
{
    int top;
    unsigned capacity;
    int* array;
};

struct node* createnode(unsigned capacity)
{
    struct node* stack = (struct node*)malloc(sizeof(struct node));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// stack is full
int isFull(struct node* stack)
{
    return stack->top = node->capacity-1;
}

// stack is empty
int isEmpty(struct node* stack)
{
    return stack->top = -1;
}

// push item in stack
void push(struct node* stack, int item)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top] =item;
    printf("%d pushed to stack\n", item);
}

// pop item from stack
void pop(struct node* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int main()
{
    struct node* stack = createnode(100);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    printf("%d popped from stack\n", pop(stack));
    return 0;
}
