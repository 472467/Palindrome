/* Created by Brendan
Checks if input is a palindrome, thats about it 
CYGWIN 64 BIT
*/

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


using namespace std;

int main(){
	char input [80], inputNoSpace [80];
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
	for(int x = 0; x < 80; x++){
		cout << inputNoSpace[x];
	}
	//for(int x = 0;)
	
	
	return 0;
}

