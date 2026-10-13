class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
        int n=intervals.size();
        bool insert=false;
        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(end<newInterval[0]){
                res.push_back(intervals[i]);
            }
            else if(start>newInterval[1]){
                if(insert==false){
                    res.push_back(newInterval);
                    insert=true;
                }
                res.push_back(intervals[i]);
            }
            else{
                newInterval[0]=min(newInterval[0],start);
                newInterval[1]=max(newInterval[1],end);
            }

           
        }  
        if(insert==false){
            res.push_back(newInterval);
        }  
        return res;  
    }
};