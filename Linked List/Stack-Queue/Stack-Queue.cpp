#include<iostream>

using namespace std;

struct Node
{
   int info;
   struct Node *pNext;
};

struct List
{
   Node *pHead;
   Node *pTail;
};

void CreateList(List &list)
{
   list.pHead = list.pTail = nullptr;
}

Node *CreateNode(int data)
{
   Node *node = new Node;

   if(!node)
   {
      exit(1);
   }
   node->info=data;
   node->pNext = nullptr;

   return node;
}

void AddHead(List &list, Node* node)
{
   if(!list.pHead) 
   { 
      list.pHead = list.pTail = node; 
   }
   else
   { 
      p->pNext = list.pHead;
      list.pHead = node; 
   }
}

void AddTail(List &list, Node *node)
{
   if (!list.pTail)  
   {
      list.pTail = list.pHead = node; 
   }
   else
   { 
      list.pTail->pNext = node;
      list.pTail = node; 
   }
}

bool RemoveHead(List &list, int &retrivedData)
{
   if(!list.pHead) //List is empty
   {
      return false;
   }
   else if(list.pHead == list.pTail) //List only has one element
   {
      retrivedData = list.pHead->info;

      delete list.pHead;
      list.pHead = list.pTail = nullptr;
   }
   else //List has 2+ elements
   {
      retrivedData = list.pHead->info;

      Node* node = list.pHead;
      list.pHead = list.pHead->pNext;
      delete node;
   }
   return true;
}

void PrintList(List &list)
{
   for(Node* i = list.pHead; i != nullptr; i = i->pNext)
   {
      cout << i->info << " ";
   }
   cout << endl;
}

void DeleteList(List &list)
{
   Node *i = list.pHead;

   while(list.pHead)
   {
      i = i->pNext;
      delete list.pHead;
      list.pHead = i;
   }
   list.pNext = list.pTail = nullptr;
}

// Stack Functions (FILO)

void Push(List &list, Node *node)
{
   AddHead(list, node);
}

void Pop(List &list)
{
   int data;

   if(!RemoveHead(list, data))
   {
      cout << "List is empty" << endl;
   }
   else
   {
      cout << "Data value is: " << data << endl;
   }
}

void InputStack(List &list)
{
   int total, data;

   CreateList(list);
   cout << "Number of elements: ";
   cin >> total;
   for(int i = 0; i < total; i++)
   {
      cout << "Element " << i+1 << ": ";
      cin >> data;
      Push(list, CreateNode(data));
   }
}

// Queue Functions (FIFO)

void Enqueue(List &list, Node *node)
{
   AddTail(list, node);
}

void Dequeue(List &list)
{
   int data;

   if(!RemoveHead(list, data))
   {
      cout << "List is empty" << endl;
   }
   else
   {
      cout << "Data value is: " << data;
   }
}

void InputQueue(List &list)
{
   int total, data;

   CreateList(list);
   cout << "Number of elements: ";
   cin >> total;
   for(int i = 0; i < total; i++)
   {
      cout << "Element " << i+1 << ": ";
      cin >> data;
      EnQueue(list, CreateNode(data));
   }
}

void main()
{
   int choice = -1, subChoice = -1, data;
   List l;

   while(!choice)
   {
      cout << "0: Exit" << endl;
      cout << "1: Stack" << endl;
      cout << "2: Queue" << endl;
      cout << "Choice: ";
      cin >> choice;
      switch(choice)
      {
         case 1:
            InputStack(l);
            break;
         case 2:
            InputQueue(l);
            break;
         default:
            break;
      }

      while(!subChoice && !choice)
      {
         if(choice == 1)
         {
            cout << "0: Exit" << endl;
            cout << "1: Push" << endl;
            cout << "2: Pop" << endl;
            cout << "3: Print" << endl;
            cout << "Choice: ";
            cin >> subChoice;
            switch(subChoice)
            {
               case 1:
                  cout << "New Data: ";
                  cin >> data;
                  Push(l, CreateNode(data));
                  break;
               case 2:
                  Pop(l);
                  break;
               case 3:
                  PrintList(l);
                  break;
               default:
                  break;
            }
         }
         else if(choice == 2)
         {
            cout << "0: Exit" << endl;
            cout << "1: Enqueue" << endl;
            cout << "2: Dequeue" << endl;
            cout << "3: Print" << endl;
            cout << "Choice: ";
            cin >> subChoice;
            switch(subChoice)
            {
               case 1:
                  cout << "New Data: ";
                  cin >> data;
                  Enqueue(l, CreateNode(data));
                  break;
               case 2:
                  Dequeue(l);
                  break;
               case 3:
                  PrintList(l);
                  break;
               default:
                  break;
            }
         }
      }
      DeleteList(l);
      subChoice = -1;
   }

   cin.get();
}

