#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> numbers;
    int val;
    cout<<"fills the array:"<<endl;
    while(cin>>val)
    {
        numbers.push_back(val);    
    }
    if(!cin.good())
    {
        cin.clear();
        cin.sync();
    }
    vector<int>::iterator bg=numbers.begin();
    while(bg!=numbers.end())
    {
        cout<<*bg++<<"\t";
    }
    cout<<endl;
    cout<<"please input the target number:"<<endl;
    int target;
    cin>>target;
    cout<<val<<endl;
    //vector<int> result;
    vector<int>::iterator bg=numbers.begin();
    vector<int>::size_type index1,index2;
    while(bg!=numbers.end())
    {
        if(*bg<target)
        {
            index1=bg-numbers.begin()+1;
            int tmp=target-*bg;
            vector<int>::iterator rst=find(bg+1,numbers.end(),tmp);
            if(rst!=numbers.end())
            {
                index2=rst-numbers.begin()+1;
                cout<<"index1="<<index1<<", index2="<<index2;
                break;
                return 0;
            }
            else
            {
                bg++;
                continue;
            }
        }
        else
        {
            bg++;
        }
    }
}
