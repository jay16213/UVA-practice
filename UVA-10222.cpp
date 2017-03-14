#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<char, char> decode;
    decode.insert(pair<char,char>('a', ';'));
    decode.insert(pair<char,char>('b', 'c'));
    decode.insert(pair<char,char>('c', 'z'));
    decode.insert(pair<char,char>('d', 'a'));
    decode.insert(pair<char,char>('e', 'q'));
    decode.insert(pair<char,char>('f', 's'));
    decode.insert(pair<char,char>('g', 'd'));
    decode.insert(pair<char,char>('h', 'f'));
    decode.insert(pair<char,char>('i', 'y'));
    decode.insert(pair<char,char>('j', 'g'));
    decode.insert(pair<char,char>('k', 'h'));
    decode.insert(pair<char,char>('l', 'j'));
    decode.insert(pair<char,char>('m', 'b'));
    decode.insert(pair<char,char>('n', 'v'));
    decode.insert(pair<char,char>('o', 'u'));
    decode.insert(pair<char,char>('p', 'i'));
    decode.insert(pair<char,char>('q', ']'));
    decode.insert(pair<char,char>('r', 'w'));
    decode.insert(pair<char,char>('s', '\''));
    decode.insert(pair<char,char>('t', 'e'));
    decode.insert(pair<char,char>('u', 't'));
    decode.insert(pair<char,char>('v', 'x'));
    decode.insert(pair<char,char>('w', '\\'));
    decode.insert(pair<char,char>('x', '/'));
    decode.insert(pair<char,char>('y', 'r'));
    decode.insert(pair<char,char>('z', '.'));
    decode.insert(pair<char,char>('[', 'o'));
    decode.insert(pair<char,char>(']', 'p'));
    decode.insert(pair<char,char>(';', 'k'));
    decode.insert(pair<char,char>('\'', 'l'));
    decode.insert(pair<char,char>(',', 'n'));
    decode.insert(pair<char,char>('.', 'm'));
    decode.insert(pair<char,char>('/', ','));
    decode.insert(pair<char,char>('\\', '['));
    decode.insert(pair<char,char>(' ', ' '));
    
    string input;
    
    getline(cin, input);
    
    for(int i = 0; i < input.size(); i++)
    {
        if('A' <= input[i] && input[i] <= 'Z') input[i] = input[i] - ('Z' - 'z');
        cout << decode[input[i]];
    }
    cout << endl;
    return 0;
}