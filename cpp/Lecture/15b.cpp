#include <iostream>
using namespace std;

int xChar(char *str, char change);

int main (){
    char s[] = "Abc12efg345jkl234";
    char changeChar = 0;
    cout << "What letter do you want outputed as an 'X' ? ";
    cin >> changeChar;
    xChar(s, changeChar);
    cout << s << endl;

    return 0;
}

int xChar(char *str, char change){
    char* p = str;
    int count = 0;
    while (*p){
        if (*p == change){
            *p = 'X';
            count++;
        }
        p++;
    }
    return count;
}