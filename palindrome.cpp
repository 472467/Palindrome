/* Created by Brendan
Checks if input is a palindrome, thats about it 
uses cin.getline(), stops at white space otherwise
had to insert NULL char at end of inputBackwards
it was not putting a NULL char automatically
CYGWIN 64 BIT
*/

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


using namespace std;

int main(){
	char input [80], inputNoSpace [80], inputBackwards [80];
	int openSpace = 0;//variable used to designate an open space for the text only input
	for(int x =0; x < 80; x++){//cleans char arrays
		input[x]= '\0';
		inputNoSpace[x]= '\0';
		inputBackwards[x]= '\0';
	}
	cout << "Input text to see if it is a palindrome, spaces or punctuation do not matter. \n";
	cin.getline(input, 80);//cin alone skips whitespaces, getline fixes that
	
	for(int x = 0; x < 80; x++){//removes punct and whitespace
		if(isspace(input[x]) == 0 && ispunct(input[x]) == 0){
			inputNoSpace[openSpace]+= input[x];
			openSpace++;
		}
	}
	int count = 0;//length of char array
	while(inputNoSpace[count] != '\0'){//how long before it reaches end of line
		count++;
	}
	int y = 0;//counts up
	for(int x = count - 1; x >= 0; x--){//starts from length of char array, -1 for null char
		inputBackwards[y]= inputNoSpace[x];
		y++;
	}
	inputBackwards[count]= '\0';//explained in header
	if(strcmp(inputNoSpace, inputBackwards) == 0){
		cout << "\nIs palindrome.";
	}else{
		cout << "\nNot palindrome.";
	}
	
	return 0;//ends program with no errors
}

