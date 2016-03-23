#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
using namespace std;
#include <ctime>

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



// displays the deck of cards
void DeckOfCards::display(){

	for (int i = 0; i < TotCardAmt; i++){
		cardSet[i].print();
		cout << endl;
	}
}



// resets the deck of cards
DeckOfCards DeckOfCards::reset(){ return DeckOfCards(); }
//end reset

//picks two random cards and switches their order repeats this 50 times 
void DeckOfCards::shuffle() {
	srand(time(NULL));
	// variable to swop
	Card tempvar;
	if (TotCardAmt >= 2){


		int randA, randB;
		for (int i = 0; i < 50; i++){

			randA = rand() % TotCardAmt;
			randB = rand() % TotCardAmt;


			// swap with different index
			if (randA != randB) {

				tempvar = cardSet[randA];
				cardSet[randA] = cardSet[randB];
				cardSet[randB] = tempvar;
			}
		}
	}
	else{
		cout << "Too little to shuffle" << endl;
	}

}
// end shuffle


// draws a card
Card DeckOfCards::draw(){
	// displays card

	if (TotCardAmt != 0) {
		cardSet[TotCardAmt - 1].print();
		//Decrement card count
		TotCardAmt -= 1;
		//shows you the card drawn
		return cardSet[TotCardAmt];
		// pulls card from the  deck
		delete &cardSet[TotCardAmt];
	}

	else{
		cout << " There are no more cards to draw" << endl;
	}
}

//lets you peek at the card at the top of the deck without removing it 
Card DeckOfCards::peek(){
	cardSet[TotCardAmt - 1].print();
	return cardSet[TotCardAmt - 1];
}

// returns the number of cards in the deck
int DeckOfCards::numberOfCards(){ return TotCardAmt; }
