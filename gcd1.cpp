#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int result = n/26;
		long long int bit,nibble,byte;
		long long int byteNumber = pow(2,result);
		if(n%26==0 && n>0)
		{
			bit = 0;
			nibble = 0;
			byte = pow(2,result-1);
		}
		else
		{
			n=n-result*26;
			float newN = n-0.1;
			//cout<<newN<<endl;
			if(newN< 2)
			{
				//cout<<"1"<<endl;
				bit = byteNumber;
				nibble = 0;
				byte = 0;
			}
			 if(newN>=2 && newN < 10)
			{
				bit = 0;
				nibble = byteNumber;
				byte = 0;
			}
			if(newN >= 10)
			{
				//cout<<"3"<<endl;
				bit = 0;
				nibble = 0;
				byte = byteNumber;
			}
		}
		cout<<bit<<" "<<nibble<<" "<<byte<<endl;
	}
}
