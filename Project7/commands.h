#pragma once
#include <string>
//What we are doing here is changing cout to print, so everytime we type print before we want to print something out to the user, print replaces cout. 
void print(std::string printThis);
//Replaces cin 
std::string hear(std::string promptUser);