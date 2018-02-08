//Author: Mustafa Nasafi

//import library
#include<iostream>

using namespace std;

int main()
{
    
  //declare variables
  char letter;
  int AsciiValue;


  //prompt user for kybrd character input
  cout<<"What character do you want to know about?\n";

  cin >> letter;

  if(letter>='A' && letter <='Z')
  {
  
  //when user's entry is between A-Z...
  cout << letter << " is an upper case letter!\n";

  }

  else if(letter>='a' && letter <='z')
  {

  //when user's entry is between a-z...
  cout << letter << " is a lower case letter!\n";

  }

  else
  {

  //in all other cases...
  cout <<"You entered: " << letter << "  Pssh. What are you talking about?\n";
  
  }
    
  //end if statement


  // cast character letter to integer ASCII value
  AsciiValue = (int)letter;

  //no matter what they enter...
  cout << "The ASCII value is: " << AsciiValue << endl;

  //exit program
  return 0;
  
}

