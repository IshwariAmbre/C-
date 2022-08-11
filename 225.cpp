//STACK CODE
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);        // Insertfirst
        void Pop();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}
template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

	newn->next=Head;
	Head=newn;
    Count++;
}

template <class T>
void Stack<T>::Pop()       // Deletefirst
{
    T no;    //int no imaginary;

    if(Count == 0)    //linl list rikami ahe ka
    {
        cout<<"Stack is empty"<<endl;  //aat gelo mhanje Stack rikami ahe
        return;
    }

        no = Head -> data;   //11 ahe
        struct node<T> *temp = Head;  //temp madhe 100// temp pointer ghetla ahe
        Head = Head->next;     //NULL yenar
        delete temp;    //100 gela
    
    Count--;  //10 ch 9
    cout<<"Removed element is : "<<no<<endl;
}

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Stack are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
	Stack<char>obj1;  //datatype sangtoy  char ch try
	
	obj1.Push('A');
	obj1.Push('B');
	obj1.Push('C');
	obj1.Push('D');
	
	obj1.Display();
	
	obj1.Pop();   //d baher padnar
	obj1.Pop();   //c baher
	
	obj1.Push('Z');
	obj1.Pop();
	
        return 0;
}
