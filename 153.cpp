#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
}

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node *PPNODE;

class SinglyCLL
{
    private:    //characteristics
     PNODE head;
     PNODE tail;

    public:    //behaviour
     SinglyCLL()
     {
         head=NULL;
         tail=NULL;
     }  

     void InsertFirst(int iNo)
     {

     }
     void InsertLast(int iNo)
     {

     }
     void InsertAtPos(int iNo, int ipos)
     {

     }
     void DeleteFirst()
     {

     }
     void DeleteLast()
     {

     }
     void DeleteAtPos(int ipos)
     {

     }
     void Display()
     {

     }
     int Count()
     {
         return 0;
     }

};

int main()
{
    SinglyCLL obj;

    return 0;
}
