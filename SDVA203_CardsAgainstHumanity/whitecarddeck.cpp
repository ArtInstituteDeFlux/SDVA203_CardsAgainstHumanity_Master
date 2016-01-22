#include "whitecarddeck.h"


WhiteCardDeck::WhiteCardDeck() {
	//whiteCardDeck = new WhiteCard[white];
}


WhiteCardDeck::~WhiteCardDeck() {

}

int WhiteCardDeck::getNumberOfCards() {
	return numberOfCards;
}

void WhiteCardDeck::readFile(string fileName) {
	
	//class variables declared in the header
	lines				= nullptr;
	numberOfCards		= 0;

	string line			= "";
	int index			= 0;
	
	try {
		ifstream inputFile(fileName, ios::in);
		if (inputFile.is_open()) {

			// count the number of text lines
			while (!inputFile.eof()) {
				getline(inputFile, line);
				numberOfCards++;
			}
			inputFile.close();

			// Read the lines
			lines = new string[numberOfCards];

			inputFile.open(fileName, ios::in);

			while (!inputFile.eof()) {
				getline(inputFile, line);
				lines[index] = line;
				index++;

			}
			inputFile.close();
		}
		else {
			cout << "WhiteCardDeck::readFile(): " << fileName << " not found" << endl;
			exit(0);
		}
	}
	catch (exception const& e) {
		cout << "WhiteCardDeck::readFile(): " << fileName << " not found" << endl;
		exit(0);
	}
}

void WhiteCardDeck::shuffle() {
	if (numberOfCards > 0) {

		whiteCardDeck = new WhiteCard*[numberOfCards];
		int cardNumber = 0;
		bool unique = false;

		cardsLeft = 0;

		//Create and initialize the checklist parallel array
		int *checkList = new int[numberOfCards];

		for (int card = 0; card < numberOfCards; card++) {
			checkList[card] = 0;
		}

		//Randomly shuffle

	}
	else {
		cout << "WhiteCardDesk::shuffle(): no cards to shuffle." << endl;
		exit(0);
	}
}