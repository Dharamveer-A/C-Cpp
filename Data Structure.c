#include <stdio.h> // Header file
#define size 100
int arr[size];
int n =10;
void display(){
    int i;
    for (i = 0 ; i < n ; i++) {
        printf("%d ",arr[i]);
    }
}
void create(int n) {
    int no;
    int i ;
    if (n<=size) {
    for (i = 0 ; i < n ; i++) {
        printf("Enter %d element :\n",i);
        scanf("%d",&arr[i]);
    }
    no = n;}
    else {
        printf("Size exceeds array size");
    }
}
void insert(int index, int val){
    int i;
    if(n>=size){
        printf("List if full \n");
        return;
    }
    if(index<0 || index > n){
        printf("Invaild position \n");
        return;
    }
    for(i =n ; i>index ; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    n++;
}
void delete(int val){
    int i;int index=-1;
    if(n>=1)
    {
        for(i = 0 ; i < n ; i++)
        {
            if(arr[i] == val)
            {
                index=i;
                break;
            }
        }
        if(index == -1)
        {
            printf("Value not found ");
            return;
        }
        for(i=index ; i<n-1 ; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
    }
    else{
        printf("Array is empty");
    }
}
int main() {
    create(n);
    display();
    printf("\n");
    insert(9,100);
    display();
    printf("\n");
    delete(10);
    display();
    return 0;
}