#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float num1, num2, num3;
  cout << "Enter a number to find square root: ";
  cin>> num1;
  //sqrt is inbuit function in cmath header file
  cout<<"Sqaure root of "<<num1<<" is: "<<sqrt(num1) << "\n";
  cout << "Enter a number round it to nearest integer: ";
  cin>> num2;
  //round is another useful function in cmath library
  cout<<"Rounded form of "<<num2<<" is: "<<round(num2) << "\n";
  cout << "Enter a number to find logrithm of: ";
  cin>> num3;
  //finding log of a number using log function of cmath library
  cout<<"Log of "<<num3<<" is: "<<log(num3) << "\n";
  cout << log(num3) << "\n";
  
  return 0;
}
