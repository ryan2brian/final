
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Bring back the language changes that we used in our header file
void print(string printThis)
{
	cout << printThis << endl;
}
//replacing cin  with hear 
std::string hear(std::string PromptUser)
{
	string userInput = "";
	cout << PromptUser << endl;
	cin >> userInput;
	return userInput;
}