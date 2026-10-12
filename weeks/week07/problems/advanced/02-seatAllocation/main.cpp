#include <iostream>

using namespace std;

int main() {
    int cap = 0;
    int req = 0;
    while(cin >> cap){
        cin >> req;
        if(cap == 0 && req == 0)
            break;
        
        int temp =0;
        int yes = 0;
        int no = 0;
        for (int  i =0; i < req; i++){
            cin >> temp;
            if (temp > cap){
                no++;
            }else {
                yes++;
                cap = cap - temp;
            }
        }cout << yes << " " << no << " " << cap;
    }
    
    return 0;
}