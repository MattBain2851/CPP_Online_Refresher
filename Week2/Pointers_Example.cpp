//I am making up this example from my knowledge of .cpp pointers. I probably missed something.Look at the key concepts to see what the class covered.
#include <iostream>


int main(){
  int number = 5;
  int* pointer = &number;
  std::cout << "Number " << number << std::endl;
  std::cout << "Number's Address " << &number << std::endl;
  std::cout << "Pointer's value " << pointer << std::endl;
  std::cout << "Dereferenced Pointer " << *pointer << std::endl;

  int* heapnum = new int; //adding number to heap
  pointer = heapnum;
  *heapnum = 6;
  
  std::cout << "Heapnum " << heapnum << std::endl;
  std::cout << "Pointer " << pointer << std::endl;
  std::cout << "Pointer Contents " << *pointer << std::endl;
  std::cout << "Heapnum value " << *heapnum << std::endl;
  
  delete heapnum;
  return 0;
}
