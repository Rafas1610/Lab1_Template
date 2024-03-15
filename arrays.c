#include "arrays.h"
#include <stdio.h>
#include "math.h"

void printArray(int arr[], int arrLength)
{
    printf("[ ");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

int sum(int arr[], int arrLength)
{
    int sumAll = 0;
    for (int i = 0; i < arrLength; i++)
    {
        sumAll += arr[i];
    }
    return sumAll;
}

double mean(int arr[], int arrLength)
{
    double sumAll = 0;
    for (int i = 0; i < arrLength; i++)
    {
        sumAll += arr[i];
    }
    return sumAll / arrLength;
}

double variance(int arr[], int arrLength)
{
    double sum = 0;
    double meanArr = mean(arr, arrLength);
    for (int i = 0; i < arrLength; i++)
    {
        sum += pow(arr[i] - meanArr, 2);
    }
    return sum / (arrLength - 1);
}

double standardDeviation(int arr[], int arrLength)
{
    double sum = 0;
    double meanArr = mean(arr, arrLength);
    for (int i = 0; i < arrLength; i++)
    {
        sum += pow(arr[i] - meanArr, 2);
    }
    return sqrt(sum / (arrLength - 1));
}
