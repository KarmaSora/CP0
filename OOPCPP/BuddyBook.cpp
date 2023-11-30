#include "BuddyBook.h"
#include <iostream>
BuddyBook::BuddyBook(int capacity)

 // :currentNrOfBuddies(0), capacity(capacity), buddies(new Buddy* [this->capacity] {nullptr})
{

	//alt:   
	this->currentNrOfBuddies = 0;
	this->capacity = capacity; 
	this->buddies = new Buddy * [this->capacity] {nullptr};
}

BuddyBook::BuddyBook(BuddyBook& other)
{
	this->capacity = other.capacity;
	this->currentNrOfBuddies = other.currentNrOfBuddies;
	//this->buddies = other.buddies; //ytlig kopiering, pekar på samma array, INTE OK !!!!
	this->buddies = new Buddy * [this->capacity] {nullptr}; // djup kopiering avseende arrayen, skapar en egen 

	for (int i = 0; i < other.currentNrOfBuddies; i++) { // kan använda this.currentNrOfBuddies, då de har samma värde

		//this->buddies[i] = other.buddies[i]; // ytlig koppiering, pekar på samma objekt,  INTE OK!!
		this->buddies[i] = new Buddy(*other.buddies[i]); //djup kopiering, använder copy constructor i Buddy klassen.
	}
}

void BuddyBook::operator=(const BuddyBook& other)
{
	if(this != &other){ //self check, om "min/this" adress inte är samma som adressen till other 
		//this  ger adressen till objectet    och det jämförs med adressen till other

		for (int i = 0; i < this->currentNrOfBuddies; i++) {
			delete this->buddies[i]; //avallokerar objekten
		}
		delete[] this->buddies; //avallokerar arrayen

		//kopierar innehållet från other med djupkopiering

		this->capacity = other.capacity;
		this->currentNrOfBuddies = other.currentNrOfBuddies;
		//this->buddies = other.buddies; //ytlig kopiering, pekar på samma array, INTE OK !!!!
		this->buddies = new Buddy * [this->capacity] {nullptr}; // djup kopiering avseende arrayen, skapar en egen 

		for (int i = 0; i < other.currentNrOfBuddies; i++) { // kan använda this.currentNrOfBuddies, då de har samma värde

			//this->buddies[i] = other.buddies[i]; // ytlig koppiering, pekar på samma objekt,  INTE OK!!
			this->buddies[i] = new Buddy(*other.buddies[i]); //djup kopiering, använder copy constructor i Buddy klassen.
		}
	}

}

void BuddyBook::addBuddy(const string& name, int age, float height)
{
	if (this->capacity == this->currentNrOfBuddies)
	{
		//expandera
		// öka kapacitetvariabeln med ex-vis 2 (normal sett med mer)
		this->capacity += 2;
		// allokera en array som är större
		Buddy** temp = new Buddy * [this->capacity] {nullptr};
		// iterera över orginalarrayen och kopiera adresserna (kallas ytlig kopiering)
		for (int i = 0; i < this->currentNrOfBuddies; i++)
		{
			temp[i] = this->buddies[i]; // kopierar adressen!
		}
		//frigöra minnet som this->buddies pekar på, dvs den dynamiskt allokerade arrayen
		delete[] this->buddies;
		// kopiera adressen i temp till this->buddies
		this->buddies = temp;
	}
	this->buddies[this->currentNrOfBuddies] = new Buddy(name, age, height);
	this->currentNrOfBuddies++;

}

BuddyBook::~BuddyBook()
{
	//avallokera allt dynamiskt minne

	for (int i = 0; i < this->currentNrOfBuddies; i++) {
		delete this->buddies[i]; //avallokerar objekten
	}
	delete[] this->buddies; //avallokerar arrayen
	
}

void BuddyBook::ShowAllBuddies() const
{
	for (int i = 0; i < this->currentNrOfBuddies; i++) {
		cout<< this->buddies[i]->toString() <<endl;
	}
}

bool BuddyBook::removeBuddy(const string& name, int age, float height)
{
	bool removedStatus = false;

	Buddy toFind(name, age, height); //Används för att jämföra med == operator

	for (int i = 0; i < this->currentNrOfBuddies && !removedStatus;  i++) {
		if (toFind == *this->buddies[i] ){ //medför dereferering, dvs "Till objektet"
			delete this->buddies[i];
			this->buddies[i]= this->buddies[this->currentNrOfBuddies -1];
			this->buddies[this->currentNrOfBuddies - 1] = nullptr;
			this->currentNrOfBuddies--;
			removedStatus = true;
		}
	}

	return removedStatus;
}
