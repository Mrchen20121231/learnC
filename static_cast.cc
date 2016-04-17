 ///
 /// @file    static_cast.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-16 01:12:00
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{
    int a=10;
	double b=double(a);
	double c=(double)a;
	double d=static_cast<double>(a);
	float  e=(float)a;
	float f=10.0;
	double g=(double)f;
	//more //const_cast/dynamic_cast/reinterpret_cast
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	cout << "e=" << e << endl;
	cout << "g=" << g << endl;
 
}
