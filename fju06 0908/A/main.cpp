#include <iostream>

using namespace std;

int main()
{
    int q=1,n;
    long long ans=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        ans = ans * q;
        q++;
        while(ans%10 == 0)
            ans /= 10;
        ans %=10000000;
    }
    cout<<ans%10;
    return 0;
}
