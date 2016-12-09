//SIMPLE PROGRAM TO CALCULATE PERIMETER AND AREA OF RECTANGLE by:Declaring func outside the class//
#include<iostream.h>
#include<conio.h>
class rectangle
{
	float l,b;
	public:
	void getdata();

	void area();

	void perimeter();

	void display();
};


void rectangle::getdata()
	{
			cout<<"\n enter the length: ";
			cin>>l;
			cout<<"\n enter the breadth: ";
			cin>>b;

		}

void rectangle::area()
	{
			cout<<"\n area of a rectangle is= \t"<<l*b;
		}

void rectangle::perimeter()
	{
			cout<<"\n perimeter of rectangle is= \t"<<2*l*b;
		}

void rectangle::display()
	{
			cout<<"\n the length =\t"<<l;
			cout<<"\n breadth is = \t"<<b;
		}


void main()
{
	clrscr();
	rectangle r;
	r.getdata();
	r.perimeter();
	r.area();
	r.display();
	getch();
}