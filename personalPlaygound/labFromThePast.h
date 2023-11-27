#ifndef LABFROMTHEPAST_H
#define LABFROMTHEPAST_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void add(int &x,int y);

bool readStringsFromFile(string filename, string arr[], int nrOf);
int getIndex(string all[],int nrOf, string toFind);


#endif // !LABFROMTHEPAST_H
