class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {

        if (rec1[2] <= rec2[0] ||   // rec1 completely left
            rec2[2] <= rec1[0] ||   // rec2 completely left
            rec1[3] <= rec2[1] ||   // rec1 completely below
            rec2[3] <= rec1[1])     // rec2 completely below
        {
            return false;
        }

        return true;
    }
};