#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <map>

using namespace std;

//IOTA
void gener_seq(vector<int> &arr)
{
    iota(arr.begin(), arr.end(), 0);
}

//MAP
void rnd(map<int, int> &book_struct)
{
    srand(time(0));
    for (int i = 0;i<100;i++)
     {
         book_struct.insert ( pair<int,int>(i,rand()%10+1) );
     }
}

void print (map<int, int> book_struct)
{
    for (auto it = book_struct.begin(); it != book_struct.end(); ++it)
      {
          cout << (*it).first << " : " << (*it).second << endl;
      }
}

void del(map<int, int> &book_struct)
{
    for (auto it = book_struct.begin(); it != book_struct.end(); ++it)
      {
        if((*it).second==8)
        {
            book_struct.erase(it);
        }
      }
}

//VECTOR
void rnd(vector<int> &arr)
{
    srand(time(0));
    for(vector<int>::iterator i= arr.begin();i!=arr.end();i++)
    {
        *i= rand()%10+1;
    }
}

void print(vector<int> arr)
{
    for(vector<int>::iterator i= arr.begin();i!=arr.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<< endl;
}

void del(vector<int> &arr)
{
    arr.erase(remove(arr.begin(),arr.end(),8),arr.end());
    //remove(arr.begin(),arr.end(),8);
}

int main(int argc, char *argv[])
{
    map <int, int> book_struct;
    vector<int> arr(100);

    //VECTOR
    rnd(arr);
    //gener_seq(arr);
    print(arr);
    del(arr);
    print(arr);

    //MAP
    rnd(book_struct);
    print(book_struct);
    del(book_struct);
    print(book_struct);
    return 0;
}
