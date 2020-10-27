# Question 6

In question 6 the program reads from a string file and reverses each individual string from the file



## reverseWord

```c++
oid reverseWord(
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
```

## How does ReverseWord works
Each string from a string line that is entered as a parameter is pushed into a stack until one of the characters in the "if" statement is reached. Once one of those characters is reached the stack is popped - "written in a file". Then the character that resulted in the stack to be popped is written into the file. This will continue until the end of the string entered as a parameter.

![ezgif com-gif-maker (3)](https://user-images.githubusercontent.com/25082236/97337887-337d4080-1857-11eb-9d50-ec12bf3df4aa.gif)

