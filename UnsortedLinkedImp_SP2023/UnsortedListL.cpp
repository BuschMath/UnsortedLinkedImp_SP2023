#include "UnsortedListL.h"

UnsortedListL::UnsortedListL()
{
	head = nullptr;
	loc = nullptr;
	listSize = 0;
}

UnsortedListL::~UnsortedListL()
{
}

void UnsortedListL::MakeEmpty()
{
}

bool UnsortedListL::IsFull()
{
	try
	{
		Node* temp = new Node;
	}
	catch (bad_alloc)
	{
		return true;
	}
	return false;
}

int UnsortedListL::GetLength()
{
	return 0;
}

ItemType UnsortedListL::GetItem(ItemType item, bool& found)
{
	return ItemType();
}

bool UnsortedListL::PutItem(ItemType item)
{
	if (!IsFull())
	{
		Node* temp = new Node;
		temp->item = item;

		if (head == nullptr)
		{
			temp->next = nullptr;
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}

		return true;
	}

	return false;
}

bool UnsortedListL::DeleteItem(ItemType item)
{
	return false;
}

void UnsortedListL::ResetList()
{
}

ItemType UnsortedListL::GetNextItem()
{
	return ItemType();
}
