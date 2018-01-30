//compare two strings
//complete the program below. 

#include <iostream>
#include <string>

int main() {
	string myName="Hafiz";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program
	while(true) {
		string userName;
		//get the user input for string.
		cout << "Input: ";
		getline(cin, userName);
		
		if(strcmp(userName, "Abu") != 0) {
			cout<<endl<<"Hey Abu!"<<endl;
		}
		
		else if(strcmp(userName, "quit") != 0) {
			cout<<endl;
			break;
		}
		
		else {
			cout<<endl<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}


