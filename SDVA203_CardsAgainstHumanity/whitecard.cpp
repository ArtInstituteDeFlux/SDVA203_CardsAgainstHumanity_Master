#include "whitecard.h"

WhiteCard::WhiteCard(string answer) {
	this->answer = answer;
}


WhiteCard::~WhiteCard() {

}

string WhiteCard::getAnswer() {
	return answer;
}