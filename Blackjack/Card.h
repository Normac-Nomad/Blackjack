#pragma once 
#include "Blackjack.h" 

class Card {

	std::string suit;
	std::string rank;

public:
	
	Card(std::string& suit,std::string& rank);
	
	~Card(); 

	/*
	Name: getCard
	Location: Card.h
	Purpose: Gets the card's suit and rank
	Parameters: N/a
	Return: Card suit and rank
	*/
	std::string getCard() const;

};