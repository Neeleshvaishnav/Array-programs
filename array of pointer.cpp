#include <iostream>
#include <algorithm>
using namespace std;

int main() {int n,i;
int arr[i];
cin >> n;
for( i=0;i<=n;i++)
{
    cin>>arr[i];
}
reverse(arr, arr +n);
for(i=0;i<=n;i++)
{
    cout<<arr[i]<<" ";
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

