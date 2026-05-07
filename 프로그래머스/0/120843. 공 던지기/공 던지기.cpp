#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 2*k % numbers.size() - 1;
    
    if (answer > 0)
    {
        return answer;
    }
    else if (answer == 0 )
    {
        return numbers.size();
    }
    else
    {
        return numbers.size() + answer;
    }
}