//9.Write a program of to display in this format using class
//Roll No Sub1 Sub2 Sub3 Total Percentage
//1 30 25 45 100
//2 25 20 25 70
//3 20 15 35 70
//4 35 30 40 105
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		char name[100];
		int rollno;
		int total;
		float perc;
	public:
		void getdata()
		{
			cout<<"\n Enter the student details......,";
			cout<<"\n Enter the name:-";
			cin >> name;
			cout<<"\n Enter the rollno:-";
			cin >> rollno;
			cout<<"\n Enter the total marks out of 300:-";
			cin >> total; 
			perc=(float)total/300*100;
		}
		void putdata()
		{
			cout<<"\n The display student details:-";
			cout<<"\n Name of student:-"<<name;
			cout<<"\n Roll No of student:-"<<rollno;
			cout<<"\n Total marks of student:-"<<total;
			cout<<"\n Percentage of student:-"<<perc;
		} 
};
int main()
{
	student obj;
	obj.getdata();
	obj.putdata();

}