 ///
 /// @file    new.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-17 00:15:10
 ///
 //
#include<stdlib.h>
#include <iostream>
using std::cout;
using std::endl;
int main()
{
   int *pa=(int *)malloc(sizeof(int));//申请一个指针的内存空间
   cout << "*pa=" << *pa << endl;//未初始化的情况下是没有值的 即值为0
   *pa=10;
   cout << "*pa=" << *pa << endl;
   free(pa);
   int *pd=(int *)malloc(sizeof(int)*10);//申请多个空间的情况
   

   int *pc=new int[10];
   int idx;
   for(idx=0;idx<10;idx++)
   {
     cout << pc[idx] << endl;     
   }

   delete [] pc;//释放空间


   int *pb=new int(10);   //new是表达式 ,不是函数
   //1.申请堆栈空间，2、进行初始化。3、返回一个指向堆空间的首地址。
   cout << "*pb=" << *pb << endl;
}
