    int median(vector<vector<int>> &matrix, int r, int c){
         vector<int> ans;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        int n = ans.size();
        int x = n/2;
        
        int result;
        
        if(n%2==0){
            result = (ans[x-1]+ans[x+1])/2;
        }
        else{
            result = ans[x];
        }
        
        return result;      
    }
