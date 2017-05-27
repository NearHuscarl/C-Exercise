#include <iostream>

using namespace std;

struct Monomial
{
   int mIndex;
   int mConst;
};

struct Node
{
   Monomial info;
   Node *pLeft;
   Node *pRight;
};

struct List
{
   Node *pHead;
   Node *pTail;
};

void Init(List &list)
{
   list.pHead = list.pTail = nullptr;
}

void Init(List &list, int size)
{
   Monomial data;

   data.mIndex = 0;
   data.mConst = 0;

   list.pHead = list.pTail = nullptr;

   for(int i = 0; i < size; i++)
   {
      AddTail(list, CreateNode(data));
   }
}

Node* CreateNode(Monomial data)
{
   Node *node = new Node;

   if(!node)
   {
      exit(1);
   }
   node->pLeft = node->pRight = nullptr;
   node->info = data;
   return node;
}

void AddHead(List &list, Node *node)
{
   if(!list.pHead)
   {
      list.pHead = list.pTail = node;
   }
   else
   {
      node->pRight = list.pHead;
      list.pHead->pLeft = node;
      list.pHead = node;
   }
}

void AddTail(List &list, Node *node)
{
   if(!list.pTail)
   {
      list.pTail = list.pHead = node;
   }
   else
   {
      list.pTail->pRight = node;
      node->pLeft = list.pTail;
      list.pTail = node;
   }
}

void InputMonomial(Monomial &data)
{
   cout << "Const: ";
   cin >> data.mConst;
}

void InputList(List &list)
{
   int highestIndex;
   Monomial data;

   cout << "Highest Index: ";
   cin >> highestIndex;

   Init(list);
   for(int i = 0; i <= highestIndex; i++)
   {
      data.mIndex = i;
      cout << "-" << i << "-" << endl;
      InputMonomial(data);
      cout << endl;

      AddTail(list, CreateNode(data));
   }
}

void PrintMonomial(Monomial data)
{
   cout << data.mConst << "x^" << data.mIndex;
}

void PrintList(List &list)
{
   for(Node *i = list.pHead; i != nullptr; i = i->pRight)
   {
      PrintMonomial(i->info);
      if(i->pRight)
      {
         cout << " + ";
      }
   }
   cout << endl;
}

int GetNodeCount(List list)
{
   int count = 0;

   for(Node* i = list.pHead; i != nullptr; i = i->pRight)
   {
      count++;
   }
   return count;
}

int GetMaxNodeCount(List listA, List listB)
{
   if(GetNodeCount(listA) > GetNodeCount(listB))
   {
      return GetNodeCount(listA);
   }
   else
   {
      return GetNodeCount(listB);
   }
}

void Add(List listA, List listB, List &sum)
{
   Init(sum);

   Node *i = listA.pHead;
   Node *j = listB.pHead;
   Monomial data;
   int maxIndex = GetMaxNodeCount(listA, listB) - 1;

   for(int index = 0; index <= maxIndex; index++)
   {
      if(i && !j)
      {
         data = i->info;
         AddTail(sum, CreateNode(data));
         i = i->pRight;
      }
      else if(j && !i)
      {
         data = j->info;
         AddTail(sum, CreateNode(data));
         j = j->pRight;
      }
      else // i and j != null
      {
         data.mConst = i->info.mConst + j->info.mConst;
         data.mIndex = i->info.mIndex;
         AddTail(sum, CreateNode(data));
         i = i->pRight;
         j = j->pRight;
      }
   }
}

void Substract(List listA, List listB, List &diff)
{
   Init(diff);

   Node *i = listA.pHead;
   Node *j = listB.pHead;
   Monomial data;
   int maxIndex = GetMaxNodeCount(listA, listB) - 1;

   for(int index = 0; index <= maxIndex; index++)
   {
      if(i && !j)
      {
         data = i->info;
         AddTail(diff, CreateNode(data));
         i = i->pRight;
      }
      else if(j && !i)
      {
         data = j->info;
         AddTail(diff, CreateNode(data));
         j = j->pRight;
      }
      else // i and j != null
      {
         data.mConst = i->info.mConst - j->info.mConst;
         data.mIndex = i->info.mIndex;
         AddTail(diff, CreateNode(data));
         i = i->pRight;
         j = j->pRight;
      }
   }
}

bool InsertNode(List &list, Node *node, int pos)
{
   int index = 0;

   for(Node *i; i != nullptr; i = i->pRight)
   {
      if(pos == index++)
      {
         node->pRight = i->pRight;
         node->pLeft = i;
         i->pRight = node;
         return true;
      }
   }
   return false;
}

/* void Multiply(List listA, List listB, List &product) */
/* { */
/*    Node *i = listA.pHead; */
/*    Node *j = listB.pHead; */
/*    Monomial data; */
/*    int maxIndexA = GetNodeCount(listA) - 1; */
/*    int maxIndexB = GetNodeCount(listB) - 1; */
/*    int maxIndex  = maxIndexA * maxIndexB; */

/*    Init(product, maxIndex + 1); */

/*    for(int index = 0; index <= maxIndexA; index++) */
/*    { */
/*       for(int subIndex = 0; subIndex <= maxIndexB; subIndex++) */
/*       { */
/*          data.mConst = i->info.mConst * j->info.mConst; */
/*          data.mIndex = i->info.mIndex + j->info.mIndex; */
/*          /1* product *1/ */
/*          InsertNode(product, CreateNode(data), data.mIndex); */
/*       } */
/*    } */
/* } */

void DeleteList(List &list)
{
   Node *i = list.pHead;

   while(list.pHead)
   {
      i = i->pRight;
      delete list.pHead;
      list.pHead = i;
   }
   list.pHead = list.pTail = nullptr;
}

int main()
{
   List l1, l2;

   InputList(l1);
   InputList(l2);

   cout << "\n--Output--\n";
   PrintList(l1);
   PrintList(l2);

   cout << "\n--Sum--\n";
   List sum;
   Add(l1, l2, sum);
   PrintList(sum);

   cout << "\n--Diff--\n";
   List diff;
   Substract(l1, l2, diff);
   PrintList(diff);

   DeleteList(l1);
   DeleteList(l2);
   DeleteList(sum);

   cin.get();
   cin.get();
   return 0;
}
