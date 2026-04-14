class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int uniquepro = 0;
        
        // Step 1: XOR of all elements
        for(int num : nums){
            uniquepro ^= num;
        }

        // Step 2: Find rightmost set bit
        int diff = 0;
        int temp = uniquepro;
        while((temp & 1) == 0){
            diff++;
            temp >>= 1;
        }

        int classify = 1 << diff;

        int one = 0, second = 0;

        // Step 3: Divide into two groups
        for(int num : nums){
            if((num & classify) != 0){
                one ^= num;
            } else {
                second ^= num;
            }
        }

        return {one, second};
    }
};