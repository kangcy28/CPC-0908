#include <iostream>
#include <vector>
using namespace std;
vector<int> v1;
vector<int> v2;

int main()
{
    int n;

    cin>>n;
    int p[n],q[n];

    for(int i=1;i<=n;i++)
        cin>>p[i];
    for(int i=1;i<=n;i++)
        cin>>q[i];
    for(int i=1;i<=n;i++){
        if(p[i]>q[i]){
            for(int j=0;j<p[i]-q[i];j++)
                v1.push_back(i);
        }else if(p[i]<q[i]){
             for(int j=0;j<q[i]-p[i];j++)
                v2.push_back(i);
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" "<<v2[i]<<endl;
    return 0;
}
