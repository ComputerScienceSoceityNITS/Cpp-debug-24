#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    string temp;
    for(int i=0; i<text.size(); i++){
        if(text[i] >= 'A' && text[i]<='Z' && i!=0){
            temp = temp + " " + text[i];
        } 
        else{
            temp = temp + text[i];
        }
    }
    text = temp;
    return text;
}

int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}