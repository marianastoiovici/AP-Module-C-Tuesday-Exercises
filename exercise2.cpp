// C++ program that converts a user entered word to lower case and prints it in a message.
// https://repl.it/@mstoiovici/LowerCaseConverter#main.cpp
#include <iostream>
using namespace std;

int main() {
  string userInput;
  string userInputCopy;
  string userInputLower = "";

  cout << "Please enter a word: ";
  getline(cin, userInput);
  //make a copy of the userInput
  userInputCopy = userInput;

  //loop through the userInputCopy, converts its characters to lower case and concatenate them to userInputLower
  for(int i=0; i<userInputCopy.length(); i++){
    userInputCopy[i] = tolower(userInputCopy[i]);
    userInputLower = userInputLower + userInputCopy[i];
  }

  cout << "\n" << userInput << " converted to lower case is: " << userInputLower;

  return 0;
}
