#include "stack.h"

//Roll the contents of the stack down one register
void Stack::rollDown(){
	uint64_t temp=x;
	x=y;
	y=z;
	z=t;
	t=temp;
}

//Roll the contents of the stack up one register
void Stack::rollUp(){
	uint64_t temp=t;
	t=z;
	z=y;
	y=x;
	x=temp;
}

//Exchange the contents of x register and y register
void Stack::XexY(){
	uint64_t temp=x;
	x=y;
	y=temp;
}

//Push a number into the stack
void Stack::push(uint64_t num){
	rollUp();
	x=num;
}

/**
 * Pop x register and drop the stack
 * Returns the content of x register that was popped.
 */
uint64_t Stack::pop(){
	uint64_t ret=x;
	rollDown();
	t=z;
	return ret;
}


