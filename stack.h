//
// Created by ergys on 10/27/2020.
//

#ifndef CN_STACK_H
#define CN_STACK_H
#include "node.h"

class stack { // header file

public:
    node *head, *tail;
    int size;
    stack();
    void push(char d);
    bool isEmpty();
    char top();
    void pop();



};


#endif //CN_STACK_H
