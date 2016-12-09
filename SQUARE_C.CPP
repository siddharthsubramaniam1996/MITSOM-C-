//finding square and cube of number by declaring functions outside class//

#include<iostream.h>
#include<conio.h>
class integer
{

	public:
	int n;

	void getdata();
	void square();
	void cube();

	}n;

void integer::getdata()
	{
cout<<"enter the number : \t";
cin>>n;
	}

void integer::square()
	{
	cout<<"\nthe value of the square of the number is : "<<n*n;
	}

void integer::cube()
	{
	cout<<"\nthe value of the cube is : \t"<<n*n*n;
	}

void main()
{
clrscr();
n.getdata();
n.square();
n.cube();
getch();
}
