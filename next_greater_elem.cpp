-----------------------very very optimised solution--------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
void next_greater_ele(long long int arr[],long long int n,long long int res[]){
    stack<long long int >s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[i]>=s.top()){
            s.pop();
        }
        res[i]=s.empty()?-1:s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long int res[n];
	    res[0]=0;
	    next_greater_ele(arr,n,res);
	}
	return 0;
}
