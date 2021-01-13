// C++ program that checks whether a word is a palindrome.
// https://repl.it/@mstoiovici/PalindromeChecker1#main.cpp
#include <iostream>
using namespace std;


int main() {
  string userInput;
  string userInputCopy;
  string userInputLower = "";
  string reversedUserInput = "";

  cout << "Please enter a word: ";
  getline(cin, userInput);
  //make a copy of the userInput
  userInputCopy = userInput;

  //loop through the userInputCopy, converts its characters to lower case and concatenate them to userInputLower
  for(int i=0; i<userInputCopy.length(); i++){
    userInputCopy[i] = tolower(userInputCopy[i]);
    userInputLower = userInputLower + userInputCopy[i];
  }

  // loop backwords through the userInputLower, from last character and concatenate it to reversedUserInput
  for(int i=userInputLower.length()-1; i>=0; i--){
    reversedUserInput = reversedUserInput + userInputLower[i];
  }
  
  // check if userInput is a palindrome by comparing all characters of its lowered version with the one of its reversed version
  int i=0;
  while (i<userInputLower.length()){
    if(userInputLower[i] != reversedUserInput[i]){
      cout << "Sorry, "<< "\'" << userInput << "\' is not a palindrome." << endl;;
      i=userInputLower.length();
      return 0;
    }
    i++;
  }

  cout << "Yes, "<< "\'" << userInput << "\' is a palindrome \n" << endl;

  return 0;
}
