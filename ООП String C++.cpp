#include <iostream>
#include <string>

using namespace std;

int vowel_count(int size,string arr[],string str){
    int count=0;
    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < 20; j++){
            if(str[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    return count;
}    
street compare

int main()
{
   string arr[20]{"а","е","є","и","і","ї","ю","я","о","у","А","Е","Э","И","І","Ї","Ю","Я","О","У"};
   cout << vowel_count(20,arr,"Сьогодні було дуже спекотно");
}