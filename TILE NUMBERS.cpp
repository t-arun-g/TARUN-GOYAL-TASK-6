#include <bits/stdc++.h>
using namespace std;

//we use greedy algorithm for this question.
int main(){
int t;
cin >>t;
for(int i=0;i<t;i++){
    int n;
    cin >>n;
    vector<pair<int,int>> v; // to contain the end and start respectively

for (int j=1;j<=n;j++){
    int k;
    cin >>k;
    v.push_back({j+k,j});
    
}
int ans=1;
sort(v.begin(),v.end()); // sort acc to the end points of each tile
int mark=0;
for(int j=1;j<n;j++){
    if(v[j].second >= v[mark].first){ans+=1;mark=j;} // check for overlap
}
cout <<ans<<'\n';
}

    return 0;
}