// #include<iostream>//good question understand it
// #include<queue>
// using namespace std;
// int main(){
//     int k=3;
//     int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
//     //ans[]={-1,-1,-2,-5,-5,-5,0,-8}
//     int n=sizeof(arr)/4;
//     int ans[n+k-1];
//     queue<int> q;
//     for(int i=0;i<n;i++) if(arr[i]<0) q.push(i);
//     for(int i=0;i<n-k+1;i++){
//         if(q.front()<i) q.pop();
//         if(q.front()>=i && q.front()<i+k) ans[i]=arr[q.front()];
//         else ans[i]=0;
//     }
//     for(int i=0;i<n-k+1;i++){
//         cout<<ans[i]<<", ";
//     }
    
    
// }
#include<iostream>//above is my code , and what the mistake is given there
#include<queue>
using namespace std;

int main(){
    int k = 3;
    int arr[] = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n - k + 1];

    queue<int> q;

    for(int i = 0; i < n; i++){
        if(arr[i] < 0) q.push(i);
    }

    for(int i = 0; i <= n - k; i++){
        // Remove indices that are out of current window
        while(!q.empty() && q.front() < i) q.pop();

        // Check if front index is within the window
        if(!q.empty() && q.front() < i + k)
            ans[i] = arr[q.front()];
        else
            ans[i] = 0;
    }

    for(int i = 0; i <= n - k; i++)
        cout << ans[i] << ", ";
}
