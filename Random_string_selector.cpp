#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <vector>

int main()
{
    srand(time(NULL)); // create seed for pseudo random value
    std::vector<std::string> string_List; // create vector for storing strings
    int rand_Val = 0;
    std::ifstream inFil("wordlist.txt"); //initiate ifstream with *.txt file

    if (inFil) {  // test if stream is in good-state
        std::string temp; // temporary string to load string
        inFil >> temp;  // read first number

        while (inFil) { // test if stream is in good-state
            string_List.push_back(temp);  // store string in the vector
            inFil >> temp;  // read next string
        }
    }

    else {
        std::cout << "File could not be opened";
    }
    
    while(true)
    { 
        rand_Val = rand() % string_List.size() + 1; // create pseudo random value
        std::cout << string_List.at(rand_Val); // output random string to console
        std::cin.ignore(); //to ignore input to allow continued output of strings
    }
}
