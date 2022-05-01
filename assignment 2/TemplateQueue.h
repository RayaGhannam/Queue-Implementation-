#ifndef TEMPLATEQUEUE_H
#define TEMPLATEQUEUE_H   
#include<iostream>

using namespace std;

template < class t >  
class Queue { 

private:
	int head, tail, size;  
	t* queuePtr;


public:
	Queue ( int );   
	~Queue () { delete[] queuePtr; };
	t Peek() { return queuePtr[head]; };
	bool enQueue (const t&);      
	bool deQueue (t&); 
	    bool isFull() {
		if (head == 0 && tail == size - 1) {
		return true;
		}return false;
		}
		bool isEmpty() {
			if (head == -1) {
			  return true;
			 }return false;
		}
 }; 
#endif 
 

 
