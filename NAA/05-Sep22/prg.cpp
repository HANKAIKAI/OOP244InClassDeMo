#include <iostream>
#include "DynMarks.h"
using namespace std;
using namespace sdds;
int main() {
   double marks[] = { 12,80,45.5, 88, 99 };
   DynMarks W1;                      //1 Create an Object
   W1.init("Workshop 1", marks, 5);  //2 Need to initialize tobeableto use it
   W1.display();
   for (int i = 0; i < 50; i++) {
      W1.add(49.5 + i);
   }
   W1.display();
   W1.deallocateMem();
   return 0;
}