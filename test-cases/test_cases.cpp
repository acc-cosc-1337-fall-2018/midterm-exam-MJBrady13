#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "evaluation.h"
#include "factorial.h"
#include "dive_log.h"
#include<string>
#include<iostream>

using namespace std;

/*
DON'T ADD OR MODIFY THIS TEST CASE
IT'S SIMPLY TO TEST PROJECT TEST CASE CONFIGURATION
*/
TEST_CASE("Test project configuration") 
{
	REQUIRE(sum_numbers(2, 2) == 4);
	REQUIRE(multiply_numbers(3, 3) == 9);
}

/*
Write a test case with faculty_valuation parameter arguments as follows:
responses = 200
alw = 188
voft = 8
oft = 4

The reference string parameter result should have a string value of Excellent.
InvoiceDetail inv(10, 10);
	REQUIRE(inv.get_extended_cost() == 100);
*/
TEST_CASE("Question 1: Evaluation test cases") 
{
	string result = " ";
	faculty_evaluation(200, 188, 8, 4, result);
	REQUIRE(result == "Excellent");
}

/*
Write two test cases for the factorial function with values 3 and 5.
factorial(3) should result in   6 
factorial(5) should result in 120
*/
TEST_CASE("Question 2: Factorial function test") 
{
	REQUIRE(factorial(3) == 6);
}

TEST_CASE("Question 2: Factorial function test")
{
	REQUIRE(factorial(5) == 120);
}
/*
Create a test case for Dive class.
The Dive class data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

The function get_sacr should return 25

*/
TEST_CASE("Question 3: Dive class test cases") 
{
	Dive dive;
	dive.d = 55;
	dive.s = 3000;
	dive.f = 1000;
	dive.t = 30;
	REQUIRE(dive.get_sacr() == 25);
}

/*
Create a test case for the DiveLog class.
Add three dive classes to the DiveLog class:
The Dive class 1 data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30
The function get_sacr should return 25--NOT NEED FOR TEST VERIFY

The Dive class 2 data member are:
d = depth in feet = 67
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30
The function get_sacr should return 22--NO NEED FOR TEST VERIFY

The Dive class 3 data member are:
d = depth in feet = 67
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30
The function get_sacr should return 22--NO NEED FOR TEST VERIFY

The DiveLog get_avg_sacr should return 23---CREATE A TEST CASE FOR THIS ONE

*/
TEST_CASE("Question 4: DiveLog test case") 
{
	DiveLog dive_log;
	Dive dive1;
	dive1.d = 55;
	dive1.s = 3000;
	dive1.f = 1000;
	dive1.t = 30;
	Dive dive2;
	dive2.d = 67;
	dive2.s = 3000;
	dive2.f = 1000;
	dive2.t = 30;
	Dive dive3;
	dive3.d = 67;
	dive3.s = 3000;
	dive3.f = 1000;
	dive3.t = 30;
	dive_log.add_dive(dive1);
	dive_log.add_dive(dive2);
	dive_log.add_dive(dive3);
	REQUIRE(dive_log.get_avg_sacr() == 23);
}

//THERE ARE NO TEST CASES FOR QUESTION 5

