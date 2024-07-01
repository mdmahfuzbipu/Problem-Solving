class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0, right = col - 1;
        int top_row = 0, bottom_row = row - 1;

        vector<int> spiralMatrix;

        while (top_row <= bottom_row && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                spiralMatrix.push_back(matrix[top_row][i]);
            }

            top_row++;

            for (int i = top_row; i <= bottom_row; i++)
            {
                spiralMatrix.push_back(matrix[i][right]);
            }
            right--;

            if (top_row <= bottom_row)
            {
                for (int i = right; i >= left; i--)
                {
                    spiralMatrix.push_back(matrix[bottom_row][i]);
                }
                bottom_row--;
            }

            if (left <= right)
            {
                for (int i = bottom_row; i >= top_row; i--)
                {
                    spiralMatrix.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return spiralMatrix;
    }
};