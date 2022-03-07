#include<stdio.h>

void ssort(int* arr, int size){
    for (int i = 0; i < size-1; i++){
        int jmin = i;
        for (int j = i+1; j < size; j++){
            if (arr[j] < arr[jmin])
                jmin = j;
        }

        if (jmin != i){
            int temp = arr[jmin];
            arr[jmin] = arr[i];
            arr[i] = temp;
        }
    }
}

int binarySearch(int key, int* arr, int size){
    int low = 0;
    int high = size-1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == key){
            return 1;
        }
        else if (key < arr[mid]){
            high = mid - 1;
        }
        else if (key > arr[mid]){
            low = mid + 1;
        }
    }

    return 0;
}

int main(){
    int strength;
    scanf("%d", &strength);
    int class_register[strength];
    for (int i = 0; i < strength; i++)
        scanf("%d", &class_register[i]);
    
    int present_count;
    scanf("%d", &present_count);
    int present_students[present_count];
    for (int i = 0; i < present_count; i++)
        scanf("%d", &present_students[i]);
    
    ssort(class_register, strength);
    ssort(present_students, present_count);
    int attendence[strength];

    for (int i = 0; i < strength; i++){
        attendence[i] = binarySearch(class_register[i], present_students, present_count);
    }

    for (int i = 0; i < strength; i++){
        printf("%d ", attendence[i]);
    }
    
}