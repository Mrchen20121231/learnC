 ///
 /// @file    overload.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-16 19:29:37
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int add(int a,int b)
{

  return  a+b;

}
int add(int a,int b,int c)
{

  return a+b+c;

}
int main()
{
   int a=2;
   int b=3;
   int c=4;
   cout << "a+b+c="<< add(a,b,c) <<endl;

}
