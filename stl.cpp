#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(5);
    v={1,2,3};
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    puts("");
    set<int>st;
    st.insert(1);
    st.insert(2);
    for(auto it:st) 
    {
        cout<<it<<"\n";
    }
    map<int,string>mp;
    mp[1]="iit";
    mp[2]="du";
    for(auto it:mp)
    {
        cout<<"key: "<<it.first<<" "<<" Value: "<<it.second<<"\n";
    }

}
