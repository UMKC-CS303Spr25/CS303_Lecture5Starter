#pragma once
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

//TASK 1
//PRE: receives pointer to the head of the list  
//POST: prints through the list
void traversePrint(Node<string>* head);

//TASK 2
//PRE: Pointers to the head of the list and the location of insertion are provided
//     as well as data(name)
//POST:  New node is added prior to the location of insertion
void addBefore(Node<string>* head, Node<string>* given, string data);


//TASK 3
//PRE: receives pointer to the item prior to deletion  
//POST: deletes the next node
void remove(Node<string>* delNext);


//TASK 4
//PRE: Pointers to the head of the list and the location of insertion are provided
//POST:  New node is deleted prior to the node provided
void deleteBefore(Node<string>* head, Node<string>* given);
