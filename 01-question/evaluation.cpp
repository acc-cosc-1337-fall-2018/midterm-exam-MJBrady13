#include "evaluation.h"
#include<string>
#include <iostream>

using namespace std;

//SAMPLE FUNCTION code
int sum_numbers(int num1, int num2) 
{
	return num1 + num2;
}





/*
POINTS FOR THIS QUESTION: 10

The following table describes how a Faculty rating is calculated

Response       |	Response Count | CalculatePercentage |	Percentage
------------------------------------------------------------------------
Always(alw)	                   188	    188 / 200 * 100           94
Very Often(voft)	             8	     8 / 200  * 100            4
Often(oft)	                     4	     4 / 200  * 100            2
========================================================================

Student Evaluation |    Rating Cutoff
------------------------------------------------------------------------
Excellent          |    Always + Very Often >= 90%
Good               |    Always + Very Often >= 80%
Needs Improvement  |    Lesser Combinations
=========================================================================
The rating for this table is Excellent because Always 95.4 + Very Often >= 90.


Create a function named faculty_evaluation that accepts an int parameter named responses,
int alw, int voft, int oft (see table for mapping to text Response),
and a reference string parameter named result that will hold the student evaluation result. 

1) Don't forget to go to test_cases.cpp in the test-cases folder to create the test cases
for this question!
2) Go to main.cpp to write code to call this function.

*/

void faculty_evaluation(int responses, int alw, int voft, int oft, string & result)
{
	double alw_percent = (alw / responses) * 100;
	double voft_percent = voft / responses * 100;
	double oft_percent = oft / responses * 100;
	cout << alw_percent;
	if (alw_percent + voft_percent >= 90)
	{
		result = "Excellent";
	}
	else if(alw_percent + voft_percent >= 80)
	{
		result = "Good";
	}
	else {
		result = "Needs Improvement";
	}
}
