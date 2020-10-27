#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"

std::ofstream reversFile;

void reverseWord(std::string str);

int main() {
    std::fstream jokeFile;
    jokeFile.open("C:\\Users\\ergys\\CLionProjects\\CN\\jokes.txt"); //create and open a file to  read
    std::string str;
    reversFile.open("C:\\Users\\ergys\\CLionProjects\\CN\\sekoj.txt"); // create and open a new file to write
    while (getline(jokeFile, str)) { //read data from the file and store it as a string.
        reverseWord(str); //print the data of the string.
        reversFile << std::endl; // change line.
    }//while end


    jokeFile.close(); //close the read file.
    reversFile.close(); //close the write file.

}//main
void reverseWord(
        std::string str) { // reverse word takes a line of string as parameter and reverse it. If a ' . ' or a ' , ' is encountered at the end of a word it  remains at the end
    stack st; // stack creation
    for (int i = 0; i <
                    str.length(); i++) { // until we encounter a space, a comma or a dot each character is entered in a stack one by one
        if (str[i] != ' ' && str[i] != '.' && str[i] != ',' && str[i] != '(' && str[i] != ')' && str[i] != '%')
            st.push(str[i]); // character is pushed in to the stack
        else {
            while (st.isEmpty() ==
                   false) { // if we encounter one of the previous character: ' ' . ' , ' ( ' ) '  etc. we pop the stack
                reversFile << st.top();
                st.pop();
            }
            reversFile << str[i]; // we print the character that caused the stack to pop
        }//else
    }//for loop

}//reverseWord
