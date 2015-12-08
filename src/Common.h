/*
    Common.h
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
 
#ifndef COMMON_H
#define COMMON_H
 
#define NUMBER_OF_SUITS 4
#define MAX_SUIT_SIZE 13
#define MAX_DECK_SIZE 52
#define MIN_NUM_PLAYERS 2
#define MAX_PLAYER_HAND_SIZE 5

// ♥=\u2665; ♣=\u2663; ♦=\u2666; ♠=\u2660; 
enum suit{ hearts = 0, clubs, diamonds, spades };
enum rank{ two = 2, three, four, five, six, seven, eight,
            nine, ten, jack, queen, king, ace };
enum handType{ noPairs = 10, onePair, twoPairs, threeOfAKind, straight,
               regFlush, fullHouse, fourOfAKind, straightFlush, royalFlush };
 
 #endif
