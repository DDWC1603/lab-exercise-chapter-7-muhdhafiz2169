//compare two strings
//complete the program below. 

#include <iostream>
#include <string>

int main() {
	string myName ="Hafiz";//write your name there.
	string userName;
	
	//make a while loop until user input 'quit' to exit/end the program
	while(true) {
		//get the user input for string.
		cout << "Input: ";
		getline(cin, userName);
		
		if(strcmp(userName, myName) != 0) {
			cout<<endl<<"Hey" << myName << "!"<<endl;
		}
		
		else if(strcmp(userName, "quit") != 0) {
			cout<< endl << "Press any key to exit";
			break;
		}
		
		else {
			cout<<endl<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}


