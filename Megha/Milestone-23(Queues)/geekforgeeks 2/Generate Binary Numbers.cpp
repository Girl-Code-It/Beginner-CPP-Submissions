// Function to print all binary numbers upto n

vector<string> generate(long long N)
{
	// Your code here
	vector<string> v;
	queue<string> q;
	
	q.push("1");
	for(int i=1;i<=N;i++){
	    v.push_back(q.front());
	    q.push(q.front() + "0");
	    q.push(q.front() + "1");
	    q.pop();
	}
	
	return v;
}

//Expected Time Complexity : O(N log2N)
//Expected Auxilliary Space : O(N log2N)

