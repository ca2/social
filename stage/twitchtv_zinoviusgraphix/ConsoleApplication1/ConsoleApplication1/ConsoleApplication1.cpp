// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "header.txt"


// zinoviusgraphix
// The code does not execute properly.Try to figure out why.
//std::cin int multiply(int a, int b)
//{
//   std::cin a * b;
//}




void main2();

int main()
{

   main2();

   return 0;

}

void main2()
{

   int a;

   std::cout << "\r\ninput 'a' please: ";

   std::cin >> a;


   int b;

   std::cout << "\r\rninput 'b' please: ";

   std::cin >> b;

   auto c = multiply(a, b);

   std::cout << c;

   ::getchar();
   ::getchar();


}
