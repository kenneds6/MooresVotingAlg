#include <iostream>


int findMajority(int L[]){
    int j = 0;
    int count = 1;
    int size = (sizeof(L));
    for (int i = 1; i < size; i ++){
        if (L[j]==L[i]){
            count++;
        }
        else{
            count--;
        }
        if (count == 0){
            j = i;
            count = 1;
        }
    }
    //std::cout << L[j];
    return L[j];
}

bool checkMajority(int x, int L[]){
    //check if element is in list more than n/2 times
    int count = 0;
   // int size = sizeof(L);
    for (int i = 0; i < sizeof(L); i++){
        if (L[i] == x){
            count++;
        }

    }
    if (count > (sizeof(L)/2)){
        return 1;
    }
    else {
        return 0;
    }


}

int main() {
    int L[15] = {1,1,3,12,1,1,1,13,1,1,1,16,17,1,39};
    int majorityCand = findMajority(L);
    if ((checkMajority(majorityCand, L)) == 1){
      std::cout << majorityCand;
    }
    else {
        std::cout << "No Majority Element in List";
    }

}