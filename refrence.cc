 ///
 /// @file    refrence.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-17 01:49:53
 ///
 
#include <iostream>
using std:: cout;
using std:: endl;
void swap(int &a,int &b )
{
    int tmp;
	tmp=a;
	a=b;
	b=tmp;
	

}
int & add(int a,int b)
{
   int num;
   num=a+b;
   return num;
}

int main()
{
   int a=2;
   int b=3;
   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
   swap(a,b);
   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
   cout << "a+b=" << add(a,b) << endl;

}
