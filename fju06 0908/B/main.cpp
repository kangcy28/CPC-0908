#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m,odd=0,even=0;

    cin>>n>>m;
    static int q[1005][1005];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>q[i][j];
            if(q[i][j] != -1){
                if((i+j)%2)
                    even+=q[i][j];
                else
                    odd+=q[i][j];
            }
        }
    }
    cout<<abs(odd-even);
    return 0;
}
