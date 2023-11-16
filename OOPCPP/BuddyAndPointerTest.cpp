#include <iostream>
#include <string>
#include "Buddy.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	/* // trail 1
	Buddy aBuddy; //hamnar på stacken
	Buddy buddies[2]; // saved on the stack..as buddies[0] and buddies[1], using defult constructor
	
	Buddy* ptrToBuddy = nullptr; //variabel på stacken, till variabel som pekar på något som oftast(inte alltid) ligger i heap

	ptrToBuddy = new Buddy("Bo", 67, 167.4f); //konstructor executas och bygger buddy object på heapen adressen sparas i variabeln


	buddies[0].setName("Lisa");
	cout << buddies[0].toString() <<endl ;

	ptrToBuddy->setName("Bossie");
	cout << ptrToBuddy->toString() << endl;


	//Exekverar destructor för det objek som ptrToBuddy har adressen till

	delete ptrToBuddy;
	*/

	/*
	// trail 2
	Buddy* ptrToArrayOfBuddies = nullptr;


	//pointer ligger i STACK peckar på objekt lista på HEAP
	ptrToArrayOfBuddies = new Buddy[3]; //Dynamic allocated array...

	ptrToArrayOfBuddies[2].setName("Bert");
	ptrToArrayOfBuddies[1].setName("Faye");
	ptrToArrayOfBuddies[0].setName("Ross");

	for (int i = 0; i < 3; i++) {
		cout << ptrToArrayOfBuddies[i].toString() << "\n\n";
	}

	Buddy* arrayWithBuddiePtr[4]{};//{} är samma som nullpointer samma som  {nullpointer}

	Buddy* ptrToBuddy = nullptr;

	arrayWithBuddiePtr[0] = new Buddy("Sven", 48, 150.5f); //pekar på HEAP på objektet "sven"... Only exist on Heap, no stack 

	ptrToBuddy = arrayWithBuddiePtr[0]; //ptrToBuddy pekar nu på buddy objekt "sven". 
	ptrToBuddy->setName("Svenne");
	ptrToBuddy =nullptr;

	arrayWithBuddiePtr[1] = new Buddy();
	arrayWithBuddiePtr[2] = new Buddy();

	for (int i = 0; i < 3; i++) {
		delete arrayWithBuddiePtr[i];
	}

	delete[]ptrToArrayOfBuddies;

	*/


	Buddy** ptrsToArrayOfBuddyPtrs = nullptr;

	int capacity = 3; // denna skulle kunna användas för user input

	//allocate an array on the HEAP with capacity number Buddy-pointers

	ptrsToArrayOfBuddyPtrs = new Buddy * [capacity] {nullptr};

	ptrsToArrayOfBuddyPtrs[0]= new Buddy("Svenne", 48, 167.9f);

	ptrsToArrayOfBuddyPtrs[1] = new Buddy("Lisa", 34, 154.6f);

	for (int i = 0; i < 2; i++) {

		cout<<ptrsToArrayOfBuddyPtrs[i]->toString()<<endl;

		//av allocera minnet
		delete ptrsToArrayOfBuddyPtrs[i];
	}
	delete[] ptrsToArrayOfBuddyPtrs;

	;


	return 0;
}