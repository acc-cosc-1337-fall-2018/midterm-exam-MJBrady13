//Don't forget includes!!!!!
#include"animal.h"
#include"cat.h"
#include"dog.h"
#include<iostream>

using namespace std;


/*
POINTS FOR THIS QUESTION: 30

Create an instance of an Animal class and call the make_sound function.
Create an instance of an Dog class and call the make_sound function.
Create an instance of an Cat class and call the make_sound function.

Create an Animal reference to the dog instance and call the make_sound function.
*/
int main() 
{
	Animal animal;
	Dog dog;
	Cat cat;

	animal.make_sound();
	dog.make_sound();
	cat.make_sound();

	Animal& animal_d = dog;
	animal_d.make_sound();
	return 0;
}
