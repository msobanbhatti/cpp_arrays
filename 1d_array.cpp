#include <iostream>
using namespace std;
int main() 
{
    int array[10]={35,4,8,508,9,5,90,14,58,100};
    int max1,max2,max3;

    max1=array[0];
    max2=array[0];
    max3=array[0];

    for(int i=1;i<10;i++)
    {
        if(max1<array[i])
        {
            max3=max2;
            max2=max1;
            max1=array[i];
        }
        else if(max2<array[i])
        {
            max3=max2;
            max2=array[i];
        }
        else if(max3<array[i])
        {
            max3=array[i];
        }
    }
    cout<<"Maximum Number in array is "<<max1<<endl;
    cout<<"2nd highest Number in array is "<<max2<<endl;
    cout<<"3rd highest Number in array is "<<max3<<endl;
    
    
    return 0;
}