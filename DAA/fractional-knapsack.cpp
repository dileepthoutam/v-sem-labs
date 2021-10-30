#include <bits/stdc++.h>
using namespace std;

struct Item {
	int value;
	int weight;
};

bool comparator(Item a, Item b) {
	double x = (double)a.value/a.weight;
	double y = (double)b.value/b.weight;
	return x>y;
}

double maximumProfit(vector<Item>& items, int capacity) {
	sort(items.begin(), items.end(), comparator);
	double totalValue = 0.0;
	int currentWeight = 0;

	for(auto item: items) {
		if (currentWeight + item.weight <= capacity) {
			currentWeight += item.weight;
			totalValue += item.value;
		} else {
			int remain = capacity - currentWeight;
			totalValue += item.value * (double)remain/item.weight;
			break;
		}
	}
	return totalValue;
}

int main() {
	int n, capacity; 
	cin >> n >> capacity;
	vector<Item> items(n);
	for(auto& item: items)
		cin >> item.value;
	for(auto& item: items)
		cin >> item.weight;

	double result = maximumProfit(items, capacity);
	cout << result << "\n";

	return 0;
}
