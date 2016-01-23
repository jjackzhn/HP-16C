#include <iostream>
#include "stack.h"

int main(){
	Stack stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	for(int i=0;i<10;i++)
		std::cout<<stk.pop()<<std::endl;
	return 0;
}
