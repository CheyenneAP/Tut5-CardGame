#include <iostream> 
#include <string> 
#include <cmath> 
#include <ctime> 

#include "Card.h" 
#include "DeckOfCards.h" 
using namespace std;


int main(){

	//a. creat an object of cards
	Card cardobj;

	//b. create an object of deck of cards
	DeckOfCards *dmkr = new DeckOfCards();

	//displaying the deck of cards
	cout << "cards in deck order are:" << endl;
	dmkr->display();

	cout << "________________________________________________________________________________" << endl;