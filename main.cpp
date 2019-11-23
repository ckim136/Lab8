#include <iostream>
#include "MyLinkedList.hpp"
#include "Node.hpp"

using namespace std;
template <typename DLL, typename T>
void print(DLL *dll) {
    Node<T>* temp = dll;
    if(temp == NULL){
    }else{
        cout << temp->data<< " ";
        print<Node<T>,T>(temp->next);
 }
}

int main() {
    MyLinkedList<int> intList{};
    intList.pushBack(3);
    Node<int> *prevNode = intList.pushFront(1);
    intList.insert(prevNode, 2);
    print<Node<int>, int>(intList.gethead());

    MyLinkedList<string> stringList{};
    stringList.pushBack("c");
    Node<string> *prevStringNode =  stringList.pushFront("a");
    stringList.insert(prevStringNode, "b");
    print<Node<string>,string>(stringList.gethead());


Node<int>* head = intList.gethead();
Node<int> * next;
while(head != NULL){
    next = head->next;
    delete(head);
    head = next;
}

Node<string> *head2 = stringList.gethead();
Node<string> * next2;
while(head2 != NULL){
    next2 = head2->next;
    delete(head2);
    head2 = next2;
}

    return 0;
}