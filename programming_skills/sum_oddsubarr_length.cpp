// Day 6
// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
// reference :
// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/discuss/1248892/C%2B%2B-solution-O(n)-well-explained
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int sumOddLengthSubarrays(vector<int> &a) {
    int n = a.size();
    int x;
    int s = 0;
    // lets discuss tc: 1,4,2,5,3
    // so odd length subsarrays will be 1 4 2 5 3
    //                                  1 4 2
    //                                    4 2 5
    //                                      2 5 3
    //                               +  1 4 2 5 3
    //                             ------------------
    //                            1*3+4*4+2*5+5*4+3*3

    for (int i = 0; i < n; i++) {
      x = ceil(
          (((i + 1) * (n - i))) /
          (2 *
           1.0)); // how many times? so firstly we need to know
                  // how many subarrays can be build that start from that
                  // particular index element & end with that particular index
                  // element=(i+1)*(n-i) but how  (i+1)*(n-i) total subarrays...
                  // for ex: 1,2,3,4,5 the subarrays including element at index
                  // 0: {1},{1,2},{1,2,3},{1,2,3,4},{1,2,3,4,5} = 5
                  //                                    index 1:
                  //                                    {2},{2,3},{2,3,4},{2,3,4,5}+
                  //                                    {1,2},{1,2,3}{1,2,3,4}{1,2,3,4,5}=8
                  //                                    index 2:
                  //                                    {3},{3,4},{3,4,5}+{1,2,3}{1,2,3,4}{1,2,3,4,5}+{2,3},{2,3,4},{2,3,4,5}=9
                  //                                    index 3: {4},{4,5}
                  //                                    +{1,2,3,4},{1,2,3,4,5}+{2,3,4},{2,3,4,5}+{3,4},{3,4,5}=8
                  //                                    index 4:
                  //                                    {5}+{1,2,3,4,5}+{2,3,4,5}+{3,4,5}+{4,5}=5
                  // by observing we found that no. of total subarrays that
                  // start with that value are (n-i) ex i=1,total subarrays that
                  // start with (a[1]=2) =(5-1)
                  //                            no. of total subarrays that end
                  //                            with that value are (i+1) ex
                  //                            i=1,total subarrays that end
                  //                            with (a[1]=2) =(1+1)
                  // so total combinations will be (n-i)*(i+1)
      // so now, we need number of odd length subarrays
      // that will be ceil of half of total numbers of suarrays i.e ,
      // ceil(((i+1)*(n-i))/2)
      // but why ceil ?, so observe that no. of odd length subarrays are either
      // one extra or equal to no. of even length subarrays
      // so if we half we will get only half not that one extra odd length (if
      // exsits) , thats why we used ceil function as ceil function is given
      // double value to i multiplied (1.0) to it.

      s += a[i] * x;
    }

    return s;

    // Hope you got clear explanation
  }
};