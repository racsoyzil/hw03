Author:   Juan Pueblo
Date:     today
Version:  1.0

/*
  Homework 03
  this assignment try ...
*/

#include <iostream>

int main ()
{
  double b=4.5;
  double c=5.4;
  int x=10;

  std::cout<<"vars declared and initialized "<<std::endl;
  std::cout<<"\tb: "<<b<<std::endl;
  std::cout<<"\tc: "<<c<<std::endl;
  std::cout<<"\tx: "<<x<<std::endl;

  b = x;

  std::cout<<"after expression: b = x; "<<std::endl;
  std::cout<<"\tb: "<<b<<std::endl;
  std::cout<<"\tc: "<<c<<std::endl;
  std::cout<<"\tx: "<<x<<std::endl;

  x = c;
  std::cout<<"after expression: x = c; "<<std::endl;
  std::cout<<"\tb: "<<b<<std::endl;
  std::cout<<"\tc: "<<c<<std::endl;
  std::cout<<"\tx: "<<x<<std::endl;

  return 0;
}
