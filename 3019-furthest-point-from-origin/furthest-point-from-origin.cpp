class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L = 0;
        int R = 0;
        int h = 0;
        // int n = moves.size();
        for(char ch : moves){
            if(ch == 'L') L++;
            else if(ch == 'R') R++;
            else h++;//h is hypen

        }
    return abs(L-R)+h;
    }
};