#include <iostream>
using namespace std;


int bobblesort(int array[], int length){
    int flag =1 , c = 1;
    // int length = array.length();
    for(int i =1;(i<= length) and flag ;i++){
        flag = 0;
        for(int j =0; j<length - 1; j++){
            if (array[j] < array[j+1]){
                int temp = array[j];
                array[j]= array[j+1];
                array[j+1] = temp;
                flag = 1;
                for (int x= 0; x<length;x++){
                    cout<<array[x]<<",";
                }
                cout<<"loop number: "<<c++<<endl;
                // cout<<a[j]<<"..."<<endl;
        }
        
    }
        // cout<<a[i]<<endl;
    }return 0;
}

int selectionsort(int array[],int length)
{
   
    int temp = 0, c =0;
    for (int i = 0; i<length-1; i++)
    {
        for(int j = i+1 ; j<length; j++)
        {
            if (array[i]<array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                for (int x= 0; x<length;x++){
                    cout<<array[x]<<",";
                }
                cout<<"|||||loop number: "<<c++<<endl;
            }
        }
    }
    
}

int minval(int arr[], length)
{
    for (int i = 0; i < length; i++)
    {
        if ()
    }
}


int main(void){
    // Your code here!
    int a[]={2,5,7,8,1, 10,35,39};
    int size = *(&a + 1) - a; 
    // int length  = a.size();
    // bobblesort(a,size);
    selectionsort(a,size);
   
}
