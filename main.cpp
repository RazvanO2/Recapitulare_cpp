#include <iostream>
#include <vector>

using namespace std;

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"

int main() {
    int i, j, n{0}; // pentru for loops
    int v[100] = {9, 2, 10, 20, 20, 1, 8, 5}; // elemente sir
    int v_organizat[100] = {1, 2, 5, 4, 8, 9, 10, 20};


// nr elemente sir
    while (v[n]) {
        n++;
    }
    cout << "Elemente sir: " << n << endl;
// introducere date in vector
//    cin >> n;
//    for (i=0;i<n;i++){
//        cin >> v[i];
//    }

//input cout
    cout << "Vector initial: ";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;


// Inserarea unui element in sir;
// int nou_element_sir{5};
// int pozitia{2};
// int aux{v[pozitia]};
// for (i = n; i >= pozitia; i--){
//     v[i+1] = v[i];
//     if (pozitia == i){
//         v[i] = nou_element_sir;
//     }
// }

    // Binary search
//    int element{9};
//    int left = 0;
//    int right = n - 1; // n is the size of the array
//    int mid;
//
//    while (left <= right) {
//        mid = left + (right - left) / 2; // Calculate the new mid in each iteration
//
//        if (v_organizat[mid] == element) {
//            cout << "pozitia " << mid;
//            break; // The element has been found; exit the loop
//        } else if (v_organizat[mid] < element) {
//            left = mid + 1;
//        } else {
//            right = mid - 1;
//        }
//    }
//
//    if (left > right) {
//        cout << "Element not found";
//    }

// frequency array
//int freq[101] = {0};
//for (i = 0; i<n; i++){
//    freq[v[i]]++;
//}
//int aux = 0;
//int element = 0;
//for (i = 0; i<101; i++){
//    if (freq[i]>=aux){
//        aux = freq[i];
//        element = i;
//    }
//}
//cout << "cea mai frecvent element este: " << element << endl;



// Mutarea elementelor de la sfarsit in fata; Reversing an array;
//int aux;
//for (i = 0;i< n/2; i++){
//    aux = v[i];
//    v[i] = v[n-i-1];
//    v[n-i-1] = aux;
//}


// Stergerea unui element
//int pos{2};
//for (i = pos; i<n -1;i++){
//    v[i] = v[i+1];
//}


//    Bubble Sort
//    int aux;
//    for (i = 0; i < n - 1; i++) {
//        for (int j = 0; j<n - 1; j++) {
//            if (v[j] > v[j + 1]) {
//                aux = v[j + 1];
//                v[j + 1] = v[j];
//                v[j] = aux;
//            }
//        }
//    }

// output cout
    cout << "Vector final: ";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}