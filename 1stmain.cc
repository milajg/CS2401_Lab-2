#include <iostream> 
using namespace std;
 
void pretty();


int main(){
    for(int i = 0; i < 7; i++){
        pretty();
    }
    return 0;
 }




void pretty( ){  
    int x = 0;  
    x++;  
    for(int i = 0; i < x; ++i){  
        cout << ’*’;  
    }  
    cout << endl;  