#include<iostream>
#include<string>
using namespace std;

template <class dataType>
class stackk{
	private:
		dataType *stack;
		int top, count, maxSize;
	public:
		stackk(int size = 128);
		stackk(const stackk &prime);
		bool isStackFull();
		bool isStackEmpty();
		void push(dataType v);
		void pop(dataType &v);
		void stackTop(dataType &v);
		int stackSize();
		void getMaxSize(int &s);	
};


