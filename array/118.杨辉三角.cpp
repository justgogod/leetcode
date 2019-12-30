class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if(numRows <=0)
            return result;
        vector<int> temp;
        temp.push_back(1); 
        result.push_back(temp);
        for(int i = 1; i < numRows; i++)
        {
            temp.clear();
            temp.push_back(1);
            int num = i + 1;
            for(int j = 1; j < num-1; j++)
            {
                int resulttemp = result[i-1][j-1] + result[i-1][j];
                temp.push_back(resulttemp);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};