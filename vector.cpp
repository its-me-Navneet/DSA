#include<iostream>
#include<vector>
using namespace std ;
void f1(vector<int> &v)            // to pass vector as reference 
{
    v.push_back(111);
}

int main()
{
    vector<int> v ;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(10,12);            //weill resize the vector and put 12 in place of new space
    f1(v); 
for(int x:v)
    cout<<x<<" ";
cout<<endl;
// create vector from array
int arr[]={12,12,4,64,64,3,5,6};
vector<int> v1(arr,arr+8);
auto j=v1.begin();
v1.erase(j);
    for(int x:v1)
    cout<<x<<" ";

    



    return 0;

}