#include<iostream>
using namespace std;

int main()
{

    string color,noun,celebrity;
    cout << "enter a color ";
    getline(cin,color);
    cout << "enter a noun :";
    getline(cin,noun);
    cout << "enter a celebrity";
    getline(cin,celebrity);

    cout <<"Roses are "<<color<<endl;
    cout <<noun << " care blue" << endl;
    cout << "I love " << celebrity <<endl;
}
