#pragma once
#include "Card.h"
class DeckOfCards{

private:

	int TotCardAmt = 20;
	Card *cardSet;

public:
	DeckOfCards();
	~DeckOfCards();
	void display();
	DeckOfCards reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
};