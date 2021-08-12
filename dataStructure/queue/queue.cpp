#include <iostream>

#define SIZE 5;

class Queue
{
private:
	int front, rear;
	int items[SIZE];
public:
	Queue()
	{
		front = -1;
		rear = -1;
	}
}

bool isFull()
{
	if (front = 0 && rear = SIZE - 1)
	{
		return true;
	}
	return false;
}

bool isEmpty()
{
	if (front == -1)
		return true;
	else
		return false;
}

void enQueue(int element)
{
	if(isFull())
		std::cout << "Queue full! \n";
	else
	{
		if (front == -1)
			front = 0;
		rear++;
		items[rear] = element;
		std::cout << "Inserted " << element << std::endl;
	}
}

auto deQueue(void)
{
	int element { 0 };
	if (isEmpty())
	{	
		std::cout << "Queue is Empty!" << std::endl;
		return -1;
	}
	else
	{
		element = items[front];
		if (front >= rear)
		{
			front = -1;
			rear = -1;
		}
		++front;
		std::cout << "Deleted " << element << std::endl;
		return element;
	}
}
