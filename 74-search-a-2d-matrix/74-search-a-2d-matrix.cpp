class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int row(0);
	for (int i = 0; i < matrix.size(); i++) {
		if (target <= matrix[i][matrix[0].size() - 1]) {
			row = i;
			break;
		}
	}
        int l=0,r=matrix[0].size()-1;
	while(l<=r){
        int m=(l+r)/2;
        if(target==matrix[row][m])return true;
        else if(target<matrix[row][m]){r=m-1;continue;}
        else if(target>matrix[row][m]){l=m+1;continue;}
    }
	return false;
}
};