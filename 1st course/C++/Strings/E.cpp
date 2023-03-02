#include <cstring>

int main() {
    
    char s1[10001], s2[10001];
    cin >> s1 >> s2;
    
    int n = (int)strlen(s1), m = (int)strlen(s2);
    
    if(n > m){
        swap(n, m);
        swap(s1, s2);
    }
    
    for(int i = 0; i < n; i++){
        if((int)s1[i] > (int)s2[i]){
            cout << s2 << endl;
            return 0;
        }
        if((int)s1[i] < (int)s2[i]){
            cout << s1 << endl;
            return 0;
        }
    }
    
    

    
    cout << s1 << endl;
    
    return 0;
}
