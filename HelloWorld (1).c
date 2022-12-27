//Developed by 10800120039_shafhan

#include <stdio.h>

void selectionSort(int[], int); //function prototype

int main(){                     // main function
    int i, n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nBefore sorting the array : \n");
    for(i = 0; i<n; i++){
        printf("%d\t", a[i]);
    }
    selectionSort(a, n);  //function call
    printf("\nAfter sorting the array : \n");
    for(i = 0; i<n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
/*Defining Selection Sort Function*/

void selectionSort(int a[], int n){
    int i, j, t, flag = 0;
    for(i = 0; i < n; i++){
        j = i + 1;
        while(j < n){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
                flag = 1;
            }
            j++;
        }
        if(flag != 1){
            break;
        }
    }
}