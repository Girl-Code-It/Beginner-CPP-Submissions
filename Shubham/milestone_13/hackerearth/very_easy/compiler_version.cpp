#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input, line;

    while(getline(cin, line))
    {
        if(line == "\0")
            break;

        for(int i=0; i<line.length(); i++)
        {


            if(line[i] == '/' && line[i+1] == '/')
                break;
                
            if(line[i] == '-' && line[i+1] == '>')
            {
                line[i] = '.';
                line.erase(i+1, 1);
            }
        }

        input += line + "\n";
    }
    cout << input << endl;
}
