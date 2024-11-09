// all possible combination of a1 inside a2 array;

#include <iostream>
#include <vector>

using namespace std;

void f(int x, vector<int> &a1, vector<int> &a2)
{
    if(x == a1.size()){
        for(int i = 0; i < a2.size(); i++) cout << a2[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 0; i < a2.size(); i++)
    {
        if(a2[i] == 0){
            a2[i] = a1[x];
            f(x+1, a1, a2);
            a2[i] = 0;
        }
        
    }
}

int main() {
    vector<int> a1 = {1, 2};
    vector<int> a2(3);
    for(int i = 0; i < 3; i++) a2[i] = 0;
    f(0, a1, a2);
    return 0;
}
