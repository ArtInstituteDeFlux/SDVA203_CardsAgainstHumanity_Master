#pragma once

#include "constants.h"
#include "whitecard.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>		//srand, rand
#include <time.h>	//time

class WhiteCardDeck {

	private:
		WhiteCard	**whiteCardDeck;
		string		*lines;
		int			numberOfCards;
		int			cardsLeft;

		void readFile(string fileName);
		void shuffle();

	public:
		WhiteCardDeck();
		~WhiteCardDeck();

		int getNumberOfCards();
};

