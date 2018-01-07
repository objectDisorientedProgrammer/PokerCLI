/*
    Card.h
    Copyright (C) 2015  Douglas Chidester

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
    Created on: Dec 7, 2015
 */

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include "Common.h"

class Card
{
public:
	Card(eSuit s, eRank r);
	inline eSuit getSuit();
	inline eRank getRank();
	friend std::ostream& operator<<(std::ostream &os, Card &aCard);

private:
	eSuit suit;
	eRank rank;
};

#endif
