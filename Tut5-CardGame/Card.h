#pragma once
#include <iostream>
#include <string>
using namespace std;

class Card{
private:
	int numbr;
	string color;

public:
	Card(int,string);
	~Card();
	string colour();
	int number();
	void print();
};

