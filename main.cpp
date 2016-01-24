#include <iostream>
#include "stack.h"
#include "arithops.h"

int main(){
	Stack stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.printStatus();
	add(stk);
	stk.printStatus();
	sub(stk);
	stk.printStatus();
	stk.push(5);
	mul(stk);
	stk.printStatus();
	stk.push(4);
	div(stk);
	stk.printStatus();

	return 0;
}
