#ifndef DOG_H
#define DOG_H
#include"animal.h"
/*
Create a dog class with a void make_sound() const function that inherits from animal.
The make_sound function displays Arff to screen.
*/
class Dog : public Animal
{
public:
	void make_sound()const;
private:
};

#endif // !DOG_H
