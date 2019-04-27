// Timer Project.cpp : Defines the entry point for the console application.
//
//Setting up the functions that we will be using in the program
#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <string>
//Using the Standerd Libary 
using namespace std;
//Start of the main function 
int main()
{
	//This will store the Name of the user to reference through out the program 
	string Username;
	//This	point will be stored, so it can be called when I call for the pointer 
	string * PUsername = &Username;
	Username = hear("Enter Your Name: ");


	//Prompting User at the start of the program 
	print("Hello " + Username);
	print("And Welcome to GET OFF YOUR ASS, AND WALK AROUND TIMER!!\n");
	//Giving Discription of how the program works 
	print("This program is set to a 15 minute timer, and once the time is up,");
	print("Get Up and start dancing!!");
	print("Then Oonce the code stop repeat the procces because the party never stops!");

	//Text to tell the user who uses this program that the clock has started 
	print("The timmer starts Now!\n");
	//Here we are using the variable Chrono to keep the time, and what the line below does is doing 
	// is subtractring the end time so in the case, the time after X amount of minutes and the time that it is now
	std::chrono::steady_clock::time_point tend = std::chrono::steady_clock::now()
		+ std::chrono::minutes(1);
	//Starting a while loop while the timmer is running 
	while (std::chrono::steady_clock::now() < tend)
	{

	}



	//Text that appears on program once the timer runs out using the pointer I set above at the top of the program  
	print("Times Up" + *PUsername);
	print("Now, GET OFF YOUR ASS AND Dance!!");

	//pauses program so it doesn't autimatcilly open 
	system("pause");
	return 0;
}