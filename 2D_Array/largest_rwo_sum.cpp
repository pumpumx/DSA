#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int count = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum=0,ans=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(sum>ans){
            ans=sum;
        }
        else{
            continue;
        }
        sum=0;
    }
    cout<<ans;
}