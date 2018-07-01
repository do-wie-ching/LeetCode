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
========================================================
    
    #include <stdio.h>

void printArray1(){
    unsigned int a[20]={1,5,9,11,18,21,23,53,200,230,330,331,332,333,400,401,405,430,450,480};
    for(int i=0,j=0;i<=500;i++){
        if(i==a[j])
            j++;
        else
            printf("%d ",i);
    }
}

void printArray2(int n){
    unsigned int a[20]={1,5,9,11,18,21,23,53,200,230,330,331,332,333,400,401,405,430,450,480};
    //0~99 //100~199 //200~299 //300~399 //400~499
    //  (n+1)*100-1
    int j=0;
    int upperBound = ((n+1)*100)-1;
    int lowerBound = n*100;
    for(j;j<20;){
        if(a[j] < lowerBound)
            j++;
        else
            break;
    }
    for(int i=lowerBound;i<upperBound;i++){
        if(i==a[j])
            j++;
        else
            printf("%d ",i);
    }
}
int main()
{
    //printArray1();
    //printArray2(0);
    //printArray2(1);
    //printArray2(2);
    //printArray2(3);
    printArray2(4);
    return 0;
}
