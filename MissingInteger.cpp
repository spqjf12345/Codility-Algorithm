//
//  MissingInteger.cpp
//  SOMA👩🏻‍💻
//
//  Created by JoSoJeong on 2021/12/11.
//
#include <algorithm>
#include <vector>
using namespace std;

//int solution(vector<int> &A) {
//    if(A.size() == 1) {
//        if(A[0] == 1) { return 2; }
//        else {
//            return 1;
//        }
//    }
//    sort(A.begin(), A.end());
//
//    //negative number
//    if(A[A.size() - 1] < 0) { return 1; }
//
//    for(int i = 1; i < (int) A.size(); i++){
//        if(A[i-1] < 0 && A[i] < 0) { continue; }
//
//        if(abs(A[i-1] - A[i]) <= 1){
//            continue;
//        }else {
//            if(A[i-1] + 1 > 0) { return A[i-1] + 1; }
//        }
//    }
//
//    return A[A.size() - 1] + 1;
//}


int solution(vector<int> &A) {
    int len = (int)A.size();
    int minVal = 1;

    // sort
    sort(A.begin(), A.end());

    //
    for(int i=0; i<len; i++){
        if(A[i] == minVal){
            minVal++;
        }
    }
    return minVal;
}






