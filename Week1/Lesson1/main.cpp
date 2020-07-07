/** This first lesson was all about encapsulating data in a header and a main file. Here is an example of what we were supposed to do. The following is the quiz at the end of the lesson, and the .h file had been tossed aside for whatever reason. I took it upon myself to make the .h file instead of this stupid thing.  
*/
#include <iostream>
#include "Pair.h"
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

