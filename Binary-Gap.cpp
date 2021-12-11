//
//  Binary-Gap.cpp
//  SOMA👩🏻‍💻
//
//  Created by JoSoJeong on 2021/12/11.
//

#include <algorithm>
using namespace std;

int toBinary(int n)
{
    int max_count = 0;
    int zero_count = 0;

    //Skip the tailing zero
    while (n > 0 and n % 2 == 0) {
        n /= 2;
    }

    while (n != 0){
        if(n % 2 == 0){
            zero_count += 1;
        }else {
            max_count = max(zero_count, max_count);
            zero_count = 0;
        }
        n /= 2;
    }

    return max_count;
}

int solution(int N) {
    return toBinary(N);
}
