class Solution {//leetcode 733
public:
    // vector<vector<bool>> visited;
    void f(vector<vector<int>> &image , int sr, int sc , int color,  int val){
        if(sr < 0 || sc < 0 || sr == image.size() || sc == image[0].size()) return;
        if(image[sr][sc] != val) return;
        // if(visited[sr][sc] == true) return;
        if(image[sr][sc] == val){
             image[sr][sc] = color;
            //  visited[sr][sc] = true;
        }
        f(image , sr + 1, sc , color , val);//down
        f(image , sr , sc - 1 , color , val);//left
        f(image , sr , sc + 1, color , val);//right
        f(image , sr - 1, sc , color , val);//up
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        // visited.resize(image.size() , vector<bool>(image[0].size() , false));
        f(image , sr , sc , color , image[sr][sc]);
        return image;
    }
};
//Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
//Output: [[2,2,2],[2,2,0],[2,0,1]]

//Input: image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0
//Output: [[0,0,0],[0,0,0]]