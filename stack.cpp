#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s;
	int input;
	//hentikan input dengan ctrl+z atau tekan huruf
	while(cin>>input)
	{
		s.push(input);
	}
	do
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	while(s.size()!=0);
	{
		cout<<endl;
		return 0;
	}
}
