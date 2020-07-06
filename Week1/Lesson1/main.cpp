/** This first lesson was all about encapsulating data in a header and a main file. Here is an example of what we were supposed to do. 
*/
#include <iostream>
class Pair{
  public:
    int a;
    int b; 
    int sum();
};

int Pair::sum(){
  return a+b;
}
// The following code was given in the final quiz for the lecture.
// This main() function will help you test your work. 
// Click Run to see what happens.
// When you're sure you're finished, click Submit for grading
// with our additional hidden tests.
int main() {
  Pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}

