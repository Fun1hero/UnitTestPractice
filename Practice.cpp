#include "Practice.h"
#include <string>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
  if( first < third )
  {
    int temp = first;
    first = third;
    third = temp;
  }
  if( second < third )
  {
    int temp = second;
    second = third;
    third = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  // unsigned int size = input.size();
  bool hasLeadingOrTrailingSpace = false;
  if (input[0] == ' ' || input[input.size()-1] == ' ') 
    hasLeadingOrTrailingSpace = true;
  string trimmed = input;
  if (trimmed.size() != 0 && hasLeadingOrTrailingSpace){
    while(hasLeadingOrTrailingSpace){
      if (trimmed[0] == ' '){
        trimmed = trimmed.substr (1,trimmed.size()-1); 
      } else if (trimmed[trimmed.size()-1] == ' '){
        trimmed = trimmed.substr (0,trimmed.size()-2);
      } else {
        hasLeadingOrTrailingSpace = false;
      }
    }
  }

  for(int i=0; i < trimmed.size(); i++)
  {
    if( trimmed[i] < 'A' || trimmed[i] > 'Z' )
    {
      //change lower case to upper case
      trimmed[i] = trimmed[i] - ('a' - 'A');
    }
  }
  for(int i=0; i < trimmed.size()/2; i++)
  {
    if( input[i] != trimmed[trimmed.size()-1-i] )
      return false;
  }
  return true;
}
