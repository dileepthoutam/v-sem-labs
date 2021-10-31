#include <bits/stdc++.h>
using namespace std;
struct Job {
	int id;
	int deadline;
	int profit;
};
bool cmp(Job a, Job b) {
	return a.profit > b.profit;
}
pair< int, vector<int> > jobSequencing(vector<Job>& jobs) {
	sort(jobs.begin(), jobs.end(), cmp);
	int maxProfit = 0;
	int n = jobs.size();
	int nax = 0;
	for(auto job: jobs) {
		nax = max(nax, job.deadline);
	}
	vector<int> slots(n, -1);
	for(int i=0; i<n; i++) {
		for(int j=jobs[i].deadline-1; j>=0; j--) {
			if (slots[j] == -1) {
				slots[j] = jobs[i].id;
				maxProfit += jobs[i].profit;
				break;
			}
		}
	}
	return make_pair(maxProfit, slots);
}
int main() {
	int n; cin >> n;
	vector<int> ids, deadlines, profits;
	for(int i=0; i<n; i++)
		cin >> ids[i];
	for(int i=0; i<n; i++)
		cin >> deadlines[i];
	for(int i=0; i<n; i++)
		cin >> profits[i];
	vector<Job> jobs;
	for(int i=0; i<n; i++) {
		jobs.push_back(Job{ids[i], deadlines[i], profits[i]});
	}

	pair<int, vector<int> > ans = jobSequencing(jobs);
	cout << ans.first << endl;
	for (auto x: ans.second) {
		if (x != -1)
			cout << x << " ";
	}
	cout << endl;

	return 0;
}
