// CS303_Lecture5Starter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Node.h"
#include "Function.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//first example does not use a head pointer
	//create the nodes
	//nodes use default constructor with no value to set nextPtr
	Node<string>* tom = new Node<string>("Tom");
	Node<string>* john = new Node<string>("John");
	Node<string>* harry = new Node<string>("Harry");
	Node<string>* sam = new Node<string>("Sam");

	//'link' the nodes
	tom->next = john;
	john->next = harry;
	harry->next = sam;

	//create a new node(Bob) & insert before sam
	Node<string>* bob = new Node<string>("Bob");
	bob->next = harry->next; // step 1
	harry->next = bob; // step 2

	//create a new node & add after after harry
	//here node uses default constructor & sets nextPtr
	harry->next = new Node<string>("Juan", harry->next);

	//start at the first node (tom) print the data in the nodes
	Node<string>* temp = tom;
	while (temp != nullptr) {
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << endl << endl;


	//second example uses a head pointer

	Node<string>* voided = new Node<string>("Void");
	Node<string>* head = new Node<string>("Tom");
	head->next = new Node<string>("John");
	head->next->next = new Node<string>("Harry");
	head->next->next->next = new Node<string>("Sam");
	head = new  Node<string>("Bugs", head);
	head = new  Node<string>("Spongebob", head);
	head = new  Node<string>("Scooby", head);

	//TASK 1
	traversePrint(head);

	try {
		Node<string>* temp = head->next->next->next;
		addBefore(head, temp, "Samir");
		addBefore(head, voided, "Keiko");
		temp = head->next->next;
		deleteBefore(head, temp);
	}
	catch (exception& err) {
		cout << temp << err.what() << endl;
	}

	traversePrint(head);

}
