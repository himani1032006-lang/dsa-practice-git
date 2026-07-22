#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxi=0;
        int bb=p[0];
        for (int i=1;i<p.size();i++)
        {
            if(bb<p[i]){
                maxi=max(maxi,p[i]-bb);
            }
            bb=min(bb,p[i]);
        }
        return maxi;
 }
};