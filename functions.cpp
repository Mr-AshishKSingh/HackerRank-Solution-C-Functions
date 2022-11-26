#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int data[]={a,b,c,d};
    int max = data[0];
    for(int i=1;i<=4;i++){

        if(max<data[i])
        max=data[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;
    
    return 0;
}
