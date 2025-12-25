#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        priority_queue<int , vector<int>, greater<int>> minHeap;
        unordered_map<int , int> m;
        vector<double> ans;
        if(k==1){
            for(int i=0 ; i < nums.size(); i++){
                ans.push_back(nums[i]*1.00000);
            }
            return ans;
        }
        int temp = nums[0];
        if( k % 2 != 0){
            for(int i = 0; i < k; i++){
                if(i==0) continue;
                else{
                    if(maxHeap.size() == minHeap.size()){
                        if(nums[i] >= temp) minHeap.push(nums[i]);
                        else maxHeap.push(nums[i]);
                    }
                    else{
                        if(maxHeap.size() > minHeap.size()){
                            if(nums[i] >= temp){
                                minHeap.push(nums[i]);
                            }
                            else{
                                if(nums[i] > maxHeap.top()){
                                    minHeap.push(temp);
                                    temp = nums[i];
                                }
                                else {
                                    minHeap.push(temp);
                                    temp = maxHeap.top();
                                    maxHeap.pop();
                                    maxHeap.push(nums[i]);
                                }
                            }
                        }
                        else{
                            if(nums[i] <= temp){
                                maxHeap.push(nums[i]);
                            }
                            else{
                                if(nums[i] < minHeap.top()){
                                    maxHeap.push(temp);
                                    temp = nums[i];
                                }
                                else {
                                    maxHeap.push(temp);
                                    temp = minHeap.top();
                                    minHeap.pop();
                                    minHeap.push(nums[i]);
                                }
                            }
                        }
                    }
                }
            }
            ans.push_back(temp*1.00000);
        }
        else{
            maxHeap.push(nums[0]);
            for(int i = 1; i < k; i++){
                if(maxHeap.size() == minHeap.size()){
                        if(nums[i] >= minHeap.top()) minHeap.push(nums[i]);
                        else maxHeap.push(nums[i]);
                }
                else if(maxHeap.size() > minHeap.size()){
                        if(nums[i] >= maxHeap.top()){
                            minHeap.push(nums[i]);
                        }
                        else{
                            minHeap.push(maxHeap.top());
                            maxHeap.pop();
                            maxHeap.push(nums[i]);
                        }
                }
                else {
                    if(nums[i] >= maxHeap.top()){
                        if(nums[i] <= minHeap.top()) maxHeap.push(nums[i]);
                        else {
                            maxHeap.push(minHeap.top());
                            minHeap.pop();
                            minHeap.push(nums[i]);
                        }
                    }
                    else{
                        maxHeap.push(nums[i]);
                    }
                }

            }
            double result = ((maxHeap.top()*1.0 + minHeap.top()*1.0) / 2.0)*1.00000;
            ans.push_back(result);

        }
        // int minNo = minHeap.size();
        // int maxNo = maxHeap.size();
        for(int i = k; i < nums.size(); i++){
            if( k % 2 != 0){
                if(nums[i-k] == temp){
                    if(nums[i] > maxHeap.top()){
                        if(nums[i] <= minHeap.top()) temp = nums[i];
                        else{
                            temp = minHeap.top();
                            minHeap.pop();
                            while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                                m[minHeap.top()]--;
                                if(m[minHeap.top()] == 0) m.erase(minHeap.top());
                                minHeap.pop();
                            }
                            minHeap.push(nums[i]);  
                        }
                    }
                    else{
                        temp = maxHeap.top();
                        maxHeap.pop();
                        while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                            m[maxHeap.top()]--;
                            if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                            maxHeap.pop();
                        }
                        maxHeap.push(nums[i]);  
                    }
                }
                else if(nums[i-k] < temp){
                    if( nums[i-k] == maxHeap.top() ){
                        maxHeap.pop();
                        while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                            m[maxHeap.top()]--;
                            if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                             maxHeap.pop();
                        }
                        if(nums[i] < temp){
                            maxHeap.push(nums[i]);
                        }
                        if(nums[i] >= temp){
                            if(nums[i] <= minHeap.top()){
                                maxHeap.push(temp);
                                temp = nums[i];
                            }
                            else{
                                maxHeap.push(temp);
                                temp = minHeap.top();
                                minHeap.pop();
                                while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                                    m[minHeap.top()]--;
                                    if(m[minHeap.top()] == 0) m.erase(minHeap.top());
                                    minHeap.pop();
                                }
                                minHeap.push(nums[i]);
                            }
                        }
                    }
                    else {
                        m[nums[i-k]]++;
                        if(nums[i] < temp){
                            maxHeap.push(nums[i]);
                        }
                        if(nums[i] >= temp){
                            if(nums[i] <= minHeap.top()){
                                maxHeap.push(temp);
                                temp = nums[i];
                            }
                            else{
                                maxHeap.push(temp);
                                temp = minHeap.top();
                                minHeap.pop();
                                while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                                    m[minHeap.top()]--;
                                    if(m[minHeap.top()] == 0) m.erase(minHeap.top());
                                    minHeap.pop();
                                }
                                minHeap.push(nums[i]);
                            }
                        }
                    }
                }
                else {//(nums[i-k] > temp)
                    if( nums[i-k] == minHeap.top() ){
                        minHeap.pop();
                        while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                            m[minHeap.top()]--;
                            minHeap.pop();
                        }
                        if(nums[i] > temp){
                            minHeap.push(nums[i]);
                        }
                        else {
                            if(nums[i] >= maxHeap.top()){
                                minHeap.push(temp);
                                temp = nums[i];
                            }
                            else {
                                minHeap.push(temp);
                                temp = maxHeap.top();
                                maxHeap.pop();
                                while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                                    m[maxHeap.top()]--;
                                    if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                                    maxHeap.pop();
                                }
                                maxHeap.push(nums[i]);
                            }
                        
                        }
                    }
                    else {
                        m[nums[i-k]]++;
                        if(nums[i] > temp){
                            minHeap.push(nums[i]);
                        }
                        else {
                            if(nums[i] >= maxHeap.top()){
                                minHeap.push(temp);
                                temp = nums[i];
                            }
                            else {
                                minHeap.push(temp);
                                temp = maxHeap.top();
                                maxHeap.pop();
                                while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                                    m[maxHeap.top()]--;
                                    if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                                    maxHeap.pop();
                                }
                                maxHeap.push(nums[i]);
                            }
                        
                        }
                    }
                }
                ans.push_back(temp*1.00000);
            }
            else{
                if(nums[i-k] <= maxHeap.top()){
                    if(nums[i-k] == maxHeap.top()){
                        maxHeap.pop();
                        while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                                m[maxHeap.top()]--;
                                if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                                maxHeap.pop();
                        }
                        if(nums[i] <= minHeap.top()){
                            maxHeap.push(nums[i]);
                        }
                        else{
                            maxHeap.push(minHeap.top());
                            minHeap.pop();
                            while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                                m[minHeap.top()]--;
                                if(m[minHeap.top()] == 0) m.erase(minHeap.top());
                                minHeap.pop();
                            }
                            minHeap.push(nums[i]);
                        }
                    }
                    else{
                        m[nums[i-k]]++;
                        if(nums[i] <= minHeap.top()){
                            maxHeap.push(nums[i]);
                        }
                        else{
                            maxHeap.push(minHeap.top());
                            minHeap.pop();
                            while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                                m[minHeap.top()]--;
                                if(m[minHeap.top()] == 0) m.erase(minHeap.top());
                                minHeap.pop();
                            }
                            minHeap.push(nums[i]);
                        }
                    }
                }
                else{
                    if(nums[i-k] == minHeap.top()){
                        minHeap.pop();
                        while(!minHeap.empty() && m.find(minHeap.top()) != m.end()){
                                m[minHeap.top()]--;
                                if(m[minHeap.top()] == 0) m.erase(minHeap.top());
                                minHeap.pop();
                        }
                        if(nums[i] >= maxHeap.top()){
                            minHeap.push(nums[i]);
                        }
                        else{
                            minHeap.push(maxHeap.top());
                            maxHeap.pop();
                            while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                                m[maxHeap.top()]--;
                                if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                                maxHeap.pop();
                            }
                            maxHeap.push(nums[i]);
                        }
                    }
                    else{
                        m[nums[i-k]]++;
                        if(nums[i] >= maxHeap.top()){
                            minHeap.push(nums[i]);
                        }
                        else{
                            minHeap.push(maxHeap.top());
                            maxHeap.pop();
                            while(!maxHeap.empty() && m.find(maxHeap.top()) != m.end()){
                                m[maxHeap.top()]--;
                                if(m[maxHeap.top()] == 0) m.erase(maxHeap.top());
                                maxHeap.pop();
                            }
                            maxHeap.push(nums[i]);
                        }
                    }
                }
                double result = ((maxHeap.top()*1.0 + minHeap.top()*1.0) / 2.0)*1.00000;
                ans.push_back(result); 
            }
        }
        return ans;
    }
int main(){
    // vector<int> nums = {1,3,-1,-3,5,3,6,7};
    //ans -> [1.00000,-1.00000,-1.00000,3.00000,5.00000,6.00000]
    // vector<int> nums = {1,2,3,4,2,3,1,4,2};
    //ans -> [2.00000,3.00000,3.00000,3.00000,2.00000,3.00000,2.00000]
    vector<int> nums = {-2147483648,-2147483648,2147483647,-2147483648,1,3,-2147483648,-100,8,17,22,-2147483648,-2147483648,2147483647,2147483647,2147483647,2147483647,-2147483648,2147483647,-2147483648};
    //ans -> {[-1073741823.50000,-1073741823.50000,-49.50000,-49.50000,2.00000,5.50000,-46.00000,-46.00000,12.50000,19.50000,1073741834.50000,2147483647.00000,2147483647.00000,2147483647.00000,2147483647.00000]}
    int k = 6;
    vector<double> arr = medianSlidingWindow(nums, k);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"  , ";
    }
}