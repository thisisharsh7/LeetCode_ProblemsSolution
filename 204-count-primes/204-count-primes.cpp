class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool> prime(n+1,true); //using vector of (n+1) size for our convenience since for loop we use below starts with 2. Here I assume prime vector as boolean vector where each index of vector represents an element.
        
        prime[0]=prime[1]=false; //changing the value of first two vector elements to false even if we not do answer will remain same but it is to show that prime vector started with element 0 and 1 which is not prime and hence false and then starting our loop from int i=2 and 2 is first prime number
        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;
            }
            //making all the multiples of i to false since elements having more multiple than 1 and itself, are not prime.
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
        return cnt;
    }
};