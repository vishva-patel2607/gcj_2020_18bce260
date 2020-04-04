

#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
	cin>>t;
	int rec = t;
	while(t--)
	{
		
		string s;
		string str="";
		cin>>s;
		
		for(int i=0;i<s.length();i++)
		{
			if(i==0)
			{
				for(int j=0;j<s[i]-'0';j++)
				{
					str+="(";
				}
				str+=s[i];
			}
			else
			{
				int diff = s[i]-s[i-1];
				if(diff<0)
				{
					for(int i=0;i<abs(diff);i++)
					{
						str+=")";
					}
					str+=s[i];
			    }
			    else
			    {
					for(int i=0;i<diff;i++)
					{
						str+="(";
					}
					str+=s[i];
				}
				
			}
		}
		for(int i=0;i<s[s.length()-1]-'0';i++)
		{
			str+=")";
		}
		cout<<"Case #"<<rec-t<<": "<<str<<endl;
	}
return 0;
}