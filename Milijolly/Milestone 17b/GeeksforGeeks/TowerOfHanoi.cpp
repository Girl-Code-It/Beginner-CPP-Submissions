//Tower of Hanoi
class Solution{
    public:
    // You need to complete this function
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
         if(N==1)
        {
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl ;
            return 1 ;        
        }
        int step1  = toh(N-1,from,aux,to); //source to helper
        
        cout<<"move disk "<<N<<" from rod "<<from << " to rod "<<to<<endl;
        int step2 = toh(N-1,aux,to,from); //from helper to destination
        
        return step1 + step2 + 1;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        moves = ob.toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}

