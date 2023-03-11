#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        // freopen("error.txt", "w", stderr);
    #endif


    int t;
    cin >> t;
    int ans =t;
    while (t--)
    {
        int house;
        cin >> house;
        // cout<<house<<t<<"\n";
        double nc_l=0;
        double ac_l=0;
        double time=0;
        for(int xx = 0 ; xx<house ; xx++){

            double total_badrooms,r,s,h ;
            char x ;
            cin>>total_badrooms>>x>>r>>x>>s>>x>>h;

            double walls = 3*r+4*s+6*h;
            time += ((2.5+3.25*2)*walls)/3;
            ac_l += (walls*1.5)/3;
            nc_l += (walls*2.25*2)/3;
        }
        cout<<"Case #"<<ans-t<<": ";
        fprintf(stdout, "%.2f, %.2f, %.2f \n",time,ac_l , nc_l);
        
    }
    return 0;
}