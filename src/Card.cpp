#include "Card.h"

Card::Card(eSuit s, eRank r) : suit(s), rank(r) {}

eSuit Card::getSuit() { return suit; }

eRank Card::getRank() { return rank; }

std::ostream& operator<<(std::ostream &os, Card &aCard)
{
    const std::string suits[NUMBER_OF_SUITS] = { "\u2665", "\u2663", "\u2666", "\u2660" };
	const std::string ranks[MAX_SUIT_SIZE] = { " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10", " J", " Q", " K", " A" };
	os << ranks[int(aCard.getRank()) - 2] << suits[aCard.getSuit()] << " ";
	return os;
}
