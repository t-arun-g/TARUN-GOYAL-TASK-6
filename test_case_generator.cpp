#include <bits/stdc++.h>
using namespace std;


//code to generate T test cases
int main() {

  srand((unsigned) time(0));

  int T;
  cin <<T:
  for(int k=0;k<T;k++){
  int t=rand() %1000;

  cout <<t<<'\n';
  for(int i=0;i<t;i++){

    int n=rand()%2500;
    cout <<n<<' ';

    vector <int> v;
    for(int j=0;j<n;j++)v.push_back(rand()%200);
    for( auto m : v)cout <<m<<" ";
    cout <<"\n";
  }

  }
  return 0;

}