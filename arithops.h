#ifndef ARITHOPS_H
#define ARITHOPS_H

#include <cstdint>
#include "stack.h"

/**
 * Add contents of x and y, put the result in x and drop the stack.
 * Returns the result.
 */
int64_t add(Stack& stk);

//Substraction
int64_t sub(Stack& stk);

//Multiplication
int64_t mul(Stack& stk);

//Division
int64_t div(Stack& stk);

#endif
