//#pragma once
//class Node
//{
//public:
//	Node() : data(0),next(nullptr) {}
//	int data;
//	Node* next;
//};
//class LinkList
//{
//public:
//	LinkList() :head(new Node) {}
//	void insertH(int);
//	void insert(int, int);
//	void pop(int);
//	Node* reverse();
//	void print();
//private:
//	Node* head;
//};
//void LinkList::insertH(int data)	//Í·²å
//{
//	Node* temp = new Node;
//	temp->data = data;
//	temp->next = head;
//	head = temp;
//}
//void LinkList::insert(int n, int data)	//ÈÎÒâ²å
//{
//	Node* temp = new Node;
//	temp->data = data;
//	Node* p = head;
//	temp->next = nullptr;
//	if (n == 1)
//	{
//		head = temp;
//		temp->next = nullptr;
//	}
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//			p = p->next;
//		temp->next= p->next;
//		p->next = temp;
//	}
//	
//}
//void LinkList::pop(int n)
//{
//	Node* temp1 = head;
//	Node* temp2 = nullptr;
//	if (n == 1)
//	{
//		head = head->next;
//		delete temp1;
//	}
//	else
//	{
//		for (int i = 1; i < n - 1; i++)
//			temp1 = temp1->next;
//		temp2 = temp1->next;
//		temp1->next = temp2->next;
//		delete temp2;
//	}
//	
//}
//Node* LinkList::reverse()
//{
//	Node* pre = nullptr;
//	Node* cur = head;
//	Node* nex = nullptr;
//	while (cur)
//	{
//		nex = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = nex;
//	}
//	head = pre;
//	return head;
//}
//void LinkList::print()
//{
//	Node* p = head;
//	std::cout << "LinkList is :";
//	while (p)
//	{
//		std::cout << p->data << " " ;
//		p = p->next;
//	}
//	std::cout << std::endl;
//}