//
//  render.cpp
//  figletArtGenerator
//
//  Created by Draven Nova on 6/4/26.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include "font.h"
#include "render.h"

void renderInput(std::string input) {
    int rows = 5;
    std::string letterSpace = " ";

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < input.length(); j++) {

            char c = input[j];
            std::cout << font[c][i];
        }

        std::cout << std::endl;
    }
}
