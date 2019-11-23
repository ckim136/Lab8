//
// Created by kimem on 2019-11-20.
//

#ifndef LAB8_NODE_HPP
#define LAB8_NODE_HPP

#include <iostream>

using namespace std;
template <typename T>
class Node{
public:
    T data; //data
    Node<T> *next; // pointer to the next node
};
#endif //LAB8_NODE_HPP
