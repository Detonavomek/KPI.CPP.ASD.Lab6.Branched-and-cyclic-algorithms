#include <iostream>
#include <stdio.h>
#include <Math.h>
using namespace std;
int main()
{
	float a,b,n,f,g;
	bool q=false, is_f=false;
	cout<<"Enter \"a\": ";
	cin>>a;
	cout<<"\nEnter \"b\": ";
	cin>>b;
	cout<<"\nEnter \"n\": ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if((pow((b-a),2)+a*i+i*i)==0)
		{
			cout<<"\ny("<<i<<")=Error, becouse denominator = 0";
		}
		else
		{
			if(a>b)
			{
				if(pow((2*a+b*i),3)<0){
					cout<<"\ny("<<i<<")=Error, becouse square root < 0";is_f=false;}
				else
				{
					f=((i+1)*(sqrt(pow((2*a+b*i),3))))/(pow((b-a),2)+a*i+i*i);
					printf("\ny(%d)=%5.3f",i, f);
					is_f=true;
				}
			}
			else
			{
				if(pow((2*b+a*i),3)<0){
					cout<<"\ny("<<i<<")=Error, becouse square root < 0";is_f=false;}
				else
				{
					f=((i-1)*(sqrt(pow((2*b+a*i),3))))/(pow((b-a),2)+a*i+i*i);
					printf("\ny(%d)=%5.3f",i, f);
					is_f=true;
				}
			}
			
			if(q&&is_f)
			{
				if(sqrt((f*f+a*a)/2)<g)
					g=sqrt((f*f+a*a)/2);
			}
			else if(is_f)
			{
				q=true;
				g=sqrt((f*f+a*a)/2);
			}
		}
	}

	if(q)
		printf("\n\nu=%5.3f\n", g);
	else
		cout<<"\n\nu=Error, becouse \"y\" not found.\n";

	char ch;
	cout<<"\nContinue?[0 - not, others - yes]\n";
	cin>>ch;
	if(ch!='0'){
		system("cls");
		main();
	}
	else
		exit(0);
	return 0;
}