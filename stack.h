#ifndef STACK_H
#define STACK_H

#include <cstdint>

/**
 * A class to represent the stack register structure of HP 16C.
 *    ---------
 *  t |       |				Data enters from bottom.
 *    ---------				(i.e. x->y->z->t)
 *  z |       |				When the stack drops down, the contents
 *    ---------				of t register regenerates.
 *  y |       |				(i.e. x-y-z-t -> y-z-t-t)
 *    ---------            ---------     LastX register saves the
 *  x |       |      LastX |       |     content of x register 
 *    ---------			   ---------     before an operation.
 */

class Stack{
	public:

		//Roll the contents of the stack down one register
		void rollDown();
		
		//Roll the contents of the stack up one register
		void rollUp();
		
		//Exchange the contents of x register and y register
		void XexY();

		//Push a number into the stack
		void push(int64_t num);

		/**
		 * Pop x register and drop the stack
		 * Returns the content of x register that was popped.
		 */
		int64_t pop();

		//Print the current status of the stack
		void printStatus() const;

	private:

		int64_t x;
		int64_t y;
		int64_t z;
		int64_t t;
		int64_t lastX;

};

#endif
