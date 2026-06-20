#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        long long sx,sy,dx,dy;
        cin>>sx>>sy>>dx>>dy;

        if(dy<sy) cout<<"-1"<<"\n";
        else
        {
            long long mx,my;


            my=dy-sy;
            mx=sx+my;
            if(dx>mx) cout<<"-1"<<"\n";
            else
            {
               mx=mx-dx; 
               cout<<mx+my<<"\n";
            }
        
        }
    }
    return 0;
}