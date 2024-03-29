#include <bits//stdc++.h>
using namespace std;

int main(){
    int n, b2case = 1;
    while(cin >> n){
        int numberArray[n];
        for(int i = 0; i < n; i++){
            cin >> numberArray[i];
        }
        
        vector<int> b2;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                b2.push_back(numberArray[i]+numberArray[j]);
            }
        }
        sort(b2.begin(), b2.end());
        
        bool isB2 = true;
        for(int i = 0; i < b2.size(); i++){
            if(b2[i] == b2[i+1]){
                isB2 = false;
            }
        }
        
        printf("Case #%d: ", b2case);
        if(isB2){
            cout << "It is a B2-Sequence." << endl;
        }
        else{
            cout << "It is not a B2-Sequence." << endl;
        }
        cout << endl;
        b2case++;
    }
}
