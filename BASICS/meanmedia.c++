class Solution {
public:
    int mean(vector<int>& arr) {
        long long sum = 0;
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        return sum / n;   // floor automatically
    }

    int median(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        if(n % 2 == 1) {
            // odd length
            return arr[n / 2];
        } else {
            // even length
            return (arr[n / 2 - 1] + arr[n / 2]) / 2;
        }
    }
};
