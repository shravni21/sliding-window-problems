class Solution {
public:
    
    string digits = "123456789";
    
    int getSize(int d){
        int count = 0;
        while(d){
            count++;
            d = d/10;
        }    
        
        return count;
    }
    
    void check(int w, int low, int high, vector<int>& res){
        
        for(int i=0; i+w <= 9 ; i++){
            int d = stoi(digits.substr(i, w));
            if(low <= d && d <= high){
                res.push_back(d);  
            } 
        }
    }
    
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        
        int l = getSize(low);
        
        int h = getSize(high);
        
        for(int w = l; w <= h; w++){
            check(w, low, high, res);
        }
        
        return res;
    }
};