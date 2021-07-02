#pragma once
#include <string>
#include <map>
using namespace std;

enum DeckCardColor {
	BLACK = 0,
	RED = 1
};

enum DeckCardType {
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
};

class DeckCard {
	private:
		DeckCardColor cardColor;
		DeckCardType deckCardType;
		string name;
		map<DeckCardType, DeckCardColor> cardColorTypeMap{ {DeckCardType::CLUBS, DeckCardColor::BLACK}, {DeckCardType::DIAMONDS, DeckCardColor::RED}, {DeckCardType::HEARTS, DeckCardColor::RED}, {DeckCardType::SPADES, DeckCardColor::BLACK} };

	public:
		DeckCard(DeckCardType deckCardType, string name) : deckCardType(deckCardType), name(name), cardColor(cardColorTypeMap[deckCardType]) {

		}
		DeckCardColor getCardColor() const {
			return this->cardColor;
		}
		DeckCardType getCardType() const {
			return this->deckCardType;
		}
		string getName() const {
			return this->name;
		}
};

class PlayingDeck {
	public:
		static int const deckSize = 52;
		DeckCard* deck;
		PlayingDeck () {
			//deck init
		}
		~PlayingDeck() {
			//deck delete
		}
		void shufle();
		DeckCard nextCard();
};

class Player {
	private:
		string name;
		unsigned int money;

	public:
		Player(string name, unsigned int money) : name(name), money(money) {

		}
		void check();
		void raise();
		void call();
		void fold();
		void openUp();
		void allIn();
};

class BlackJackTable {
	private:
		unsigned int bet;
		PlayingDeck playingDeck;
		void prepareNewRound();

	public:
		void nextRound();
};