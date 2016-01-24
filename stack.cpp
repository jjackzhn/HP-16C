#include "stack.h"
#include <iostream>

//Roll the contents of the stack down one register
void Stack::rollDown(){
	int64_t temp=x;
	x=y;
	y=z;
	z=t;
	t=temp;
}

//Roll the contents of the stack up one register
void Stack::rollUp(){
	int64_t temp=t;
	t=z;
	z=y;
	y=x;
	x=temp;
}

//Exchange the contents of x register and y register
void Stack::XexY(){
	int64_t temp=x;
	x=y;
	y=temp;
}

//Push a number into the stack
void Stack::push(int64_t num){
	rollUp();
	x=num;
}

/**
 * Pop x register and drop the stack
 * Returns the content of x register that was popped.
 */
int64_t Stack::pop(){
	int64_t ret=x;
	rollDown();
	t=z;
	return ret;
}

//Print the current status of the stack
void Stack::printStatus() const{
	std::cout<<"=====================\n"
		<<"Current stack:\nT:"<<t
		<<"\nZ:"<<z
		<<"\nY:"<<y
		<<"\nX:"<<x
		<<"\n=====================\n";
}


