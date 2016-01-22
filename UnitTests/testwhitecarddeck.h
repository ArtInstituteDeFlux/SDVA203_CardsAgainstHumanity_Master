#pragma once

#include "whitecarddeck.h"

class TestWhiteCardDeck
{

	private:
		WhiteCardDeck *whiteCardDeck;
		

	public:
		TestWhiteCardDeck();
		~TestWhiteCardDeck();
		
		WhiteCard** getCardDeck();
};

