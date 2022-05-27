/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int> arr;
    int index = 0;
    int size = 0;
    
    void createArray(vector<NestedInteger>& nestedList) {
        for(int i = 0 ; i < nestedList.size() ; i++) {
            if(nestedList[i].isInteger()) {
                int val = nestedList[i].getInteger();
                arr.push_back(val);
            }
            else createArray(nestedList[i].getList());
        }
    }
    
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        createArray(nestedList);
        size = arr.size();
    }
    
    int next() {
        return arr[index++];
    }
    
    bool hasNext() {
        return index < size;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */