 ///
 /// @file    1.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-16 00:53:27
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{
   const int a=10;
   int b=20;
   const int *pa=&b;
   int const *pb=&b;
   int * const pc=&b;
   cout << "a="   << a  << endl;
   cout << "pa="  << *pa<< endl;
   cout << "pb="  << *pb<< endl;
   cout << "pc="  << *pc<< endl;


   return 0;
}
