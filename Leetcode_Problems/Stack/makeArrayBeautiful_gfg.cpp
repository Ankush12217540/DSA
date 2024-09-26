
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        
        stack<int>temp;
        for(int i=0; i<arr.size(); i++){
            if(temp.empty()){
                temp.push(arr[i]);
            }
            else if(arr[i]>=0){
                if(temp.top()>=0){
                    temp.push(arr[i]);
                }
                else{
                    temp.pop();
                }
            }
            else{
                if(temp.top()<0){
                    temp.push(arr[i]);
                }
                else{
                    temp.pop();
                }
            }
        }
            
            vector<int>ans(temp.size());
            int i = temp.size() - 1;
                while(!temp.empty()){
                    ans[i]=temp.top();
                    i--;
                    temp.pop();
                }
                return ans;
        
    }
};