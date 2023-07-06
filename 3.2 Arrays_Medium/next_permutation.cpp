//BRUTE FORCE SOLUTION 
// Generate all possbile permutations of length N (T.C = n! X n)
//Store all possible permutations in sorted order
// linear search the list and find out the current permutation
//return the next permutation
//if current permutation is last permuation return the first permutation


//BETTER SOLUTION
//in c++ STL library there exists a next_permutation function which takes two paramters as next_permutation(v.begin(),v.end())

//Optimised Solution
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
         bool flag = true;
int index = -1;
for (int i = n - 2; i >= 0; i--) {
    if (arr[i] < arr[i + 1]) {
        flag = false;
        index = i;
        break;
    }
}
if (flag) {
    reverse(arr.begin(), arr.end());
   
} else {
    for (int i = n - 1; i > index; i--) {
        if (arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
   
}
    }
};