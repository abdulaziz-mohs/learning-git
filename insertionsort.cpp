#include<iostream>
using namespace std;

void selectionsort(int list[], int size){
    int min;
    int a=0;
    for(int i=0;i<size-1;i++){
        min= list[i];
        a=i;
        for(int j=1;j<size-i;j++){
            if(list[j+i]<min){
                min=list[j+i];
                a=j+i;
            }
        }
        swap(list[i],list[a]);

    }

}

int main(){
    int list[6]={3,2,1,4,5,23};
    cout << "NOW IT WILL DISPLAY THE SORTED OF THIS ARRAY \"{3,2,1,4,5,9}\". "<<endl;
    selectionsort(list,6);
    cout<< "THE SORTED ONE IS                       ";
    for(int i=0;i<6;i++){
        cout<<list[i]<<"   ";
    }


    return 0;
}
