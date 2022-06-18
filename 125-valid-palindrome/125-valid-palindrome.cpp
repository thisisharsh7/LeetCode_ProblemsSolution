class Solution 
{
    private:
        char check(char ch){
            
            if ((ch>='0' && ch<='9') || (ch>='a' && ch<='z')){
                return ch;
            }else if (ch>='A' && ch<='Z')
            {
                char temp = ch - 'A' + 'a';
                return temp;
            }
            else{
                return '\0';//every non alpha character is treate as space
            }
        }

    public:
        bool isPalindrome(string s) 
        {
            int start=0;
            int end=s.length()-1;
            bool is_palindrome=1;

            while(start<end){   
                if (check(s[start])==check(s[end])){
                    start++;
                    end--;
                }else if (check(s[start])=='\0'){
                    start++;
                }else if (check(s[end])=='\0'){
                    end--;
                }else{
                    is_palindrome=0;
                    break;
                }
            }
            return is_palindrome;
        }
};