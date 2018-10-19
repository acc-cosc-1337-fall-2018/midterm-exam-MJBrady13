#ifndef CAT_H
#define CAT_H

#include"animal.h"
/*
Create a cat class with a void make_sound() const function that inherits from animal.
The make_sound function displays Meow to screen.
*/
class Cat : public Animal
{
public:
	void make_sound()const;
private:

};


#endif // !CAT_H
