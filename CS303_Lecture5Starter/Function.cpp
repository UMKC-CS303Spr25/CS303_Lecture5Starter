#include "Function.h"

//PRE: Pointers to the head of the list and the location of insertion are provided
//     as well as data(name)
//POST:  New node is added prior to the location of insertion
void addBefore(Node<string>* head, Node<string>* given, string data) {

    // if the list is empty 
    if (head == nullptr)
        throw std::exception("empty list!");
  
    // if the new node is the head


    //standard case
    //set tempNode to head value passed in
    //loop checking tempNode next pointer 
    //  if not 'given' advance node
    Node<string>* currentNode = head;


    // if tempNode is nullptr -> we've reached the end, and didn't find Sam
 
    //create the new node & adjust pointer
    Node<string>* newNode = new Node<string>(data, currentNode->next);
    currentNode->next = newNode;
}

//PRE: receives pointer to the head of the list  
//POST: prints through the list
void traversePrint(Node<string>* head) {
    //set temp ptr

    //loop through linked list & print data
}

//PRE: receives pointer to the item prior to deletion  
//POST: deletes the next node
void remove(Node<string>* delNext) {



}


//PRE: Pointers to the head of the list and the location of item to delete are provided
//POST:  New node is deleted prior to the node provided
void deleteBefore(Node<string>* head, Node<string>* given) {

    //check for special cases
    //list is empty or only contains one item (can not delete 'before')
    if (head == nullptr || head->next == nullptr || head == given)
        throw std::exception("Cannot delete the node");

    //check if we are deleting the head pointer
    if (head->next == given) {//the node we want to delete is the head
        Node<string>* temp = head;
        head = head->next;
        delete temp;
        return; //done
    }
    //otherwise, the standard case
    //set temp node to head node
    Node<string>* currentNode = head;

    //as long as the current node & next nodes are not null 
    //check if the current->next->next node is the one to delete
    //if so, adjust pointers & break/return
    //otherwise advance pointer



}