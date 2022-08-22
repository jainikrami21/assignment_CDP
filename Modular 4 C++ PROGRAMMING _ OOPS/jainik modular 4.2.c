#include<iostream>
using namespace std;

class math
{
	int a,b,ans;
	
	void input()
	{
		cout<<"Enter A : ";
		cin>>a;
		cout<<"Enter B : ";
		cin>>b;
	}
	public:
		void add()
		{
			input();
			ans=a+b;
			cout<<"Addition : "<<ans;
		}
		void sub()
		{
			input()
			ans=a-b;
			cout<<"Subtraction : "<<ans;
		}
		void mul()
		{
			input()
			ans=a*b;
			cout<<" multiplication : "<<ans;
		}
		void div()
		{
			input()
			ans=a/b;
			cout<<" Division : "<<ans;
		}
		
};
main()
{
	int n;
	cout<<" select the operation to perform.";
	cout<<"\n1. Addition";
	cout<<"\n2. Subtraction";
	cout<<"\n3. Multiplication";
	cout<<"\n4. Division";
	cin>>n;
	math obj;
	obj.add(n);
	obj.div(n);
	obj.mul(n);
	obj.sub(n);
}