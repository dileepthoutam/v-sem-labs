#include <bits/stdc++.h>
using namespace std;

pair<int, int> min_and_max(vector<int> &nums, int start, int end)
{
	if (start == end)
		return make_pair(nums[start], nums[end]);
	else if (end - start == 1)
		return make_pair(min(nums[start], nums[end]), max(nums[start], nums[end]));
	int mid = start + (end - start) / 2;
	pair<int, int> res1 = min_and_max(nums, start, mid);
	pair<int, int> res2 = min_and_max(nums, mid + 1, end);

	return make_pair(min(res1.first, res2.first), max(res1.second, res2.second));
}

int main()
{
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int &num : nums)
		cin >> num;
	pair<int, int> result = min_and_max(nums, 0, n - 1);
	cout << result.first << " " << result.second << "\n";

	return 0;
}
