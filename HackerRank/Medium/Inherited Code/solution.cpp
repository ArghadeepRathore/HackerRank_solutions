// HackerRank Problem: Inherited Code
// Link: https://www.hackerrank.com/challenges/inherited-code/problem
// Difficulty: Medium
// Language: cpp


/* Define the exception here */
class BadLengthException {
    private: 
        int n;
    public:
        BadLengthException(int errornumber) {
            n = errornumber;
        }
    
        int what() {return n;}
};

