#include "Card.h"
#include <iostream>
#include <random>
#include <fstream>


Card* CreateDeck() {
	Card *deckPtr = new Card[52];

	std::string elements[4] = { "Spades","Hearts", "Diamond","Clover" };

	int index = 0;
	for (int i = 0; i < 13; i++) {
		int value = (i % 13) + 1; // Ensures values range from 1 to 13
		for (std::string &element : elements) {
			deckPtr[index].setValue(value);
			if (element == "Hearts" || element == "Diamond"){
				deckPtr[index].setColor("Red");
			}
			else{
				deckPtr[index].setColor("Black");
			}
			deckPtr[index].setType(element);
			index++;
		}

	}
	return deckPtr;

}

int CalculateCardSum(Card *currentDeck, int start, int end) {
	int totVal = 0;
	for (int i = start; i < end; i++) {
		std::cout << currentDeck[i].cardInfo();
		  totVal+=currentDeck[i].getValue();
	}
	return totVal;
}

// Function to draw 5 random cards from the deck
Card* DrawHand(Card* deck) {
	std::random_device rd; // Non-deterministic random number generator
	std::mt19937 g(rd()); // Seed the generator

	// Shuffle the deck
	std::shuffle(deck, deck + 52, g);

	Card* hand = new Card[5]; // Allocate memory for 5 cards
	for (int i = 0; i < 5; ++i) {
		hand[i] = deck[i]; // Assign the first 5 cards from the shuffled deck
	}

	return hand; // Return the hand
}
int main() {

	Card ace;
	ace.cardInfo();
	Card first(13, "Diamonds", "Red");
	Card sec(13, "Hearts", "Red");
	Card third(13, "Clover", "Black");

	if (first.getColor() == sec.getColor())
	std::cout << "the two share color" << std::endl;
	else
		std::cout << "the colors are different" << std::endl;

	if (sec.getColor() == third.getColor())
		std::cout << "the two share color"<<std::endl;
	else
		std::cout << "the colors are different" << std::endl;

	Card* EntireDeck = CreateDeck();
	//Card EntireDeck[52]{};
		//std::shuffle(0,52,EntireDeck);
	std::cout << "AfterShuffle............." << std::endl;
	
	std::ofstream file;
	file.open("cardDeck.txt");
	if(file.is_open()){
		for (int i = 0; i < 52; i++) {
			file << EntireDeck[i].cardInfo();
			//std::cout<<EntireDeck[i].cardInfo();
		}	
		file.close();
	}
	

	std::cout << "here"<<std::endl;
	std::random_shuffle(EntireDeck, EntireDeck + 52);
	std::cout << CalculateCardSum( EntireDeck, 5, 10);

	delete[] EntireDeck;

	return 0;
}	