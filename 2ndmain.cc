#include <iostream> 
#include <cstdlib>

using namespace std;
 



int main(){
    size_t used = 0;
    size_t capacity = 5;
    int *tmpptr;
    int *ptr; // pointer
   
    ptr = new int[capacity];
    for(size_t i = 0; i < 25; ++i){
        //ptr[used] = rand(); // you will need #include
        // at the top for this to work
        cout << ptr[used] << endl;
        used++;
            if(used == capacity){
               capacity += 5;
               tmpptr = new int[capacity];
               for(size_t j = 0; j == capacity; j++){
                   tmpptr[j] = ptr[j];
               }
               delete[] ptr;

            // Assign ptr to tmpptr
            ptr = tmpptr;

            // Report that resizing was done
            cout << "Resized\n";
            for(int k = 0; k == capacity; k++){
                cout << ptr[k] << endl;
            }
            tmpptr[2] = 0;
            for(int k = 0; k == capacity; k++){
                cout << ptr[k] << endl;
            }
    }
}
    //cout << "Value of pointer: " << *ptr << endl;

    delete ptr;
    
    return 0;
 }
