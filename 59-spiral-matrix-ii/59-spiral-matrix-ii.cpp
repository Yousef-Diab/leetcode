class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num = 1;
	vector<vector<int>> matrix(n, vector<int>(n));
	int rightLim = n - 1, lowerLim = n - 1, upperLim = 0, leftLim = 0;int i = 0, j = 0;
	if (n == 1) {
		matrix[0][0] = 1;
		return matrix;
	}
	else if (n == 2) {
		matrix[0][0] = 1; matrix[0][1] = 2; matrix[1][1] = 3; matrix[1][0] = 4;
		return matrix;
	}
        while (leftLim<=rightLim) {
		
		if (i == upperLim && j == rightLim) {
			upperLim++;
			for (i=upperLim; i <= lowerLim; i++)
				matrix[i][j] = num++;
			i--;
			continue;
		}
		else if (i == upperLim) {
			for (; j <= rightLim; j++)
				if (matrix[i][j] == 0)
				matrix[i][j] = num++;
			j--;
			continue;
		}
		else if (i == lowerLim && j == rightLim) {
			rightLim--;
			for (j=rightLim; j >= leftLim; j--)
				matrix[i][j] = num++;
			j++;
		}
		else if (i == lowerLim && j == leftLim) {
			lowerLim--;
			for (i=lowerLim; i >= upperLim; i--)
				matrix[i][j] = num++;
			i++;
			leftLim++;
		}
	}
        return matrix;
    }
};