 void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 

        for(int i  = 0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
    }