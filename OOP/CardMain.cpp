#include "Card.h"


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


	Card* cardPtr = CreateDeck();
	for (int i = 0; i < 52; i++) {
		cardPtr[i].cardInfo();
	}
	delete[] cardPtr;




	return 0;
}