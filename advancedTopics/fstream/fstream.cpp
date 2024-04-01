#include <iostream>
#include <fstream>
using namespace std;


int main() {
  try
  { 
    string text;
    ofstream File ("File.txt");//create and write to file
    int num_lines ; 
    cout<<"Enter number of lines : ";
    cin>> num_lines;
    //throw(num_lines);
    for(int i = 0 ; i < num_lines ; i++)
    {
        cout<<"Enter The Text "<<"["<<i<<"]"<<" : ";
        cin >> text;
        File << (text);
    }
    File.close();
    ifstream File_read("File.txt");//read file
    while(getline(File_read,text))
    {
        auto it = text.end()-1;
        for( ; it != text.begin(); it--)
        {
               cout << *it <<'\n';
        }
        cout<<*it;
    }
    File_read.close();
  }
  catch(int num_lines)
  {
    cout<<"Enter Vaild Input";
  }
    
   return 0;
}