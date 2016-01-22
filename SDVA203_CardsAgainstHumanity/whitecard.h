#pragma once

#include <string>
using namespace std;

class WhiteCard {

	private:
		string answer;

	public:
		WhiteCard(string answer);
		~WhiteCard();
		string getAnswer();
};

