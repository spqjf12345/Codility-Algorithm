//
//  Cyclic_Rotation.cpp
//  SOMA👩🏻‍💻
//
//  Created by JoSoJeong on 2021/12/11.
//

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    //자기 자신 순환시 자기 반환
    if((int)A.size() == K) { return A; }

    //empty array
    if((int)A.size() == 0) { return A; }

    vector<int>::iterator it = A.begin();
    for(int i =0; i < K; i++){
        int idx = (int)A.size() - 1;
        int value = A[idx];
        A.erase(A.begin() + idx);
        A.insert(it, value);
    }
    return A;
}
