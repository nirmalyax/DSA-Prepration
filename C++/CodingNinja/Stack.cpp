/*Problem statement
You are given a QUEUE containing ‘N’ integers and an integer ‘K’. You need to reverse the order of the first ‘K’ elements of the queue, leaving the other elements in the same relative order.

You can only use the standard operations of the QUEUE STL:

1. enqueue(x) : Adds an item x to rear of the queue
2. dequeue() : Removes an item from front of the queue
3. size() : Returns number of elements in the queue.
4. front() : Finds the front element.
For Example:
Let the given queue be { 1, 2, 3, 4, 5 } and K be 3.
You need to reverse the first K integers of Queue which are 1, 2, and 3.
Thus, the final response will be { 3, 2, 1, 4, 5 }.*/


#include <bits/stdc++.h> 

queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    if(k<=0 && k>q.size()){
        return q;
    }

    stack<int> tempStack;
    
    //push the first K elements into the stack
    for(int i=0; i<k ; ++i){
        tempStack.push(q.front());
        q.pop();
    }

    //pushing the elements back to the que from the stack
    while(!tempStack.empty()){
        q.push(tempStack.top());
        tempStack.pop();
    }

    //pushing the remaining elements without reversing 
    for(int i=0; i<q.size() - k ; ++i){
        q.push(q.front());
        q.pop();
    }

    return q;
}


int main() {
    // Example usage
    queue<int> myQueue;

    // Input the elements into the queue
    int n, k, num;
    cout << "Enter the number of elements in the queue: ";
    cin >> n;

    cout << "Enter the elements of the queue: ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        myQueue.push(num);
    }

    cout << "Enter the value of K: ";
    cin >> k;

    // Call the function to reverse the first 'K' elements of the queue
    queue<int> modifiedQueue = reverseElements(myQueue, k);

    // Display the modified queue
    cout << "Modified Queue: ";
    while (!modifiedQueue.empty()) {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }

    return 0;
}