#include "arithops.h"

// Add contents of x and y, put the result in x and drop the stack
int64_t add(Stack& stk){
	int64_t temp=stk.pop();
	temp+=stk.pop();
	stk.push(temp);
	return temp;
}

//Substraction
int64_t sub(Stack& stk){
	int64_t temp=stk.pop();
	temp=stk.pop()-temp;
	stk.push(temp);
	return temp;
}

//Multiplication
int64_t mul(Stack& stk){
	int64_t temp=stk.pop();
	temp*=stk.pop();
	stk.push(temp);
	return temp;
}

//Division
int64_t div(Stack& stk){	
	int64_t temp=stk.pop();
	temp=stk.pop()/temp;
	stk.push(temp);
	return temp;
}

//Absolute value
int64_t abs(Stack& stk){
	int64_t temp=stk.pop();
	temp=(temp<0)?(0-temp):temp;
	stk.push(temp);
	return temp;
}

//Reverse sign
int64_t chs(Stack& stk){
	int64_t temp=stk.pop();
	temp=0-temp;
	stk.push(temp);
	return temp;
}

//Remainder
int64_t rmd(Stack& stk){
	int64_t temp=stk.pop();
	temp=stk.pop()%temp;
	stk.push(temp);
	return temp;
}

