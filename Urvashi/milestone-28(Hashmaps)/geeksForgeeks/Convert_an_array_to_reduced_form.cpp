void Convert(int *arr, int n)
{
	int temp[n];
	for (int i = 0; i < n; i++)
		temp[i] = arr[i];
	sort(temp, temp + n);

	unordered_map<int, int> m;

	int val = 0;
	for (int i = 0; i < n; i++)
		m[arr[i]] = val++;

	for (int i = 0; i < n; i++)
		arr[i] = m[arr[i]];
}
