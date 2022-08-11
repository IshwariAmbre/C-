#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Queue
{
    public:
        struct node<T> *Head;
        int Count;

        Queue();
        void Enqueue(T);        // InsertLast
        void Dequeue();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
            struct node<T> *temp = Head;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }

            temp->next = newn;
    }
    Count++;
}

template <class T>
void Queue<T>::Dequeue()       // Deletefirst
{
    T no;    //int no imaginary;

    if(Count == 0)    //linl list rikami ahe ka
    {
        cout<<"Queue is empty"<<endl;  //aat gelo mhanje queue rikami ahe
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
void Queue<T>::Display()
{
    cout<<"Elements from Queue are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
	Queue<int>obj1;  //datatype sangtoy
	
	obj1.Enqueue(11);
	obj1.Enqueue(21);
	obj1.Enqueue(51);
	obj1.Enqueue(101);
	
	obj1.Display();
	cout<<"Number of element in Queue "<<obj1.CountNode()<<endl;
	
	obj1.Dequeue();
	obj1.Dequeue();
	obj1.Dequeue();
	obj1.Display();
	
	cout<<"Number of element in Queue "<<obj1.CountNode()<<endl;
			
	obj1.Dequeue();
	obj1.Dequeue();
	
        return 0;
}
