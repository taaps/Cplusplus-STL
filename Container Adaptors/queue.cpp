#include "queue.hpp"
#include <stdio.h>
#include <iostream>

template <typename T>
Queue<T>::Queue()
{
	current_size = 0;
	head = NULL;
}

// Function returns whether queue is empty or not
template <typename T>
bool Queue<T>::empty()
{
	if(current_size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Returns size of the queue
template <typename T>
int Queue<T>::size()
{
	;
}

// Adds an element to the front of the queue
template <typename T>
void Queue<T>::push(T element)
{
	;
}

// Removes the first element from the front of the queue
template <typename T>
T Queue<T>::pop()
{
	;
}

// Add an element to the end of the queue
template <typename T>
void Queue<T>::emplace(T element)
{
	;
}

int main()
{
	return 0;
}