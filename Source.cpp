#include<iostream>
#include<conio.h>
using namespace std;
void move(int,int,int,int);

int main()
{
int num;
cout<<" \nEnter Number of Disks:";
cin>>num;
cout<<endl;
move(num,1,2,3);
getch();
}

void move(int count,int n1,int n2,int n3)
	{
		if(count>0)
	{
	move(count-1,n1,n2,n3);
	cout<<" Move Disk " <<count<< " From "<<n1<<" To "<<n3<<".\n";
	move(count-1,n2,n3,n1);
	}
}