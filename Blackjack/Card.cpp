#include "Card.h"
 
Card::Card(std::string& suit, std::string& rank) 
	: suit(suit), rank(rank) {}

Card::~Card() {} 

std::string Card::getCard() const 
{
	return (rank + " of " + suit);
}
