// week09-1b.cpp 學習計畫 Matrix 第2題
// LeetCode 1572. Matrix Diagonal Sum
// 矩陣，希望把 兩條對角線 上面的數字加起來

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); // 矩陣大小
        int ans = 0;
        // 迴圈裡，要查對角線 方法1：查兩條對角線
        for(int i=0; i<N; i++) // 左上到右下
        {
            for(int j=0; j<N; j++) // 左下到右上
            {
                if(i==j || i+j==N-1) ans += mat[i][j];
            }
        }
        return ans;
    }
};
