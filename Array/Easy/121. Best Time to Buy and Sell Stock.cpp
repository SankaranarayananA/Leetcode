class Solution {
    int mx;
public:
    int maxProfit(vector<int>& prices) {
        int l=INT_MAX;
        int  pft=0;
        int op =0;
        for(int x:prices){
            if(x<l) l= x;
            pft = x-l;
            if(pft>op){
                op=pft;
            }
        }
        return op;
    }
};
