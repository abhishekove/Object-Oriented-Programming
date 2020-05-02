using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
int n;
void rotate(vector<int> &arr,int end,int mid,int start)
{
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=arr[mid];
    arr[mid]=temp;
}
void choose_indices(vector<int> &arr,int s,int q)
{
    for(int l=q;l<n;l++)
    {
        if(arr[l]==s)
        {
            if(l-q>=2)
            {
                rotate(arr,l,l-1,l-2);
                break;
            }
            else
            {
                rotate(arr,l+1,l,l-1);
                break;
            }
        }
    }
}
int main()
{
    vector<int> arr;
    int q,count=0;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>n;
        count=0;
        for(int i=0,p;i<n;i++)
        {
            cin>>p;
            arr.push_back(p);
        }
        //Counting the number of inversion in the array
        int ctiv=0;
        for(int r=0;r<n;r++)
        {
            for(int s=r+1;s<n;s++)
            {
                if(arr[r]>arr[s] && r<s)
                {
                    ctiv++;
                }
            }
        }
        if(ctiv%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            for(int j=0,k=1;j<n && k<n; )
            {
                if(arr[j]!=k)
                {
                    choose_indices(arr,k,j);
                    if(arr[j]==k)
                    {
                        j++;
                        k++;
                        count++;
                    }
                }
                else
                {
                    j++;
                    k++;
                    count++;
                }
            }
            if(count==n-1)
            {
                cout<<"YES"<<endl;
            }
            arr.clear();
        }
    }
}