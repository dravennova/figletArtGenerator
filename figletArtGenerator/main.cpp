//
//  main.cpp
//  figletArtGenerator
//
//  Created by Draven Nova on 6/4/26.
//

#include <iostream>
#include <string>
#include <cstring>
#include "font.h"
#include "render.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string userInput;
    cout << "Enter your text: ";
    getline(cin, userInput);
    renderInput(userInput);
    
    
    return EXIT_SUCCESS;
}
