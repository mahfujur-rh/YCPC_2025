#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,X,Y;cin>>N>>X>>Y;
    string s;cin>>s;
    int a=s[X-1]-'0';
    int b=s[Y-1]-'0';
    if (a==0||b==0)
    {
        cout<< "NO"<<endl;
    }
    else if(a%b==0||b%a==0)
    {
      cout<<"YES"<< endl;  
    }
    else
    cout<< "NO"<< endl;
    


 return 0;
}