#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k,j,z=0,b,l;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	b=sqrt(n);
	for(i=0;i<n;i+=b)
	{
		if(a[i]==k)
		{
			cout<<i<<endl;
			b=0;
			break;
		}
		else if(a[i]>k)
		{
			for(j=z+1;j<i;j++)
				if(a[j]==k)
				{
					cout<<j<<endl;
					b=0;
					break;
				}
			break;	
		}
		z=i;
	}
	if(b!=0)
		cout<<"Invalid Input"<<endl;
	return 0;	
}
