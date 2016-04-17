 ///
 /// @file    extern.c
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-16 19:53:03
 ///
 
#include <stdio.h>

#ifdef __cplusplus
extern "C"{
#endif

int add(int a,int b)
{
   return a+b;

}
#ifdef __cplusplus
}
#endif
int add(int a,int b,int c)
{
  return a+b+c;
}
int main()
{
   int a=2;
   int b=3;
   int c=4;
   printf("a+b=%d\n",add(a,b));

}
