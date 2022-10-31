#include <bits/stdc++.h>
using namespace std;

 bool special(vector<vector<int>>& matrix, int n){
         //Write code here
         
        for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
            if( matrix[i][i]!=0 || matrix[i][n-i-1]!=0){
                    return false;
            }
                 else{
                         if(i != j && i != n-j-1){
                         if(matrix[i][j]!=0  ){
                                 return false;
                         }
                 }
         }
         }
        }
                 return true;
 }

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
         vector<vector<int>> matrix(n, vector<int>(n));
         for (int i = 0; i < n; i++)
         for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
        
        int ans = special(matrix, n);
        if(ans==1) cout<<"true"<<endl;
        if(ans==0) cout<<"false"<<endl;
    }
}
