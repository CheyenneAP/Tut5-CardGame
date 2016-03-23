#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
using namespace std;


// initialise the deck of cards in the contructor
DeckOfCards::DeckOfCards(){

	int i, fillfirst10, counter = 0;

	cardSet = new Card[20];

	for (fillfirst10 = 1; fillfirst10 < 3; fillfirst10++){
		for (i = 1; i < 11; i++){
			//if this variable is true then fill the first 10 cards with attributes 
			if (fillfirst10 == 1)
				cardSet[counter] = Card(i, "Red");

			//else if its false then fill the second 10 cards with their specific attributes 
			else
				cardSet[counter] = Card(i, "Black");

			// increment compartment counter 
			counter++;
		}
	}
}

//destructor
DeckOfCards::~DeckOfCards(){ cardSet = 0; }