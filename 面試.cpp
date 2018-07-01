#include <iostream>
#define size 20

void function(int b,int *a);
int main()
{
    int a[size]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
   bool flag;
    for(int i=0;i<=500;i++)
    {
        flag = false;
        for(int j=0;j<size;j++)
        {
            if(a[j]==i)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
            std::cout<< i<<" ";
    }
    std::cout<< "\n========================================"<<"\n";
    function(0,a);
    return 0;
}

void function(int b,int *a)
{
    int num=b*100;

    bool flag;
    for(int i=b;i<=(b+99);i++) {
        flag = false;
        for (int j = 0; j < size; j++) {
            if (a[j] == i) {
                flag = true;
                break;
            }
        }
        if (!flag)
            std::cout << i << " ";
    }
}
