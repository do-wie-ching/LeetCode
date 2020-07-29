#include <iostream>
#include <vector>
#include <unordered_map> 
#include <iostream>

const int Max = 1000;


std::vector<int> twoSumAdvance(std::vector<int>& array, int target)
{
    std::unordered_map<int,int> map ;
    std::vector <int>res;
    
    for (int i = 0; i < array.size(); i++)
    {
        if (map.find(array[i]) == map.end())//Key is not exist
            map[target - array[i]] = i;
        else
        {
            res.push_back(map[array[i]]);
            res.push_back(i);
        }
        
    }
       return res;
}

void twoSum(std::vector<int>& array, int target)
{
    std::unordered_map<int, int> map;
    std::vector <int>res;

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i; j < array.size(); j++)
        {
            if (array[i] + array[j] == target)
            {
                printf("arr[%d] + arr[%d] = %d\n", i, j, target);
                break;
            }    
        }
    }
}


int main() 
{
    START = clock();
    int target = 1100;
    int arr[] = { 2, 7, 11, 15,50,60,70,80,90,100,300,800 };
    std::vector <int>res;

    std::vector<int> array(arr, arr + sizeof(arr) / sizeof(int));

    res = twoSumAdvance(array, target);

    /*std::cout << "Use twoSum " << (START)  << std::endl;
    twoSum(array, target);
    END = clock();
    std::cout << "Use twoSum " << (END )  << std::endl;*/

    printf("arr[%d] + arr[%d] = %d\n", res[0], res[1], target);


    return 0;
}