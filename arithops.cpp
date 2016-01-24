#include "arithops.h"

// Add contents of x and y, put the result in x and drop the stack
uint64_t add(Stack& stk){
	uint64_t temp=stk.pop();
	temp+=stk.pop();
	stk.push(temp);
	return temp;
}


