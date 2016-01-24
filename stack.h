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
		void push(uint64_t num);

		/**
		 * Pop x register and drop the stack
		 * Returns the content of x register that was popped.
		 */
		uint64_t pop();

		//Print the current status of the stack
		void printStatus() const;

	private:

		uint64_t x;
		uint64_t y;
		uint64_t z;
		uint64_t t;
		uint64_t lastX;

};

#endif
