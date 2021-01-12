// C++ program that prints out the reversed version of a user input word.
// https://repl.it/@mstoiovici/ReverseWord#main.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string userInput;
  string reversedUserInput = "";

  cout << "Please enter a word: ";
  getline(cin, userInput);

  // loop backwords through the userInput, from last character and concatenate it to reversedUserInput
  for(int i=userInput.length()-1; i>=0; i--){
    reversedUserInput = reversedUserInput + userInput[i];
  }

  cout << "\n" << "Programming spelt backwards is: " << reversedUserInput;

  return 0;
}
