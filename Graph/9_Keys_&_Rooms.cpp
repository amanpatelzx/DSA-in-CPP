class Solution {//leetcode 841
public:
//Input: rooms = [[1],[2],[3],[]]
//Output: true

//Input: rooms = [[1,3],[3,0,1],[2],[0]]
//Output: false

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> key; // this store all key available
        queue<int> q;// i use bfs
        for(auto ele : rooms[0]) q.push(ele);
        key.insert(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(key.count(curr)) continue;
            if(!key.count(curr)) for(auto ele : rooms[curr]) q.push(ele);
            key.insert(curr);
        }
        int sum = 0;
        for(auto ele : key){
           sum += ele;
        }
        int n = rooms.size()-1;
        int totalSum =(n)*(n+1)/2;
        cout<<"TotalSum = " << totalSum<<endl;
        cout<<sum;
        if(sum != totalSum) return false;
        return true;

//1st way of solving

        // unordered_set<int> key; // this store all key available
        // vector<bool> roomOpened(rooms.size() , false);// check whether room is opened or not
        // roomOpened[0] = true;
        // queue<int> q;// i use bfs
        // for(auto ele : rooms[0]) q.push(ele);
        // key.insert(0);
        // while(!q.empty()){
        //     int curr = q.front();
        //     q.pop();
        //     if(roomOpened[curr]) continue; // room is already opened here 
        //     if(!key.count(curr)){//if key is not used once
        //         for(auto ele : rooms[curr]){
        //             q.push(ele);
        //         }
        //         roomOpened[curr] = true;// marked room is opened once;
        //     }
        //     key.insert(curr);
        // }
        // for(auto ele : roomOpened){
        //     if(ele == false) return false;// if any room is not opened 
        // }
        // return true;//means all room is already opened 
    }
};