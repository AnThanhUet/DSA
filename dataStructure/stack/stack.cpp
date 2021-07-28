#include <iostream>

#define MAX 10
int size = 0;

/*Creating a stack*/
struct stack {
	int items[MAX];
	int top;
};
typedef struct stack st;

void createEmptyStack(st *s)
{
	s->top = -1;
}

/*Check if the stack is full*/
int isFull(st *s)
{
	if (s->top == MAX -1)
		return 1;
	else
	return 0; 
}

// Check if the stack is empty
int isEmpty(st *s)
{
	if(s->top == -1)
		return 1;
	else
		return 0;
}

// All elements into stacl
void push(st *s, int newItem)
{
	if (isFull(s))
	{
		std::cout << "Stack full!";
	}
	else
	{
		s->top++;
		s->items[s->top] = newItem;
	}
	size++;
}

//Remove elements from stack
void pop(st *s)
{
	if (isEmpty(s))
	{
		std::cout << "\n Stack empty!";
	}
	else
	{
		std::cout << "Item poped = " << s->items[s->top];
		s->top--;
	}
	size--;
	std:: cout << std::endl;
}

//Print elements of stack
void printStack(st *s)
{
	std::cout << "Stack: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << s->items[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	st *s = (st *)malloc(sizeof(st));
	createEmptyStack(s);

	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);

	printStack(s);

	pop(s);
	printStack(s);
	std::cout << "rm = " << s->items[3];
	push(s, 10);
	printStack(s);
	std::cout << "rm = " << s->items[3];

	return 0;
}
