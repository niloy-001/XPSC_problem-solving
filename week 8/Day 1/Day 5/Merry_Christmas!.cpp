#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x;
    cin>>x;

    int arr[3]={1,2,4};
    int cnt=0;

   for(int i=0;i<3;i++)
   {
      if(x >=arr[i])
      {
        x-=arr[i];
        cnt++;
      }
      else
      {
        break;
      }
   }

   cout<<cnt<<endl;

    return 0;
}
