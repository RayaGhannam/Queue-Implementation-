#include <iostream>
using namespace std;

#include "TemplateQueue.h"

template <class t>
Queue <t> ::Queue(int s) {
	size = s > 0 ? s : 10;
	head = -1;
	tail = -1;
	queuePtr = new t[s];
}

template <class t>
bool Queue <t> ::enQueue(const t& addvalue) {
	if (!isFull()) {
		if (head == -1) {
			head = 0;
		}
		++tail;
		queuePtr[tail] = addvalue;

		return true;
	} return false;
}

template <class t>
bool Queue <t> ::deQueue(t& popvalue) {
	if (!isEmpty()) {
		popvalue = queuePtr[head];
		head++;
		if (head > tail) {
			head = -1;
			tail = -1;
		}
		return true;
	}return false; 

}
int main() {

	Queue<int>myQueue(10);
	int x = 10;


	cout << " Pushing elements:" << endl;

	while (myQueue.enQueue(x)) {
		cout << x << endl;
		x += 1;
	}
	cout << "\nStack is full. Cannot push" << x << "\nPoopin elements." << endl;
	
	cout << "The head of this Queue is :" << myQueue.Peek() << endl;
	
	while (myQueue.deQueue(x)) {
		cout << x << ' ';
	}
	cout << "\nStack is empty, cannot pop." << endl;
	

	Queue<double> doubleQueue(10);   
	double y = 1.1;


	cout << " Pushing elements:" << endl;

	while (doubleQueue.enQueue(y)) {
		cout << y << endl;
		y += 1;
	}
	cout << "\nStack is full. Cannot push" << y << "\nPoopin elements." << endl;
	
	cout << "The head of this Queue is :" << doubleQueue.Peek() << endl;
	
	while (doubleQueue.deQueue(y)) {
		cout << y << ' ';
	}
	cout << "\nStack is empty, cannot pop." << endl;
	return 0; 

}
	

	 
