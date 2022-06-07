#include <iostream>
using namespace std;

void DuplicateElements(int A[], int size){// priniting duplicate elements

    int LastDuplicate=0;
    for(int i=0; i<size; i++)
        if(A[i]==A[i+1] && A[i]!=LastDuplicate){
            LastDuplicate=A[i];
            cout<<"Duplcate Element:"<<LastDuplicate<<endl;
        }
}

void CountingDuplicates(int A[], int size){// counting number of duplicates and printing with the number(sorted)
int i,j;
for(i=0; i<size-1; i++)
{
    if(A[i]==A[i+1]){
        j=i+1;
        while (A[j]==A[i]) j++;
        cout<<A[i]<<" is repeating "<<j-i<<" times"<<endl;
        i=j-1;        
    }
}
}

void CountDuplicatesUsingHash(int A[], int size){//counting number of duplicates and printing with the number usinf hashmap(unsorted)
    int max=A[0];
    for (int i = 1; i < size; i++)
    {
        if(max<A[i])
            max=A[i];
    }
    
    int H[max] = {0};

    for(int k=0; k<size; k++)
        H[A[k]]++;

    for(int j=1; j<=max; j++)
        if(H[j]>1){
         cout<<j<<" is being repeated "<<H[j]<<" times"<<endl;
        }
}


int main(){
int size;
cout<<"Enter Size of Array:"; 
cin>>size;
int A[size];
cout<<"Enter Elements of Array in Sorted Manner:";
for(int i=0; i<size; i++){
    cin>>A[i];
}
DuplicateElements(A, size);
CountingDuplicates(A, size);
cout<<"Enter Elements of Array in Unsorted Manner:";
for(int i=0; i<size; i++){
    cin>>A[i];
}
CountDuplicatesUsingHash(A, size);
return 0;
}