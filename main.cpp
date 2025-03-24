#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Welcome to", "Hazel!", "The Game Engine"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
