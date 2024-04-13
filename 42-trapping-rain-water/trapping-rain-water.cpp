class Solution {
public:
    int trap(vector<int>& height) {
        int l = height.size();
        vector<int>leftgreaterMax(l, -1), rightgreaterMax(l, -1);
        rightgreaterMax[l-1] = height[l-1];
        for( int i = l-2; i>=0; i--){
            rightgreaterMax[i] = max(rightgreaterMax[i+1], height[i]);
        }

       leftgreaterMax[0] = height[0];
        for( int i = 1; i<l; i++){
            leftgreaterMax[i] = max(leftgreaterMax[i-1], height[i]);
        }

        //Now find the water contained
        int watercontained = 0;
        for( int i = 1; i<l-1; i++){
            // cout<<leftgreaterMax[i]<<" "<<rightgreaterMax[i]<<endl;
            watercontained += min(leftgreaterMax[i], rightgreaterMax[i]) - height[i];
        }

        return watercontained;

    }
};