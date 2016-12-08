//SIMPLE PROGRAM TO CALCULATE VOLUME AND AREA OF CYLINDER WITHOUT USING INLINE//
#include<iostream.h>
#include<conio.h>
class cylinder
{
	float r,h;

	public:                        //ACCESS SPECIFIER//
		void getdata()
		{
			cout<<"\n enter the radius: ";
			cin>>r;
			cout<<"\n enter the height: ";
			cin>>h;

		//CAN BE WRITTEN AS 1 STATEMENT USING : cin>>r>>h//
		}

	void area()
		{
			cout<<"\n area of a cylinder is= \t"<<2*3.14*r*h;
		}

	void volume()
		{
			cout<<"\n volume of cylinder is= \t"<<3.14*r*r*h;
		}

};

void main()
{
	clrscr();
	cylinder c;
	c.getdata();
	c.volume();
	c.area();
	getch();
}