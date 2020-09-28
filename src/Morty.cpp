/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"
using namespace std;
using namespace C137;
using namespace Z286;
using namespace interdimensional;

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 



void C137::Morty(int start, int stop, int step) {
    cout << "Morty C137 says:" << endl;
    for (int i = start; i <= stop; i = i + step) {
        if (i % 15 == 0) { cout << i << ": Aww Geez Man" << endl; }
        else if (i % 5 == 0) { cout << i << ": Geez" << endl; }
        else if (i % 3 == 0) { cout << i << ": Aww" << endl; }
        else cout << i << ": " << endl;
    }
}
void C137::Morty(int start, int stop) {
   C137::Morty(start, stop, 1);
}
// =========================================================================== // 



// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 


void Z286::Morty(int start, int stop, int step) {
    cout << "Morty Z286 says:" << endl;
    for (int i = start; i <= stop; i = i + step) {
        if (i % 15 == 0) { cout << i << ": naM zeeG wwA" << endl; }
        else if (i % 5 == 0) { cout << i << ": zeeG" << endl; }
        else if (i % 3 == 0) { cout << i << ": wwA" << endl; }
        else cout << i << ": " << endl;
    }
}
void Z286::Morty(int start, int stop) {
    Z286::Morty(start, stop, 1);
}
     
    

// =========================================================================== // 

args interdimensional::parseArgs(int c, char** v) {
    args variable;
    variable.start = atoi(*(v + 1));
    variable.stop = atoi(*(v + 2));
    if (c == 5) {
        variable.step = atoi(*(v + 3));
    }
    if (atoi(*(v + c - 1)) == 0) {
        variable.dim = C137;
    }
    else if (atoi(*(v + c - 1))== 1) {
        variable.dim = Z286;
    }
    else {
        variable.dim = UNKNOWN;
    }
    
}
