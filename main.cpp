#include <iostream>
using namespace std;

int prog_Arr[20];

int main(){

    // Accept an array of number
    cout << "Use 0 to break the loop\nEnter an array of number: " << endl;
    for(int i=0; i<20; i++){
        cin >> prog_Arr[i];
        if(prog_Arr[i] == 0)
        {
            break;
        }
    }

    system("CLS");

    // Print the array
    cout << "The Array : ";
    for(int i=0; i<20; i++)
    {
        if(prog_Arr[i]==NULL || prog_Arr[i]=='0')
        {

        }
        else
        {
            cout << prog_Arr[i] << " ";
        }
    }

    // Identify if a nunber is divisible by 2
    for(int i=0;i<20;i++)
    {
        if((prog_Arr[i]%2)==1)
        {
            prog_Arr[i]=0;
        }
        else
        {

        }
    }

    // Print prog_Arr[i] if the value is not equal to 0
    cout << endl << "No Odd Pls : ";
    for(int i=0; i<20; i++)
    {
        if(prog_Arr[i]==NULL || prog_Arr[i]=='0')
        {

        }
        else
        {
            cout << prog_Arr[i] << " ";
        }
    }
}
