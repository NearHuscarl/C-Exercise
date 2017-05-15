// ------------------------------------------------------------
//    File Name: Source.cpp
//    Creator: Nguyen Khanh Nguyen
//    Student ID: 16520846
//    Class: PMCL.2
//    Time Created: Monday 2017-05-08 8:01:05 AM
// ------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

struct Node
{
   int info;
   Node* pNext;
};

struct List
{
   Node* pHead;
   Node* pTail;
};

void CreateList(List &list)
{
   list.pHead = list.pTail = nullptr;
}

bool IsEmpty(List &list)
{
   if(list.pHead = nullptr)
   {
      return true;
   }
   return false;
}

Node* CreateNode(int data)
{
   Node* node = new Node;

   if(node)
   {
      node->info = data;
      node->pNext = nullptr;
      return node;
   }
   return nullptr;
}

void AddHead(List &list, Node* node)
{
   if(!list.pHead)
   {
      list.pHead = list.pTail = node;
   }
   else
   {
      node->pNext = list.pHead; // Update new node link
      list.pHead = node;        // Update head node link
   }
}

void AddTail(List &list, Node* node)
{
   if(!list.pTail)
   {
      list.pHead = list.pTail = node;
   }
   else
   {
      list.pTail->pNext = node; // Update link to new node
      list.pTail = node;        // Update tail node link
   }
}

// Insert Node newNode before Node key in the list
void InsertBeforeNode(List &list, Node *newNode, Node *key)
{
}

// Insert Node newNode after Node key in the list
void InsertAfterNode(List &list, Node *newNode, Node *key)
{
   if(key) // key is not Null //??? why not loop
   {
      newNode->pNext = key->pNext; // Node newNode is inserted in Node key position
      key->pNext = newNode;        // Node key now point to Node newNode
      if(list.pTail == key)
      {
         list.pTail = newNode;
      }
   }
   else 
   {
      AddHead(list, newNode); //??? why use if-else
   }
}

void InsertNodeInSortedList(List &list, Node *newNode)
{
   if(newNode->info < list.pHead->info)
   {
      AddHead(list, newNode);
   }
   else if(newNode->info > list.pTail->info)
   {
      AddTail(list, newNode);
   }
   else
   {

   }
}

void InputList(List &list)
{
   int total, data;
   Node* node;

   cout << "Number of elements: ";
   cin >> total;

   for(int i = 0; i < total; i++)
   {
      cout << "Node " << i << ": ";
      cin >> data;
      node = CreateNode(data);
      AddTail(list, node);
   }
}

void Sort(List list)
{
   for(Node* i = list.pHead; i != list.pTail; i = i->pNext)
   {
      for(Node* j = i->pNext; j != nullptr; j = j->pNext)
      {
         if(i->info > j->info)
         {
            swap(i->info, j->info);
         }
      }
   }
}

bool RemoveHead(List &list)
{
   if(!list.pHead) //List is empty
   {
      return false;
   }

   else if(list.pHead == list.pTail) //List only has one element
   {
      delete list.pHead;
      list.pHead = list.pTail = nullptr;
   }
   else //List has 2+ elements
   {
      Node* node = list.pHead;
      list.pHead = list.pHead->pNext;
      delete node;
   }
   return true;
}

bool RemoveTail(List &list)
{
   if(!list.pTail) //List is empty
   {
      return false;
   }

   else if(list.pTail == list.pHead) //List only has one element
   {
      delete list.pTail;
      list.pHead = list.pTail = nullptr;
   }
   else //List has 2+ elements
   {
      Node* node = list.pHead;

      while(node->pNext != list.pTail)
      {
         node = node->pNext;
      }
      delete list.pTail;
      list.pTail = node;
   }
   return true;
}

bool IsInList(List list, int key)
{
   for(Node* i = list.pHead; i != nullptr; i = i->pNext)
   {
      if(i->info == key)
      {
         return true;
      }
   }
   return false;
}

//Remove the Node after Node node
bool RemoveAfter(List &list, Node *node)
{
   if(!list.pHead) //List is empty
   {
      return false;
   }

   Node *nextNode = node->pNext;
   if(nextNode)
   {
      node->pNext = nextNode->pNext;
      delete nextNode;
   }
}

//Remove Node that holds data in the list
bool RemoveData(List &list, int data)
{
   if(!list.pHead) //List is empty
   {
      return false;
   }

   Node *result = list.pHead;
   Node *before = nullptr;

   while(result->info != data)
   {
      before = result;
      result = result->pNext;
   }
   if(result == list.pHead)
   {
      RemoveHead(list);
   }
   else
   {
      RemoveAfter(list, before);
   }
   return true;
}

void RemoveList(List &list)
{
   Node *i = list.pHead;

   while(list.pHead)
   {
      i = i->pNext;
      delete list.pHead;
      list.pNext = i;
   }
   list.pNext = list.pTail = nullptr;
}

int PrintNodeCount(List list)
{
   int count = 0;

   for(Node* i = list.pHead; i != nullptr; i = i->pNext)
   {
      count++;
   }
   return count;
}

int PrintMaxValue(List list)
{
   int max = INT_MIN;

   for(Node* i = list.pHead; i != nullptr; i = i->pNext)
   {
      if(i->info > max)
      {
         max = i->info;
      }
   }
   return max;
}

int PrintMinValue(List list)
{
   int min = INT_MAX;

   for(Node* i = list.pHead; i != nullptr; i = i->pNext)
   {
      if(i->info < min)
      {
         min = i->info;
      }
   }
   return min;
}

void PrintList(List &list)
{
   for(Node* i = list.pHead; i != nullptr; i = i->pNext)
   {
      cout << i->info << " ";
   }
   cout << endl;
}

int main()
{
   List l;
   Node *p = nullptr;
   CreateList(l);
   InputList(l);
   PrintList(l);
   Insert(l,p) ;                                                        
   cout << "after: " << endl;
   PrintList(l);

   cin.get();
   cin.get();
   return 0;
}
