#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int a[100][100];
	cout<<"enter the value of n & m:";
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"2d array is :"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	int x;
	cin>>x;
	bool flag=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==x){
				cout<<i<<" "<<j<<endl;
				flag=true;
			}
		}
	}
	if(flag){
		cout<<"element is found.";
	}
	else{
		cout<<"element is not found:";
	}
	return 0;
}
