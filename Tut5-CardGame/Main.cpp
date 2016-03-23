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



	cout << "shuffle card outcome" << endl;
	dmkr->shuffle();
	dmkr->display();
	cout << endl;
	cout << "The number of cards in deck: " << endl;
	cout<< dmkr->numberOfCards() << endl;

	cout << "_________________________________________________________________________________" << endl;

	//c.testing functionality
	Card cardobj1(5, "Black");
	cout << "You have chosen ";
	cout << cardobj1.number() << " of " << cardobj1.colour() << " 's" << " this means your :" << endl;
	cardobj1.print();
	cout << endl;
