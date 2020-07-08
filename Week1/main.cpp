//Literally the easiest main file in history, but I wanted to show what this class was all about. Most of this class so far has been review for me
#include "Example.h"
#include <iostream>
int main(){
	Example a;
	a.a = 7;
	a.b = 6;
	int b = a.someFunc();
	std::cout << "The subtraction between the two is:" << b << std::endl;	
	return 0;
}
