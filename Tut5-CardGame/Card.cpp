//Cheyenne Pillay
//214513360
#include <iostream>
#include "Card.h"
#include <string>
using namespace std;


// default constructor
Card::Card(){}


// overloading 
// a.each card has a number between one and 10  and a colour of either red or black,
Card::Card(int inum, string icol){

	// check boundary condition for numbers entered 
	if (inum >= 1 && inum <= 10){
		numbr = inum;
	}
	else{
		cout << "Numbers range between 1 and 10" << endl;
		cout << "You have entered an invalid number." << endl;
	}

	// check that the conditions for colour is only red or black
	if (icol.compare("Red") == 0 || icol.compare("Black") == 0){
		color = icol;
	}
	else{
		cout << "You have entered an invalid colour." << endl;
	}
}
//end


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
	cout << " Card Colour:" << color << "\t\t\t\t Card Number: " << numbr << endl;
}