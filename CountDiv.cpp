//
//  CountDiv.cpp
//  SOMA👩🏻‍💻
//
//  Created by JoSoJeong on 2021/12/11.
//

#include <stdio.h>

//int solution(int A, int B, int K) {
//    int cnt = 0;
//    for(int i = A; i <= B; i++){
//        if(i % K == 0) { cnt++; }
//    }
//    return cnt;
//}

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int min, max;
    
    min = A/K;
    max = B/K;
    
    if(A % K == 0)
        min--;
    
    
    return max - min;
}

