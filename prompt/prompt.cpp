// prompt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

// need access to windows specific function, see below for details
#ifdef _WIN32
#include <conio.h>
#endif

using namespace std;

int main(int argc, char* argv[])
{
    while(true){
        cout << "Feed me by typing something and press Enter. Enter 'quit' to quit." << endl;

        string input;
        getline(cin, input); //use getline instead of 'cin >> input' to get the full line.

        cout << "Got :'" << input << "'" << endl;

        // TODO: add some useful processing

        // stop the loop if user "mentions" quit
        if(input.find("quit") != std::string::npos) {
            break;
        }
    }

        
    cout << "Done! Press any key to exit." << endl;
    
    // apparently, working with console is not standard, use a 
    // windows specific function (in this case)  
#ifdef _WIN32
    _getch();
#endif

	return 0;
}

