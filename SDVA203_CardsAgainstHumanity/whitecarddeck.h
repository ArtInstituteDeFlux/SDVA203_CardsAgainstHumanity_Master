#pragma once

#include "constants.h"
#include "whitecard.h"
#include <fstream>
#include <iostream>

class WhiteCardDeck {

	private:
		WhiteCard	**whiteCardDeck;
		string		*cards;
		int			numberOfCards;
		int			cardsLeft;

		string* readFile(string fileName);

	public:
		WhiteCardDeck();
		~WhiteCardDeck();

		int getNumberOfCards();
};

