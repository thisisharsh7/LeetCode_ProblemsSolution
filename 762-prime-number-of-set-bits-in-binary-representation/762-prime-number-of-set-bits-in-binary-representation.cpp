#define ll long long
class Solution {
public:
    void primeSeive(int *prime){
        for(int i=3;i<1000001;i+=2){
            prime[i]=1;
        }
        for(ll i=3;i<1000001;i+=2){
            if(prime[i]){
                for(ll j=i*i;j<1000001;j+=i){
                    prime[j]=0;
                }
            }
        }
        prime[2]=1;
    }
    
    int countPrimeSetBits(int left, int right) {
        
        int prime[1000001]={0};
        primeSeive(prime);
        int cnt=0;
        for(int i=left;i<=right;i++){
            int n=__builtin_popcount(i);
            if(prime[n]){
                cnt++;
            }
        }
        return cnt;
    }
};