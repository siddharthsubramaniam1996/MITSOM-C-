//SIMPLE PROGRAM TO CALCULATE PERIMETER AND AREA OF RECTANGLE WITHOUT USING INLINE//
#include<iostream.h>
#include<conio.h>
class rectangle
{
	float l,b;

	public:                        //ACCESS SPECIFIER//
		void getdata()
		{
			cout<<"\n enter the length: ";
			cin>>l;
			cout<<"\n enter the breadth: ";
			cin>>b;


		//CAN BE WRITTEN AS 1 STATEMENT USING : cin>>l>>b//
		}

	void area()
		{
			cout<<"\n area of a rectangle is= \t"<<l*b;
		}

	void perimeter()
		{
			cout<<"\n perimeter of rectangle is= \t"<<2*l*b;
		}

	void display()
		{
			cout<<"\n the length =\t"<<l;
			cout<<"\n breadth is = \t"<<b;
		}
};

void main()
{
	clrscr();
	rectangle r;
	r.getdata();
	r.perimeter();
	r.area();

	r.display();

	rectangle r1;
	r1.getdata();
	r1.perimeter();
	r1.area();
		r1.display();


	getch();
}