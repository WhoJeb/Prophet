#include <iostream>

using namespace std;

enum Selection {
  Age = 1,
  Name = 2,
  Height = 3,
};

int main() {
  enum Selection s;
  int input;

  cout << "1) Age\n2) Name\n3) Height\n" << endl;
  cout << "Enter number corresponding to choice: ";
  cin >> input;

  switch (input) {
    case Age:
      int age;
      cout << "What is your age? ";
      cin >> age;
      cout << "You are " << age << " years old." << endl;
      break;

    case Name:
      char name[50];
      cout << "What is your name? ";
      cin >> name;
      cout << "Your name is " << name << "." << endl; 
      break;

    case Height:
      char height[10];
      cout << "What is your height? ";
      cin >> height;
      cout << "You are " << height << " tall." << endl;
      break;

    default:
      cout << "//!Invalid Input//Terminating!//" << endl;
      return -1;
      break;
  }

}
