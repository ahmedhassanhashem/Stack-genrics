#include<iostream>
#include "stack.h"
#include<string>

using namespace std;

template <class dataType>
stackk<dataType>::stackk(int size){
	top = -1;
	count = 0;
	maxSize = size;
	stack = new dataType [maxSize];
}
template <class dataType>
stackk<dataType>::stackk(const stackk &prime){
	top = prime.top;
	count = prime.count;
	maxSize = prime.maxSize;
	stack = new dataType [maxSize];
	for(int i = 0; i < maxSize; i++) {stack[i] = prime.stack[i];}
}
template <class dataType>
bool stackk<dataType>::isStackFull(){
	return (top == maxSize-1);
}
template <class dataType>
bool stackk<dataType>::isStackEmpty(){
	return (top == -1);
}
template <class dataType>
void stackk<dataType>::push(dataType v){
	if(isStackFull()) cout << "stack overflow";
	else{ stack[++top] = v; count++;}
}
template <class dataType>
void stackk<dataType>::pop(dataType &v){
	if(isStackEmpty()) cout << "stack underflow";
	else { v = stack[top--]; count--; }
}
template <class dataType>
int stackk<dataType>::stackSize(){
	return count;
}
template <class dataType>
void stackk<dataType>::stackTop(dataType &v){
	v = stack[top];
}
template <class dataType>
void stackk<dataType>::getMaxSize(int &s){
	s= maxSize;
}

