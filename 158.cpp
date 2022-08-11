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
     void InsertFirst(int iNo);
     void InsertLast(int iNo);
     void InsertAtPos(int iNo, int ipos);
     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int ipos);
     void Display();
     int Count();
};

 SinglyCLL::SinglyCLL()   //class name same as constructor
    {
        head=NULL;
        tail=NULL;
    }  


void SinglyCLL::InsertFirst(int iNo)
{
    PNODE newn= NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if(head==NULL)&&(tail==NULL)    //head==tail==null
    {
       head=newn;
       tail=newn;
    }
    else      //if LL contains atleast 1 node
    {
        newn->next=head;
        head=newn;
    }

   tail->next=head;   //shevatcha last mhanje first
}

 void SinglyCLL::InsertLast(int iNo)
 {
     PNODE newn= NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if(head==NULL)&&(tail==NULL)    //head==tail==null
    {
       head=newn;
       tail=newn;
    }
    else      //if LL contains atleast 1 node
    {
        tail->next=newn;
        tail=newn;
    }
    
    tail->next=head;   //shevatcha last is equal to first
 }
 void SinglyCLL::InsertAtPos(int iNo, int ipos)
 {
     int iSize=Count();

     if(ipos<1)||(ipos>iSize+1)
     {
         cout<<"invalid position";
         return;
     }

     if(ipos==1)
     {
         InsertFirst(iNo);
     }
     else if(ipos==iSize+1)
     {
         InsertLast(iNo);
     }
     else
     {

     }
 }
 void SinglyCLL:: DeleteFirst()
 {
     if(head==NULL && tail==NULL)   //LL IS EMPTY
     {
         return;
     }
     else if(head==tail)   //LL HAS 1 NODE
     {
         delete head;
         head=NULL;
         tail=NULL;
     }
     else    //LL HAS MORE NODES
     {
         head=head->next;
         delete tail->next;

          tail->next=head;  //saglikade liha
     }
 }

 void SinglyCLL:: DeleteLast()
 {
      if(head==NULL && tail==NULL)   //LL IS EMPTY
     {
         return;
     }
     else if(head==tail)   //LL HAS 1 NODE
     {
         delete tail;
         head=NULL;
         tail=NULL;
     }
     else    //LL HAS MORE NODES
     {
         PNODE temp=head;

         while(temp->next!=tail)
         {
             temp=temp->next;
         }
       delete tail;
       tail=temp;   //400 takycha 500 gela

       tail->next=head;
     }
 }
 void SinglyCLL::DeleteAtPos(int ipos)
 {
     int iSize=Count();

     if(ipos<1)||(ipos>iSize)
     {
         cout<<"invalid position";
         return;
     }
     
     if(ipos==1)
     {
         DeleteFirst();
     }
     else if(ipos==iSize)
     {
         DeleteLast();
     }
     else
     {
         PNODE temp1=head;
        int iCnt=0;

        for(iCnt=1; iCnt<ipos;iCnt++)
        {

        }
     }
 }
void SinglyCLL::Display()
{
    PNODE temp=head;

    if(head==NULL && tail==NULL)   //if LL is empty
    {
        return;
    }

    do
    {
         cout<<"|"<<temp->data<<"|-> ";
          temp=temp->next;
    }
    while(temp!=head)
    {
           cout<<endl;
    }

}
int SinglyCLL:: Count()
{
    int iCnt=0;
    PNODE temp= head;

    if(head==NULL && tail== NULL)
    {
        return 0;
    }
    do
    {
        iCnt++;
          temp=temp->next;
    }
    while(temp!=head);
       return iCnt;
}
int main()
{
    iRet=0;

    SinglyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();
    iRet=obj.Count();

    cout<<"number of nodes are: "<<iRet<<endl;

    obj.InsertAtPos(75,4);
    
     cout<<"number of nodes are: "<<iRet<<endl;
    obj.DeleteAtPos(4);

    cout<<"number of nodes are: "<<iRet<<endl;
    
    obj.Display();
    iRet=obj.Count();
    

    return 0;
}
