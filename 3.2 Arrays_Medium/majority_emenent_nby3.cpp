//Brute force solution
// iterate through the whole list,and for each element check the entire list   
// if each eleemnt in the list appears more than floor of n/3, then it add it to the ans,
// also by intuition since for an element to appear more than the floor of n/3 times, only two such elements are possible, for example n=12,
// floor of n/3 = 4
// greater than floor is 5
// 2*5 =10
// so another majority element is not possible

// //optimised solution
// obviously use hasing, use unordered_map or ordered map