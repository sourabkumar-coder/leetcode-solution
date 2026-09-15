class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = -1e9;
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int newonedelete = max(onedelete + arr[i], nodelete);
            int newnodelete = max(nodelete + arr[i], arr[i]);

            nodelete = newnodelete;
            onedelete = newonedelete;

            ans = max({ans, nodelete, onedelete});
        }

        return ans;
    }
};