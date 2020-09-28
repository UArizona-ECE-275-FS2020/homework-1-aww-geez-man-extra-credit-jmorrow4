/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main (int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}

	int start, stop, step;
	string demension;
	string s1 = "C137";
	string s2 = "Z286";

	if (ac != 4 and ac != 5) {
		cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< endl;
		cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << endl;
		cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << endl;

		return -1;
	}
	if (ac == 4) {
		
	    start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		demension = *(av + ac - 1);

		if (demension.compare(s1) == 0) {
			C137::Morty(start, stop);
		}
		else if (demension.compare(s2) == 0) {
			Z286::Morty(start, stop);
		}
		else {
			cout << "ERROR: Unknown dimension!!" << endl;
		}
	}
	if(ac == 5) {

		start = atoi(*(av + 1));
		stop = atoi(*(av + 2));
		step = atoi(*(av + 3));
		demension = *(av + ac - 1);
	
		if (demension.compare(s1) == 0) {
			C137::Morty(start, stop, step);
		}
		else if (demension.compare(s2) == 0) {
			Z286::Morty(start, stop, step);
		}
		else {
			cout << "ERROR: Unknown dimension!!" << endl;
		}
	}


	
	return 0;
}
