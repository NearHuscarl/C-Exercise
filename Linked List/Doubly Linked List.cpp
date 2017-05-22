#include <iostream>

using namespace std;

struct GamingPC
{
   int iD;
   int price;
   int operationalTime;
};

struct Node
{
   GamingPC info;
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

Node* CreateNode(GamingPC data)
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

void InputPcInfo(GamingPC &data)
{
   cout << "ID: ";
   cin >> data.iD;
   cout << "Price: ";
   cin >> data.price;
   cout << "Operational Time: ";
   cin >> data.operationalTime;
}

void InputList(List &list)
{
   int total;
   GamingPC data;

   cout << "Number of Gaming PC: ";
   cin >> total;

   Init(list);
   for(int i = 0; i < total; i++)
   {
      InputPcInfo(data);
      AddTail(list, CreateNode(data));
   }
}

void PrintPcInfo(GamingPC data)
{
   cout << "ID: "               << data.iD              << endl;
   cout << "Price: "            << data.price           << endl;
   cout << "Operational Time: " << data.operationalTime << endl;
}

void PrintList(List &list)
{
   for(Node *i = list.pHead; i != nullptr; i = i->pRight)
   {
      PrintPcInfo(i->info);
   }
   cout << endl;
}

int GetRevenue(GamingPC data)
{
   return data.operationalTime * 60;
}

void PrintRevenue(List list)
{
   int count = 0;

   for(Node *i = list.pHead; i != nullptr; i = i->pRight)
   {
      cout << "Revenue of PC " << ++count << ": " << GetRevenue(i->info) << endl;
   }
}

void PrintProfitPc(List list)
{
   int count = 0;

   for(Node *i = list.pHead; i != nullptr; i = i->pRight)
   {
      if(GetRevenue(i->info) > i->info.price)
      {
         PrintPcInfo(i->info);
      }
   }
   cout << endl;
}

int main()
{
   List l;
   InputList(l);

   cout << "\n--Output--\n";
   PrintList(l);

   cout << "\n--Revenue--\n";
   PrintRevenue(l);

   cout << "\n--Profit PC--\n";
   PrintProfitPc(l);

   cin.get();
   cin.get();
   return 0;
}
