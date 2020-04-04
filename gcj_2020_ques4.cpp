#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,b;
    cin>>t>>b;
    while(t--)
    {
        string s;
        for(int j=0;j<b;j=j+10){
        for(int i=0;i<10;i++){
            char c;
            cout<<(i+1)<<"\n";
            cout.flush();
            cin>>c;
            s+=c;
        }
        }
        cout<<s<<"\n";
        cout.flush();
        char b1;
        cin>>b1;
        if(b1=='N'||b1=='n')
            break;
    }
return 0;
}