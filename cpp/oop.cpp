#include <iostream>
using namespace std ;
int create_num (int len ){
    int arr[len] ;
    for (int i =0 ; i<len ; i++){
        cin >> arr[i];
    }
    return arr ;
}

class big_number {
public :
    int num[30] ;
    int length ;

    int sets(int len){                   //function for taking input 
        length = len ;
        cout << "set number" << endl ;
        int n[len] ; 
        for (int i =0 ; i<len ; i++){
            cin >> n[i] ;
        } 
        return 0 ;
    }

    int gets(int *arr[]){
        cout << "Number : " << arr << endl ;
    }

    big_number (int leng , int numm[30] );
};

int main(){
big_number num1 = big_number (12 ,create_num(12) )
}


