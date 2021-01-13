// C++ program that checks whether a word from the input is a palindrome and disolays a message acordingly.
// https://repl.it/@mstoiovici/PalindromeChecker1#main.cpp
#include <iostream>
#include <string>
using namespace std;


int main() {
  string input;
  int start = 0;
  
  cout << "Please enter a word: ";
  getline(cin, input);
  int end = input.size()-1;
  
  while(start<end) {
    if(tolower(input[start]) != tolower(input[end])){
      cout << "Sorry, "<< "\'" << input << "\' is not a palindrome." << endl;
      return 0;
    } else {
      start++;
      end--;
    }
  }
  cout << "Yes, "<< "\'" << input << "\' is a palindrome \n" << endl;
 
  return 0;
}
