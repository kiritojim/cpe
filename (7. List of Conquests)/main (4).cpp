#include <bits//stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string country, temp_firstName, temp_lastName;
    string totalCountry[n];
    
    for(int i = 0; i < n; i++){
        cin >> country >> temp_firstName >> temp_lastName;
        totalCountry[i] = country;
    }
    
    sort(totalCountry, totalCountry+n);
    bool isSame = false;
    
    for(int i = 0; i < n; i++){
        int sum = 1;
        if(totalCountry[i] == totalCountry[i+1]){
            sum++;
            isSame = true;
        }
        
        if(!isSame){
            cout << totalCountry[i] << ' ' << sum << endl;
        }
    }
}