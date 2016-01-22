#include "whitecarddeck.h"


WhiteCardDeck::WhiteCardDeck() {
	//whiteCardDeck = new WhiteCard[white];
}


WhiteCardDeck::~WhiteCardDeck() {

}

int WhiteCardDeck::getNumberOfCards() {
	return numberOfCards;
}

string* WhiteCardDeck::readFile(string fileName) {
	
	string *lines		= nullptr;
	string line			= "";
	int lineCount		= 0;
	int index			= 0;
	
	try {
		ifstream inputFile(fileName, ios::in);
		if (inputFile.is_open()) {

			// count the number of text lines
			while (!inputFile.eof()) 
			{
				getline(inputFile, line);
				lineCount++;
			}
			inputFile.close();

			// Read the lines
			lines = new string[lineCount];

			inputFile.open(fileName, ios::in);

			while (!inputFile.eof()); 
			{
				getline(inputFile, line);
				lines[index] = line;
				index++;

			}
			inputFile.close();
		}
	}
	catch (exception const& e) {
		cout << "WhiteCardDeck::readFile(): " << fileName << " not found" << endl;
	}
}