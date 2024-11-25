//
// Created by siusl on 11/24/2024.
//

#ifndef TEXTCLASS_LINKEDLISTS_TEXTCLASS_HPP
#define TEXTCLASS_LINKEDLISTS_TEXTCLASS_HPP

#include <string>
#include <stdexcept>

# include <string>

//LinkedList class - keep track of getting into the first link, text class, pointer to the first one, add reference for advanced lab
//Link class - keeps track of links, value, next & prev points

class TextClass{ //linked list class - each one is an objext
private:
    const static int DEFAULT_SIZE = 20;//size
    //**Do I need these?
    int head = -1;
    int tail = 0;
    int size;
    int count;
    //**need above?
    int value; //data contained in link
    TextClass next; //reference to next link - move to Link class
    TextClass prev; //reference to previous link - move to Link class

public:
    // constructor
    //goes to TextLink class
    TextClass(char value, TextClass* next = nullptr, TextClass* prev = nullptr) {//change all below to char value
        this->value = value;
        this->next = next;
        this->prev = prev;
    };
    //above goes to TextLink class **rename

//destructor
    ~TextClass();

    //base methods **PER LAB INSTRUCTIONS
    void addHead(int value) { //adds value to the head of the list.
    }

    void addTail(int value) { //adds value to the tail of the list.
    }

    int getHead() { // returns the value from the head of the list. (throws exception if list is empty)
    }

    int getTail() { //returns the value from the tail of the list. (throws exception if list is empty)
    }

    int removeHead() { //removes the value at the head of the list.
    }

    int removeTail() { //removes the value at the tail of the list.
    }

    int find(int value) { //returns true if value is present in the list, returns false if not.
    }

    void findRemove(int value) { // returns true and removes the value if present, returns false if not.
    }

    std::string displayList() { // returns a string containing the contents of the list from head to tail. Should
//        insert a space between each value.
    }

    //***void append? int otherList? **GO TO text class Linked List
    void append(int* otherList) {} //hooks lists together, pointer to linked list//appends the contents of otherList to the tail of this list. Note that
//    otherList is an object, so should be passed by const reference (except for Python which does
//    not know about references).

    int findNext(int value) {} //like find, but if findNext is called for the same value after a success, it
//    should find the next instance of that value, wrapping if necessary.

    //access methods
    int getValue() {
        return this->value;
    }

    TextClass getNext() {
        return this->next;
    }

    TextClass getPrev() {
        return this->prev;
    }

    void setNext(TextClass prev) {
        this->next = next;
    }

    void setPrev(TextClass prev) {
        this->prev = prev;
    }

};

#endif //TEXTCLASS_LINKEDLISTS_TEXTCLASS_HPP
