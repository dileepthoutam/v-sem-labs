#include <bits/stdc++.h>
using namespace std;

struct Item {
	// object to store sum value and left index and right index 
	int sum;
	int left;
	int right;
	Item(int sum, int left, int right) {
		this->sum = sum;
		this->left = left;
		this->right = right;
	}
};

Item maxCrossingSubarraySum(vector<int>& nums, int start, int mid, int end) {
	int leftSum = INT_MIN, rightSum = INT_MIN;
	int sum = 0;
	int maxLeft, maxRight;

	// finding left sum
	for(int i=mid; i>=0; i--) {
		sum += nums[i];
		if (sum > leftSum) {
			leftSum = sum;
			maxLeft = i;
		}
	}
	// finding right sum
	sum = 0;
	for(int i=mid+1; i<=end; i++) {
		sum += nums[i];
		if (sum > rightSum) {
			rightSum = sum;
			maxRight = i;
		}
	}
	return Item(leftSum+rightSum, maxLeft, maxRight);
}
Item maxSubarraySum(vector<int>& nums, int start, int end) {
	if (start == end) {
		// if there is only one item, return itself
		return Item(nums[start], start, end);
	}
	int mid = start + (end-start)/2;
	// find left sum
	Item left = maxSubarraySum(nums, start, mid);
	// find right sum
	Item right = maxSubarraySum(nums, mid+1, end);
	// find crossing sum
	Item cross = maxCrossingSubarraySum(nums, start, mid, end);

	// if left sum if greater than both right sum and cross sum, return it
	if (left.sum > right.sum && left.sum > cross.sum)
		return left;
	// if right sum if greater than both left sum and cross sum, return it
	else if (right.sum > left.sum && right.sum > cross.sum)
		return right;
	// else return the cross sum
	else
		return cross;
}

int main() {
	
	int n; cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++)
		cin >> nums[i];

	Item result = maxSubarraySum(nums, 0, n-1);
	cout << result.sum << "\n";
	for(int i=result.left; i<=result.right; i++)
		cout << nums[i] << " ";

	cout << endl;


	return 0;
}
