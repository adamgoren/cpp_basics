// reference: https://www.youtube.com/watch?v=nDwk3ASvBhA

#include <iostream>
#include <string>

using namespace std;

// Begin program
int main() {

  // Declare Variables
  string name;
  int age;

  cout << "What is your name?" << endl;
  cin >> name;
  cout << "Hi there " << name << ", how old are you?" << endl;
  cin >> age;
  cout << "Oh, you are " << age << " years old" << endl;
  cin.get();
  cin.get();

  return 0;
}