#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> r;
        int i = 0;
        if(target == 0){
            ans.push_back(r);
            return ans;
        }
        while (i<candidates.size() && target - candidates[i] >= 0){
            r.push_back(candidates[i]);
            combinationSum(candidates,target-candidates[i]);
            i++;
            r.pop_back();
            ans.push_back(r);
        }
      
     return ans;
        
    } 


int main(){
  vector<int> ar;
    ar.push_back(2);
    ar.push_back(4);
    ar.push_back(6);
    ar.push_back(8);
    int n = ar.size();
    vector<vector<int>> vect = combinationSum(ar,8);
       for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }

    return 0;
}