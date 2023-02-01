#ifndef UNSORTEDLISTL_H
#define UNSORTEDLISTL_H

#include "ItemType.h"

struct Node
{
	ItemType item;
	Node* next;
};

class UnsortedListL
{
public:
	UnsortedListL();
	~UnsortedListL();

	void MakeEmpty();
	bool IsFull();
	int GetLength();
	ItemType GetItem(ItemType item, bool& found);
	bool PutItem(ItemType item);	// Done
	bool DeleteItem(ItemType item);
	void ResetList();
	ItemType GetNextItem();

private:
	Node* head;
	Node* loc;
	int listSize;
};

#endif // !UNSORTEDLISTL_H
