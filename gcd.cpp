#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lcm(int m, int n)
{
	int min=(m>n)?m:n;
	while(1)
	{
		if((min%m)==0 && (min%n)==0)
		{
			return min;
			break;
		}
		min++;
	}
}
int main()
{
	int i,res=1,input;
	vector<int> a;
	for(i=0;i<3;i++)
	{
		cin>>input;
		a.push_back(input);
	}
	sort(a.begin(),a.end());
	for(i=0;i<3;i++)
	{
	int res=lcm(res,a[i]);
	}
	cout<<res<<endl;
}
