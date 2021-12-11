//
//  Max_Counter.cpp
//  SOMA👩🏻‍💻
//
//  Created by JoSoJeong on 2021/12/11.
//

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
//#include <vector>
//using namespace std;
//
//vector<int> solution(int N, vector<int> &A) {
//    int maxNum = 0;
//    vector<int> arr(N, 0);
//
//    for(int i = 0; i < (int)A.size(); i++){
//        int idx = A[i] - 1;
//        if(idx == N) {
//            for(int i = 0; i < (int)arr.size(); i++){
//                arr[i] = maxNum;
//            }
//         } // max counter
//        else {
//            arr[idx] += 1;
//            maxNum = arr[idx]; // max 값 업데이트
//        }
//
//    }
//    return arr;
//
//}

//max를 마지막에 한번만 수행하기
#include <vector>
using namespace std;

vector<int> solution(int N, vector<int> &A) {
    int maxNum = 0;

    int tempMax = 0;

    vector<int> arr(N, 0);

    for(int i = 0; i < (int)A.size(); i++){
        int idx = A[i];
        if(idx == N + 1) {
            tempMax = maxNum;
         } // max counter
        else {
            if(arr[idx-1] < tempMax){
                arr[idx-1] = tempMax + 1; // 만날때마다 최고값 + 1로 갱신
            }else {
                arr[idx-1] += 1;
            }
            
            if(arr[idx-1] > maxNum){
                maxNum = arr[idx-1]; // max 값 업데이트
            }
        }
        
    }

    for(int i =0; i < N; i++){
        if(arr[i] < tempMax){
            arr[i] = tempMax;
        }
    }
    return arr;

}
