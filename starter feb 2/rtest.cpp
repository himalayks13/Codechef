#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ai[n];
    
    for(int j=0;j<n;j++){
        cin>>ai[j];
    }
    int i,count=n;
    
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
        if(ai[i]+ai[j]%2==0){
            ai[i]=ai[i]+ai[j];
            for(j=n-1;j>i+1;j--){
                ai[j-1]=ai[j];
            }
        }
        }
    }
    
    cout<<n<<endl;
    

    return 0;
}
   
}