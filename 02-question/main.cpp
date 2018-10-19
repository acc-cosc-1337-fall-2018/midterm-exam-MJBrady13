//Don't forget includes!!!!!
#include "factorial.h"
#include<string>
#include<iostream>

using namespace std;

/*
Create a loop that continues until user wants to exit.
In the loop, prompt user for an integer, call the factorial function with
the user given integer as a function argument, output result to screen.

*/
int main() 
{
	string keep_going = "y";
	int num = 0;
	while (keep_going == "y")
	{
		cout << "enter an integer: " << endl;
		cin >> num;
		cout<<factorial(num)<<endl;
		cout << "keep going? ";
		cin >> keep_going;
	}
	return 0;
}
