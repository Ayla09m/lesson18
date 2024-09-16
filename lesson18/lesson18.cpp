#include <iostream>

using namespace std;

void boyuk(int* num1, int* num2) {
    if (*num1 > *num2) {
        cout << *num1;
    }
    else {
        cout << *num2;
    }
}
int isare(int* num1) {
    if (*num1 >= 0) {
        return 0;
    }
    else {
        return 1;
    }
}
void toplama(int* num1, int* num2) {
    cout << *num1 + *num2 << endl;
}
void cixma(int* num1, int* num2) {
    cout << *num1 - *num2 << endl;
}
void vurma(int* num1, int* num2) {
    cout << *num1 * *num2 << endl;
}
void bolme(int* num1, int* num2) {
    cout << *num1 / *num2 << endl;
}
void calculator(int choice, int* num1 = nullptr, int* num2 = nullptr) {
    switch (choice) {
    case 1: toplama(num1, num2); break;
    case 2: cixma(num1, num2); break;
    case 3: vurma(num1, num2); break;
    case 4: bolme(num1, num2); break;
    default: cout << "sehv secim" << endl; break;
    }
}
void arrsum(int arr[], int size) {
    int cem = 0;
    for (int i = 0; i < size; i++)
    {
        cem += arr[i];

    }
    cout << cem;
}
void deyis(int* num1, int* num2) {
    int t = *num1;
    *num1 = *num2;
    *num2 = t;
    cout << "num1;" << *num1 << "num2;" << *num2;
}
void min(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i]) {
            min = arr[i];

        }
    }cout << min;
}
void max(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i]) {
            max = arr[i];

        }
    }
    cout << max;
}
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}
void surusdurme(int arr[], int size, int deyis) {
    deyis %= size;
    if (deyis < 0) {
        deyis += size;
    }
    int* temp = new int[deyis];
    for (int i = 0; i < deyis; ++i) {
        temp[i] = arr[size - deyis + i];
    }
    for (int i = size - 1; i >= deyis; --i) {
        arr[i] = arr[i - deyis];
    }
    for (int i = 0; i < deyis; ++i) {
        arr[i] = temp[i];
    }
    delete[] temp;
}
void reversecopy(int old[], int newarr[], int size) {
    for (int i = 0; i < size; ++i) {
        newarr[i] = old[size - i - 1];
    }
}
void copy(int old[], int newarr[], int size) {
    for (int i = 0; i < size; ++i) {
        newarr[i] = old[i];
    }
}

int main()
{
    cout << "\ntask1" << endl;
    int num1, num2;
    cin >> num1 >> num2;
    boyuk(&num1, &num2);

    cout << "\ntask2" << endl;
    int num;
    cin >> num;
    int isaref = isare(&num);
    cout << isaref;

    cout << "\ntask3" << endl;
    deyis(&num1, &num2);

    cout << "\ntask4" << endl;
    int choice;
    cout << "1 toplama,2 cixma,3 vurma,4 bolme";
    cin >> choice;
    int num3, num4;
    cin >> num3 >> num4;
    calculator(choice, &num3, &num4);

    cout << "\ntask5" << endl;
    srand(time(0));
    int arr[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    arrsum(arr, 5);

    cout << "\ntask6" << endl;
    int arr3[5];
    copy(arr, arr3, 5);
    for (int i = 0; i < 5; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    cout << "\ntask7" << endl;
    reverseArray(arr, 5);
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\ntask8" << endl;
    int arr2[5];
    reversecopy(arr, arr2, 5);
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "\ntask9" << endl;
    min(arr, 5);
    cout << endl;
    max(arr, 5);

    cout << "\ntask10" << endl;
    int deyis;
    cin >> deyis;
    surusdurme(arr, 5, deyis);
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

