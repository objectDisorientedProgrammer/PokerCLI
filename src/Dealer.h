/*
    Dealer.h
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

#ifndef DEALER_H
#define DEALER_H

#include <string>
#include "Person.h"

using std::string;

class Dealer : public Person
{
public:
    Dealer() { Person(); }
	Dealer(string dealerName) { name = dealerName; }
    ~Dealer() {}

    void startGame() {}

private:

};
#endif
