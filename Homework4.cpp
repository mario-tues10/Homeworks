#include <cstdio>

using namespace std;

int secondNum(int t[], int size){
    int max= t[0];
    for(int i = 0; i <= size; i++){
        if(max < t[i]){
            max = t[i];
        }
    }
    int diff = max - t[0];
    if(diff == 0){
        diff = max - t[1];
    }
    int secN = max;
    for(int j = 0; j < size; j++){
        if(t[j] == max) continue;
        if((max - t[j]) <= diff){
            secN = t[j];
            diff= max - t[j];
        }
    }
   return secN;
}

int main()
{
    //int *a1, *b1;
    int t1[] = {15,98,747,423,453,44};
    int size = sizeof(t1)/sizeof(int);
    printf("%d ", secondNum(t1,size));
    return 0;
}
