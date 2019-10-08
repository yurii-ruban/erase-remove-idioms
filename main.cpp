#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <map>

using namespace std;


//IOTA
//It geners only unique numbers
void gener_seq(vector<int> &arr)
{
    iota(arr.begin(), arr.end(), 0);
}

//MAP:

//RANDOM
void rnd(map<int, int> &book_struct, int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
     {
         book_struct.insert ( pair<int,int>(i, rand()%10 + 1) );
     }
}

//PRINT
void print (map<int, int> book_struct)
{
    for (auto it = book_struct.begin(); it != book_struct.end(); ++it)
      {
          cout << (*it).first << ":" << (*it).second << endl;
      }
    cout << endl;
}

//DELETE
void del(map<int, int> &book_struct, int key)
{
    auto it = book_struct.begin();
    while (it != book_struct.end())
    {

        (*it).second == key ? book_struct.erase(it++) : ++it;

    }
}


//VECTOR:

//RANDOM
void rnd(vector<int> &arr)
{
    srand(time(0));
    for(vector<int>::iterator i= arr.begin();i!=arr.end();i++)
    {
        *i= rand()%10+1;
    }
}

//PRINT
void print(vector<int> arr)
{
    for(vector<int>::iterator i = arr.begin(); i!=arr.end(); i++)
    {
        cout<< *i << " ";
    }
    cout<< endl;
}

//DELETE
void del(vector<int> &arr, int key)
{
    arr.erase(remove(arr.begin(), arr.end(), key), arr.end());
}

int main(int argc, char *argv[])
{
    const int SIZE = 100;
    const int KEY = 8;
    map <int, int> book_struct;
    vector<int> arr(SIZE);

    //VECTOR
    //gener_seq(arr);
    rnd(arr);
    print(arr);
    del(arr, KEY);
    print(arr);

    //MAP
    rnd(book_struct,SIZE);
    print(book_struct);
    del(book_struct, KEY);
    print(book_struct);
    return 0;
}
