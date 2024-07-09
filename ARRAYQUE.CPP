#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int stack[10], choice, n, top, x, i;
char t;
void push(void);
void pop(void);
void display(void);

int main()
{
	clrscr;
	top = -1;
	cout<<"Enter the size of Stack[Max]";
	cin>>n;
	cout<<"Stack Operation Using Array";
	cout<< "1. Push";
	cout<< "2. Pop";
	cout<< "3. Display";
	cout<< "4. Exit";

	do
		{
		cout<<"Enter the Choice here:";
		cin>>choice;
		switch(choice)
		{
			case 1: {push(); break;}
			case 2: {pop(); break;}
			case 3: {display();break;}
			case 4: {cout<< "Exit Point"; break;}
			default:
				{cout<<"Please Enter a valid choice (1,2,3,4)";}
		}
		}
	while (choice != 4);
	cin>>t;
	return 0;
}



void push()
{
	if (top >= n-1)
	{	cout<<"\n\t Stack is overflow"; }
	else
	{
		cout<<"Enter a value to be pushed in";
		cin>> x;
		top++;
		stack[top] = x;}
}

void pop( )
{
	if (top <= -1)
	{
	cout<<"\n\t stack is underflow";}
	else
	{
	cout<<"\n\t The popped element is"<<stack[top];
	top--;
	}
}
void display()
{
	if(top >= 0)
	{
		cout<<"The element is stack";
		for(i = top; i>= 0; i--)
		{
			cout<< stack[i];
			cout<< "Press Next Choice";
		}
	}
	else
	{
			cout<<"\n The stack is empty";
	}
}