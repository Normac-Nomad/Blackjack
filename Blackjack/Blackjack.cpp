#include "Blackjack.h" 
#include "Card.h"

int main()
{  
    std::string suit = "Hearts"; 
    std::string rank = "2";

    std::unique_ptr<Card> playerCard = std::make_unique<Card>(suit, rank);

    std::cout << playerCard->getCard();
}