#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k,int mid){
    int cowCount=1;
    int lastPos=stalls[0];
    
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int main()
{
    //    Write your code here.
    vector<int>stalls={4,2,1,3,6};
    sort(stalls.begin(),stalls.end());
        int k=2;
        int s=0,ans=-1;
        int n=stalls.size();
        int e=stalls[n-1];
        int mid = s +(e-s)/2;
        while(s<=e){
            if(isPossible(stalls,k,mid)){
              ans = mid;
                s =mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s +(e-s)/2;
        }
    cout<<ans<<endl;
}
