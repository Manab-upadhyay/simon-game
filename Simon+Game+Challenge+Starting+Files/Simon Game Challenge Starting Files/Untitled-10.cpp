#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)
            count1++;
            else
            count2++
             }
        if(count1>=1&&count2>=1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
