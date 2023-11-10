#include <iostream>
#include <string>

using namespace std;

void func(float vParam, float &refParam);
void funct2(const string& str);

void funct3(int one, int two = 12); // works

//överlagring - Overloading
float areaCalculation(float radius);
float areaCalculation(float width, float height);




/*
void funct3(int one, int two); // works
void funct3(int one=12, int two ); // fungerar inte. first param must not contain val if sec doesnt
void funct3(int one=12, int two=13 ); // works

*/
int main() 
{

	float numberOne = 1.2f;
	float numberTwo = 10.5f;
	func(numberOne, numberTwo);
	cout<<"nrOne"<< numberOne<< endl
		<< "numberTwo"<< numberTwo<<endl;


	funct3(numberOne); // works
	funct3(numberOne, numberTwo); // works


	return 0;
}

void func(float vParam, float& refParam)
{
	//copies the value
	vParam += 2;
	//becomes an alias to the original value
	refParam += 2;

}

void funct2(const string& str)
{
	cout << str << endl;

	//str = "Allan"; //doesnt work,cant change consts
}

void funct3(int one, int two)
{

}

float areaCalculation(float radius)
{

	return 0.0f;
}

float areaCalculation(float width, float height)
{
	return 0.0f;
}

