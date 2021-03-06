//just showing how pointers work, basically  
#include <iostream>
 class Pair {
  public:
    int *pa,*pb;
    Pair(int a, int b);
    Pair(const Pair & a);
   ~Pair();
  };
 
 Pair::Pair(int a, int b){
  pa = new int;
  pb = new int; 
  *pa = a;
  *pb = b;
   std::cout << "In the first constructor, pa is " << *pa << std::endl;
   std::cout << "In the first constructor, pb is " << *pb << std::endl;
   
 }
 
 Pair::Pair(const Pair & a){
  //  std::cout << "In the copy constructor, A is " << *a.pa << std::endl;
  //  std::cout << "In the copy constructor, B is " << *a.pb << std::endl;
  pa = a.pa;
  pb = a.pb;
  std::cout << *pa << " Copy A" << std::endl;
  std::cout << *pb << " Copy B" << std::endl;
 }

Pair::~Pair(){ 
 std::cout << "Destroyed"  << std::endl;
};
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(16,17);
  std::cout << *p.pa << " Printing pa" << std::endl;
  std::cout << *p.pb << " Printing pb" << std::endl;

  Pair q(p);
  
  std::cout << *q.pa << std::endl;
  Pair *hp = new Pair(23,42);
  std::cout << *hp->pa << " Line 3" << std::endl;
  std::cout << *hp->pb << " Line 4" << std::endl;
  delete hp;// deleting from the heap
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}
