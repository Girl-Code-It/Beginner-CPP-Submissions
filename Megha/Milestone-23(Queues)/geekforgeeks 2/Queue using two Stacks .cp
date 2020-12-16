
/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(x);
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code  
       if(s1.empty()){
           return -1;
       }
       
       int ans = s1.top();
       s1.pop();
       return ans;
}
