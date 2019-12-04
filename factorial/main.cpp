// reference: https://data-flair.training/blogs/header-files-in-c-cpp/

#include <iostream>
#include"factorial.h"
using namespace std;
int main()
{
cout<<"Welcome to our tech talk talk!"<<endl<<endl;
int positive_integer;
cout<<"Enter a positive integer: "<<endl;
cin>>positive_integer;
cout<<"The factorial of " << positive_integer << " is: " << factorial(positive_integer) <<endl;
return 0;
}
