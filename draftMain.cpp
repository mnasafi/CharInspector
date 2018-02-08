//Author: Mustafa Nasafi

//import library
#include<iostream>

using namespace std;

int main()
{
    
  //declare variables
  char letter;
  int AsciiValue;


  //for loop to keep repeating the program x times

  for(int x = 0; x <= 5; x++)
  {
    

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
  cout << letter << "?! Pssh. What are you talking about?\n";
  
  }
    
  //end if statement


  // cast character letter to integer ASCII value
  AsciiValue = (int)letter;

  //no matter what they enter...
  cout << "The ASCII value is: " << AsciiValue << endl;



  } // end main for loop


  //exit program
  return 0; 

} //end main

