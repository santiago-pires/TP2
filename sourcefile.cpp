#include <iostream>

using namespace std;

void calculator_menu(){
    char seguir;
    seguir='y';
    int choice;
    do {
        cout<<"Calculator\n MENU:\n \t 1- Add\n \t 2- Subtract\n \t 3- Multiply\n \t 4- Divide\n \t 5- Modulus\n\n";
        cout<<"Enter your choice:\n";
        cin>>choice;
        std::cout<<"Enter your two numbers:\n";
        double a=0, b=0;
        cin>>a;
        cin>>b;
        cout<<"Result: \n";
        switch (choice) {
            case 1:
                cout<<(a+b);
                break;
            case 2:
                cout<<(a-b);
                break;
            case 3:
                cout<<(a*b);
                break;
            case 4:
                cout<<(a/b);
                break;
            case 5:
                cout<<(int(a)%int(b));
                break;
        }
        cout<<"\n Continue?(press 'y')";
        cin>>seguir;
    } while (seguir=='y');
}

void min_max_mod(int* array,int size){
    int max=array[0];
    int min=array[0];
    int mode=array[0];
    int cant=0;
    int cant_nm=0;
    for(int i=0;i<size;i++){
        if(max < array[i]){
            max = array[i];
        }
        if(min>array[i]){
            min=array[i];
        }
        cant=0;
        for(int j=0;j<size;j++){
            if (array[i]==array[j]){
                cant++;
            }
        }
        if (cant>cant_nm){
            cant_nm=cant;
            mode=array[i];
        }

    }
    cout<<"Max value:\t"<<max<<"\n";
    cout<<"Min value:\t"<<min<<"\n";
    //when 2 numbers the same number of times, result of mode is the first one
    cout<<"Mode value:\t"<<mode<<"\n";

}

int* sort_array(const int* array, int size){
    int* sort_arr = (int*)(malloc(size));
    for(int i = 0;i<size;i++) {
        sort_arr[i] =array[i];
    }
    int ind;
    int aux;
    for(int i = 0;i<size;i++) {
        ind = i;
        for(int j = i;j< size;j++) {
            if (sort_arr[ind]>sort_arr[j]){
                ind=j;
            }
        }
        aux= sort_arr[i];
        sort_arr[i] = sort_arr[ind];
        sort_arr[ind]=aux;
    }
    return sort_arr;
}

void pascal_triangle(int size)
{
    int array[size][size];

    for (int j= 0;j<size;j++)
    {
        for (int i=0; i<=j; i++)
        {
            if (j== i || i == 0)
                array[j][i]= 1;
            else
                array[j][i]=array[j-1][i-1]+array[j-1][i];
            cout << array[j][i] << "  ";
        }
        cout << "\n";
    }
}

int *max_value(int array[],int size)
{
    int *max=&array[0];

    for(int i= 0;i<size;i++)
    {

        if (*max<array[i])
            max=&array[i];
    }
    return max;
}
