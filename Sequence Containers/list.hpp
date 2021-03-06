#ifndef __LIST_H__
#define __LIST_H__

template <typename T>
struct node
{
	T value;
	struct node<T>* next;
	struct node<T>* previous;
};

template <typename T>
class List
{
private:
	struct node<T>* head;

public:
	List();
	T front();
	T back();
	void push_front(T element);
	void push_back(T element);
	void push_front();
	void pop_back();
	struct node<T>* being();
	struct node<T>* end();
	bool empty();
	void insert(struct node<T>* position);
	void erase(struct node<T>* position);
	void remove(T element);
	void clear();
	void reverse();
	int size();
	void sort();
	void unique();
	List<T>* merge(List<T>& secondList);
};


#endif // __LIST_H__