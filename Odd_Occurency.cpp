//
//  Odd_Occurency.cpp
//  SOMA👩🏻‍💻
//
//  Created by JoSoJeong on 2021/12/11.
//

#include <unordered_map>
#include <vector>

using namespace std;
unordered_map<int, int> um;
int solution(vector<int> &A) {

    for(int i =0; i < (int)A.size(); i++){
        um[A[i]]++;
    }

    for(int i =0; i < (int)A.size(); i++){
        if(um[A[i]] % 2 != 0) {
            return A[i];
        }
    }

    return 0;

}
