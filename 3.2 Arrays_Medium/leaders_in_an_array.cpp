//BRUTE FORCE SOLUTION
//for every single element in nums, do a linear search on the right side of the array and check if any element on the right is bigger than our current element
//optimal solution
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
         vector<int> l;
        int max1 = arr[n - 1];
        l.push_back(max1);
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max1) {
                l.push_back(arr[i]);
                max1 = arr[i];
            }
        }
        reverse(l.begin(), l.end());
        return l;
        
    }
};


