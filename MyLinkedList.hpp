//
// Created by kimem on 2019-11-20.
//

#ifndef LAB8_MYLINKEDLIST_HPP
#define LAB8_MYLINKEDLIST_HPP
#include "Node.hpp"
#include <list>
template <typename T>
class MyLinkedList{
private:
    Node<T> *head;
public:
    Node<T> * gethead(){
        return head;
    }

    Node<T> * pushFront(T data){
        Node<T> *newNode = new Node<T>();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        return newNode;
    }
    Node<T> * pushBack(T data){
    if(head == NULL){
    pushFront(data);
    }else{
    Node<T> *temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    Node<T> *newNode = new Node<T>();
    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
    return newNode;
}
    }
    Node<T> * insert(Node<T> * prevNode, T data){
        Node<T> *newNode = new Node<T>();
        newNode->data = data;
        newNode->next = prevNode->next;
        prevNode->next = newNode;
    return newNode;
    }
};


#endif //LAB8_MYLINKEDLIST_HPP
