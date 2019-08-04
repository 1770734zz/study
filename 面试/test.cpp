/*#include "iostream"
#include <vector>
using namespace std;
 
void permutation(vector<int> &vec,int k,int m)
{
    int i,j;
    if(k == m)
    {
        for(i=0;i<=m;i++)
            cout<<vec[i];
        cout<<endl;
    }
    else
    {
        for(j=k;j<=m;j++)
        {
            swap(vec[j],vec[k]);
            permutation(vec,k+1,m);
            swap(vec[j],vec[k]);
        }
    }
}
int main(void)
{
    vector<int> vec{1, 2, 3};
    cout << "所有全排列的结果为：" << endl;
    permutation(vec,0,2);
    return 0;
}*/

#include <iostream>
#include <algorithm>
using namespace std;
 
void permutation(vector<int> &vec)
{
    sort(vec.begin(),vec.end());
    do
    {
        for(auto x : vec)
            cout << x;
        cout << endl;
    }while(next_permutation(vec.begin(),vec.end()));
 
}
int main(void)
{
    vector<int> vec{1,2,3};
    cout<<"所有全排列的结果为："<<endl;
    permutation(vec);
    return 0;
}