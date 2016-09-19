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
	int openSpace = 0;
	for(int x =0; x < 80; x++){
		input[x]= '\0';
		inputNoSpace[x]= '\0';
	}
	cout << "Input text to see if it is a palindrome, spaces or punctuation do not matter. \n";
	cin.getline(input, 80);
	
	for(int x = 0; x < 80; x++){
		if(isspace(input[x]) == 0 && ispunct(input[x]) == 0){
			inputNoSpace[openSpace]+= input[x];
			openSpace++;
		}
	}
	int count = 0;
	while(inputNoSpace[count] != '\0'){
		count++;
	}
	int y = 0;
	for(int x = count - 1; x >= 0; x--){
		inputBackwards[y]= inputNoSpace[x];
		y++;
	}
	inputBackwards[count]= '\0';
	if(strcmp(inputNoSpace, inputBackwards) == 0){
		cout << "\nIs palindrome.";
	}else{
		cout << "\nNot palindrome.";
	}
	
	return 0;
}

