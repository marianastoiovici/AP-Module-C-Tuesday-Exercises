// C++ program that converts a user entered word to lower case and prints it in a message.
// https://repl.it/@mstoiovici/LowerCaseConverter#main.cpp
#include <iostream>
using namespace std;

int main() {
  string input;
  string copy;

  cout << "Please enter a word: ";
  getline(cin, input);
  //make a copy of the input so that we don't modify the value of input 
  copy = input;
  // loop through the copy and change each character to its lower version
  for(int i=0; i<copy.length(); i++){
    copy[i] = tolower(copy[i]);
  }
  cout << input << " converted to lower case is: " << copy;
  return 0;
}
