//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int number;
 std::cout<<"Please enter a whole number:\n";
 std::cin>>number;
  
  int number1;
 std::cout<<"Please enter another whole number:\n";
 std::cin>>number1;

  int biggest;
  if(number > number1)
  {
biggest = number;
  }
  else 
  {
  biggest = number1;
  }
  cout<<"Of those two numbers, the biggest is: "<<biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
