#ifndef CARD_H
#define CARD_H
#include <iostream>

class Card {
private:
	int value;
	std::string color;
	std::string type;
public:
	Card();
	Card(int value, std::string type, std::string color);
	int getValue() const;
	void setValue(int value);
	std::string getColor() const;
	void setColor(std::string color);
	std::string getType() const;
	void setType(std::string type);
	std::string cardInfo();

};


#endif // !CARD_H
