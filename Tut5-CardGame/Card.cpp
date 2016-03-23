//Cheyenne Pillay
//214513360
#include <iostream>
#include "Card.h"

//default constructor
Card::Card(){

}

//default destructor
Card::~Card()
{
	numbr = 0;
	color = "NULL";
}

// returns the card colour as a string 
string Card::colour(){
	return color;
}

//returns the card number as an integer value 
int Card::number(){
	return numbr;
}

// print method displays the card color and number.
void Card::print(){
	cout << "The colour of the card is: " << color << endl;
	cout << "The number of the card is : " << numbr << endl;
}