#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
	
};
template<class T>
class SinglyLL
{
	private:
		struct node<T> *Head;
		int cnt;
	public:
		SinglyLL();
		void InsertFirst(T value);
		void InsertLast(T value);
		void InsertAtPos(T value,int pos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int pos);
		void Display();
		int countNode();
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head=NULL;
	cnt=0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T value)
{
	struct node<T> *newn=NULL;
	newn=new node<T>;
	newn->data=value;
	newn->next=NULL;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		newn->next=Head;
		Head=newn;
	}
	cnt++;
}

template<class T>
void SinglyLL<T>::InsertLast(T value)
{
	struct node<T> *newn=NULL;
	newn=new node<T>;
	newn->data=value;
	newn->next=NULL;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		struct node<T> *temp=Head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	cnt++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T value,int pos)
{
	if((Head==NULL) || (pos>countNode()+1) || (pos<=0))
	{
		return;
	}
	else if(pos==1)
	{
		InsertFirst(value);
	}
	else if(pos==((countNode())+1))
	{
		InsertLast(value);
	}
	else
	{
		struct node<T> *newn=NULL;
		newn=new node<T>;
		newn->data=value;
		newn->next=NULL;
		
		struct node<T> *temp=Head;
		
		for(int i=1;i<=(pos-2);i++)
		{
			temp=temp->next;	
		}
		newn->next=temp->next;
		temp->next=newn;
	}
	cnt++;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	if(Head==NULL)
	{
		return;
	}
	else
	{
		struct node<T>*temp=Head;
		Head=temp->next;
		delete(temp);	
	}
	cnt--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T> *temp1=Head;
	struct node<T> *temp2=NULL;
	while(temp1->next->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp2=temp1->next;
	temp1->next=NULL;
	delete(temp2);
	cnt--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
	if((Head==NULL) || (pos>countNode()) || (pos<=0))
	{
		return;
	}
	else if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==(countNode()))
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp1=Head;
		struct node<T> *temp2=NULL;
		
		for(int i=0;i<(pos-2);i++)
		{
			temp1=temp1->next;
			++i;
		}
		temp2=temp1->next;
		temp1->next=temp2->next;
		
		delete(temp2);
	}
	cnt--;
}

template<class T>

void SinglyLL<T>::Display()
{
	cout<<"Elements of Linkedlist are: \n";
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" \n";
		temp=temp->next;
	}
}

template<class T>
int SinglyLL<T>::countNode()
{
	return cnt;
}

int main()
{
	SinglyLL<int> obj1;
	SinglyLL<char>obj2;
	
	obj1.InsertLast(13);
	obj1.InsertLast(14);
	obj1.InsertLast(15);
	obj1.InsertFirst(11);
	obj1.InsertAtPos(12,2);
	obj1.DeleteAtPos(2);
	obj1.Display();
	
	obj2.InsertLast('c');
	obj2.InsertLast('d');
	obj2.InsertFirst('a');
	obj2.InsertLast('e');
	obj2.InsertAtPos('b',2);
	obj2.DeleteAtPos(3);
	obj2.Display();
	return 0;
}
