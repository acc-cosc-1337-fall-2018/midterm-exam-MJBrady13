//Don't forget includes!!!!!
#include"evaluation.h"
#include<string>
#include<iostream>

using namespace std;

/*
Call the faculty_evaluation function with 
faculty_valuation parameter arguments as follows:
responses = 200
alw = 188
voft = 8
oft = 4

Output result to screen.
*/
int main() 
{
	string result = " ";
	faculty_evaluation(200, 188, 8, 4, result);
	cout << result;
	return 0;
}
