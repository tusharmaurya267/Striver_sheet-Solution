/*

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

*/

class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>v;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        for(auto x:v){
            int r=x.first;int c=x.second;
           
            for(int j=0;j<col;j++){
                matrix[r][j]=0;
            }
            
            for(int j=0;j<row;j++){
                matrix[j][c]=0;
            }
        
        }
    }
};