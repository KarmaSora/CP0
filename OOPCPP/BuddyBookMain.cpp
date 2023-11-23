#include "BuddyBook.h"
#include<iostream>

using namespace std;



int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	BuddyBook book(2);
	book.addBuddy("Lisa", 32, 167.f);
	book.addBuddy("Bo", 33, 17.5f);
	book.addBuddy("Sven", 8, 190.f);
	book.addBuddy("Fia", 8, 190.f);

	BuddyBook otherBook = book; //skapa en ny buddyBook som är identisk med book, anrop av copy constructor
	// alt: 
	// BuddyBook otherBook(book);		//skapa en ny buddyBook som är identisk med book, anrop av copy constructor

	otherBook.addBuddy("Rune", 55, 156.6f);

	book = otherBook;  // här anropeas tilldelning operator,  operator=()


	book.ShowAllBuddies();
	book.removeBuddy("Bo", 33, 17.5f);
	cout << "___________________KKKKKKKKKKKKKKKK______________"<<endl;
	book.ShowAllBuddies();

	return 0;
}