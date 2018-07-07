#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

fstream file;
string word,t,filename;

filename= "mwl.txt";
file.open ("mwl.txt");
if (!file.is_open()) return 0;

    int i,j,k[word.size()];
    int y,temp,l;
    char tempr;
    while (file >> word)
  {
    sort(word.begin(),word.end());
    ofstream OFileObject;
    OFileObject.open ("amwl.txt", ios::app);    //storing in a file sorted words.
    OFileObject <<word<< "\n";
    OFileObject.close();
  }
file.close();
fstream file1;
string word1;
int m,n;
int h[word1.size()];
  int z,temp1,v;
char tempr1;
file1.open ("swl.txt");
if (!file1.is_open()) return 0;

    while (file1 >> word1)
    {
    sort(word1.begin(),word1.end());
    ofstream OFileObject1;
    OFileObject1.open ("aswl.txt", ios::app);    //storing in a file sorted words.
    OFileObject1 <<word1<< "\n";
    OFileObject1.close();
    }
file1.close();


string word2;
fstream f2,f3,f4;
f3.open ("aswl.txt",ios::in);

while (f3 >> word1){
        f4.open ("amwl.txt",ios::in);
        f2.open("mwl.txt",ios::in);
        while(f4 >> word){
                f2 >> word2;

                if(word1.compare(word)==0){
                    cout<<word2<<",";
                }
            }
        f2.close();
        f4.close();
    }
   return 0;
}

