#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;  //right hand
    struct node *prev;  //left hand
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
    private:   
    PNODE Head;      //characteristics
    PNODE Tail;
    int CountNode;

    public:     //anyone can call members
    DoublyCLL();

    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    int Count();       //traversal functions
    void Display();
};

DoublyCLL::DoublyCLL()      
{}

void DoublyCLL::void InsertFirst(int iNo)  //function declarations
{}

void DoublyCLL::void InsertLast(int iNo)
{}

void DoublyCLL::void InsertAtPos(int iNo, int iPos)
{}

void DoublyCLL::void DeleteFirst()
{}

void DoublyCLL::void DeleteLast()
{}

void DoublyCLL::void DeleteAtPos(int iPos)
{}

void DoublyCLL::Display()
{}

void DoublyCLL::Count()
{
    return CountNode;
}

int main()
{
    DoublyCLL obj;
    return 0;
}
