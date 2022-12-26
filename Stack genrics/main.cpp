#include "stack.cpp"

using namespace std;

int main(){

	stackk<int> int_stack(128);
	int size;
	int_stack.getMaxSize(size);
	cout<< size << endl;
	int_stack.push(15);
	int_stack.push(1);
	int_stack.push(2);
	int_stack.push(3);
	int pop;
	int_stack.pop(pop);
	cout << pop << endl;
	int_stack.pop(pop);
	cout << pop << endl;
	int_stack.pop(pop);
	cout << pop << endl;
	cout << endl << endl;
	
	
	stackk<string> aint_stack(255);
	int ssize;
	aint_stack.getMaxSize(ssize);
	cout<< ssize << endl;
	aint_stack.push("muhammed");
	aint_stack.push("mahmoud");
	aint_stack.push("ahmed");
	string spop;
	aint_stack.pop(spop);
	cout << spop << endl;
	aint_stack.pop(spop);
	cout << spop << endl;
	cout << endl << endl;
	
	stackk<string> copy_str(aint_stack);
	int c_s;
	copy_str.getMaxSize(c_s);
	cout << c_s << endl;
	string sop;
	copy_str.pop(sop);
	cout << sop << endl;
	copy_str.pop(sop);
	
	
}
