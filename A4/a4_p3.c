/*
 CH-230-A
 a4_p3.c
 Hannah McDermott
 h.mcdermott@jacobs-university.de
 */

#include <stdio.h> 
#include <math.h> 
//arr[] = array floats
// num = number of elements in array arr
float geometric_mean(float arr[], int num){
    float product = 1;
    for(int i = 0; i < num; i++){
        product = product * arr[i];
    }
    float geomean = (float) pow(product, 1.0/num); 
    return geomean; 
}

//arr[] = array of floats
//num = number of elements in array arr
float findingmax(float arr[], int num){
    float max = arr[0];
    for(int i = 1; i < num; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//arr[] = array of floats
//num = number of elements in array arr 
float findingmin(float arr[], int num){
    float min = arr[0];
    for(int i = 1; i < num; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

//arr[] = array of floats 
//num = number of elements in array arr
float sum_floats(float arr[], int num){
    float sum = 0;
    for (int i = 0; i < num; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    printf("Enter up to 15 floats or neg value to stop entering:\n");
    float values[15];
    int i, count;
    count = 0;
    for(i = 0; i < 15; i++){
        //variable that keeps track of how many elements in the array
        count++;
        scanf("%f", &values[i]);
        //if neg. value entered program stops scanning floats 
        if (values[i] < 0){
            count--;
            break;
        }
    }

    printf("Enter 'm', 'h,' '1', or 's':\n");
    char ch;
    getchar();
    scanf("%c", &ch);
    
    //uses switch to compare input character with either m,h,1,s
    /* calls different functions to print either geometric mean, max value
    min value or sum of array */
    switch (ch){
        case 'm' :
        printf("Geometric mean = %f\n", geometric_mean(values, count));
        break;

        case 'h' : 
        printf("Maximum = %f\n", findingmax(values, count));
        break;

        case '1' :
        printf("Minimum = %f\n", findingmin(values, count));
        break; 

        case 's' :
        printf("Sum = %f\n", sum_floats(values, count));
        break;
    }

}