//
//  Cyclic_Rotation.cpp
//  SOMAπ©π»βπ»
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
    //μκΈ° μμ  μνμ μκΈ° λ°ν
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
