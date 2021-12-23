#include <iostream>

using namespace std;

float getAvg(int array[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
        sum += array[i];

    float average = (float)sum / num;
    return average;
}

float getAvg(float array[], int num)
{
    float sum = 0;
    for (int i = 0; i < num; i++)
        sum += array[i];

    float average = sum / num;
    return average;
}

void printArray(int array[], int num)
{
    for (int i = 0; i < num; i++)
        cout << array[i] << " ";
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverseArray(int array[], int num)
{
    for (int i = 0; i < num / 2; i++)
    {
        swap(array[i], array[num - 1 - i]);
    }
}

int main()
{
    const int size = 6;
    float array[size] = {0, 1, 2.5, 3, 4, 5};
    cout << getAvg(array, size) << endl;
}