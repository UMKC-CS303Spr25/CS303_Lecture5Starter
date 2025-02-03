#pragma once

template <typename itemType>
struct Node {
	// Data Fields
	/** The data */
	/** The pointer to the next node. */

	itemType data;
	Node* next;

	// Constructor
	/** Creates a new Node that points to another Node.
	@param data_item The data stored
	@param next_ptr Pointer to the Node that is
	pointed to by the new Node
	*/
	Node(const itemType& dataItem, Node* nextPtr = nullptr) :
		data(dataItem), 
		next(nextPtr) {}
};
