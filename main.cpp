#include <iostream>
#include <string>
#include <cctype>
#include "stack.h"
#include "arithops.h"

void printIntro(){
	std::cout<<"HP-16C Simulator\n"
		<<"Yan Zhan (c) 2016 All Rights Reserved\n"<<std::endl;
}

void printHelp(){
	std::cout<<"Available instructions:\n"
		<<"(number)	Enter a number\n"
		<<"rdn		Roll stack down one register\n"
		<<"rup		Roll stack up one register\n"
		<<"xexy		Exchange contents in x and y registers\n"
		<<"add		Addition\n"
		<<"sub		Substraction\n"
		<<"mul		Multiplication\n"
		<<"div		Division\n"
		<<"abs		Absolute value\n"
		<<"chs		Change sign (x=-x)\n"
		<<"rmd		Remainder"
		<<"exit		Exit the program"<<std::endl;
}

bool isInt(std::string s){
	bool ret=true;
	for(auto it=s.begin();it!=s.end();it++)
		ret=ret&&isdigit(*it);
	return ret;
}

int main(){
	Stack stk;
	std::string inst;

	printIntro();

	while(1){
		stk.printStatus();
		std::cout<<">>";
		std::cin>>inst;
		if(inst=="help")
			printHelp();
		else if(inst=="exit"||inst=="quit"||inst=="q")
			exit(0);
		else if(isInt(inst))
			stk.push(stoi(inst));
		else if(inst=="add")
			add(stk);
		else if(inst=="sub")
			sub(stk);
		else if(inst=="mul")
			mul(stk);
		else if(inst=="div")
			div(stk);
		else if(inst=="rdn")
			stk.rollDown();
		else if(inst=="rup")
			stk.rollUp();
		else if(inst=="xexy")
			stk.XexY();
		else if(inst=="abs")
			abs(stk);
		else if(inst=="chs")
			chs(stk);
		else if(inst=="rmd")
			rmd(stk);
		else
			std::cout<<"Invalid command. Enter \"help\" to see available instructions."<<std::endl;
	}

	return 0;
}
