#pragma once
class Node
{
public:
	Node() : data(0), prev(nullptr), next(nullptr) {}
	int data;
	Node* prev;
	Node* next;
};
class DoubleLinkList
{
public:
	DoubleLinkList() : head(nullptr) {}
	Node* CreateNode(int);
	void insertH(int);
	void insert(int, int);
	void pop(int);
	void print();
	void rprint();
private:
	
	Node* head;
};
Node* DoubleLinkList::CreateNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->next = nullptr;
	temp->prev = nullptr;
	return temp;
}
void DoubleLinkList::insertH(int data)
{
	Node* temp = CreateNode(data);
	head->prev = temp;
	temp->next = head;
	head = temp;
}
void DoubleLinkList::insert(int n, int data)
{
	Node* temp = CreateNode(data);
	Node* p = head;
	if (n == 1)
	{
		insertH(data);
	}
	else 
	{
		for (int i = 0; i < n - 2; i++)
			p = p->next;
		temp->next = p->next;
		p->next = temp;
		temp->prev = p;
	}
	
}
void DoubleLinkList::pop(int n)
{
	Node* p1 = head;
	Node* p2 = nullptr;
	if (n == 1)
	{
		head = head->next;
		delete p1;
	}
	else
	{
		for (int i = 1; i < n - 1; i++)
			p1 = p1->next;
		p2 = p1->next;
		p1->next = p2->next;
		p2->next->prev = p1;
		delete p2;
	}
	
}
void DoubleLinkList::print()
{
	Node* p = head;
	std::cout << "LinkList is :";
	while (p->next)
	{
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}
void DoubleLinkList::rprint()
{
	Node* p = head;
	std::cout << "RLinkList is :";
	while (p->next)
	{
		p = p->next;
	}
		
	while (p->prev)
	{
		std::cout << p->data << " ";
		p = p->prev;
	}	 
	std::cout << std::endl;
}