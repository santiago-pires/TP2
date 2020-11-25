#include <iostream>
#include <headers.h>

using namespace std;

int main()
{/*
    //ex 1
    cout<<"Exercise 1\n";
    calculator_menu();

    //ex 2 and 3
    cout<<"Exercise 2\n";
    int N=10;
    int arr[10] = {0};
    cout<<"Input ten integer values:\n";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    //ex 2
    min_max_mod(arr,sizeof(arr)/sizeof(arr[0]));

    //ex 3
    cout<<"Exercise 3 - same values as 2\n";
    int *sort_arr=(int*)(malloc(N));
    sort_arr=sort_array(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<"Sorted array:\n";
    for(int i = 0; i <N;i++) {
        cout<<sort_arr[i]<<"   ";
    }
    cout<<"\n";

    //ex 4
    cout<<"Exercise 4\n";
    int size;
    cout << "Pascal Triangle, size?";
    cin >> size;
    pascal_triangle(size);


    //ex 5
    cout<<"Exercise 5\n";
    int size;
    cout<<"Number of integer values:\n";
    cin>>size;
    int arr[size];
    cout<< "Values:";
    for(int i=0;i<size;i++)
    {
       cin >> arr[i];
    }
    int *max= max_value(arr,size);
    cout<<*max<<"\n";


    //ex 6
    cout<<"Exercise 6\n";
    int arr[5];
    int *pointer = arr;
    cout<<"Enter five integer values:\n";
    for(int i=0;i<5;i++)
    {
       cin>>*(pointer+i);
    }
    cout<<"Printing integer values:\n";
    for(int i=0;i<5;i++)
    {
       cout<< *(pointer+i)<<"\n";
    }
*/


    //ex 7 - The same as ex 3, I interpreted this one
    cout<<"Exercise 7\n";
    int N=10;
    int arr[10] = {0};
    cout<<"Input ten integer values:\n";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int *sort_arr=(int*)(malloc(N));
    sort_arr=sort_array(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<"Sorted array:\n";
    for(int i = 0; i <N;i++) {
        cout<<sort_arr[i]<<"   ";
    }
    cout<<"\n";
/*
    */

    return 0;
}
