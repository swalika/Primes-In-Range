#include <iostream>

using namespace std;

int main()
{
    int low, high;
    cin>>high;
    for(int i=low;i<=high;i++){
        int factor=0;
        for(int div=2;div*div<=i;div++){
            if(i%div==0){
                factor=factor+1;
            }
        }
        if(factor==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
