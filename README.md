# Experiment 7

## Aim -
To study and implement c++ arrays.

## Apparatus -
Vs code

##  Problem Statements -

1.) Write a c++ code to make an array.

2.) Write a c++ code to make an array with elements in reverse order in which user entered.

3.) Write a c++ code to make do sum and average of array elements.

4.) Write a c++ code to find maximum and minimum element of an array.

5.) Write a c++ code to search the position of element, number of time it is occuring in an array.

## Theory -

## Arrays -
An array is a fixed-size sequential collection of elements of the same type stored in contiguous memory locations. 
The lowest address corresponds to the first element, and the highest address corresponds to the last element. Array indices start at 0.

## Declaring an Array:

Specifies the type of the elements and the number of elements.To declare an array, specify the type of elements and the number of elements required. array_size must be an integer constant greater than zero. Accesses the 10th element of the array. type can be any valid C++ data type.
  
      type arrayName[array_size];
- Type is the data type of the elements (e.g., int, float, double, char).
- arrayName is the name you want to give to the array.
- arraySize is the number of elements in the array.

## Initializing an Array:
Arrays can be initialized element by element or using a single statement. Provides initial values to the elements of the array. The number of values in {} should not exceed array_size.

      int arr[5] = {1000, 2, 3, 17, 50};
- The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].

## Accessing Array Elements:
An element can be accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array.
  
       int num = arr[9];
- Above statement accesses the 10th element of the array.

## *Key Points about arrays* :
- *Definition* : An array is a variable that can store multiple values of the same type.

- *Use of Arrays* : Regular variables (e.g., v1, v2, v3) are manageable for a few objects, but arrays are needed for a larger number of instances.

- *Indexing* : Array indexes start at 0, with the first item at index x[0].

- *Last Element* : The last element in an array of size n is at index (n-1), e.g., x[5] for an array of size 6.

- *Sequential Addresses* : Array elements have sequential memory addresses. For example, if x[0] is at address 2120, then x[1] is at 2124, x[2] at 2128, etc.

- *Element Size* : Each element's address increases based on its size; if an int is 4 bytes, addresses increment by 4 for each element

## Program codes -
### 1. *For Array* -
```
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << " Enter array elements: ";
    for ( int i =0; i <n ; i++ )
    { cin >> a[i];
     
    }
       for (int i: a)
     {
        cout << " "<< i ;
     } 
    return 0;
}
```

### 2. *Reverse Array* -
```
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << " Enter array elements: ";
    for ( int i =0; i <n ; i++ )
    { cin >> a[i];
     
    }
       for (j = n-1 ; j>=0; j--)
     {
        cout << " "<< a[j];
     } 
    return 0;
}
```

### 3. *Sum and Average of Array* -
```
#include<iostream>
using namespace std;
int main()
{
     int n, i, j;
     float avg, s = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}

for (j= 0 ; j<n; j++)
{
    s = a[j]+s;
}
avg = s/n;
cout << "The sum of elements of the givne array is: "<<s<<endl;
cout << "The average of the given array is: "<< avg<<endl;

return 0;
}
```

### 4. *Max and Min element of Array* -
```
#include<iostream>
using namespace std;
int main()
{
     int n, i, j, max, min;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
max = a[0];
min = a[0];
for (j= 1 ; j<n; j++)
{
 if (max<a[j])

 {
    max = a [j];
 }
 if (min > a[j])
 {
    min = a[j];
 }
}
cout <<"The maximum element in the given array is: "<<max<<endl;
cout << " The minimun element in the array is: "<<min<<endl;
return 0;

}
```

### 5. *Search elements in Array* -
```
#include<iostream>
using namespace std;
int main()
{
     int n, i, j, s, c = 0, flag = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
cout << "Enter an element to be searched in an array: ";
    cin >> s;
for (j= 0 ; j<n; j++)
{
    if ( a[j]==s)
    {
cout<< "The element"<<" "<< s<< " " << "is present at location: "<<j<<endl;
c++;
flag =1;
    }
}

if( flag ==0)
{
    cout<< "The element"<< " "<< s << " "<< "is not present in the given array";
}
else
{
    cout << "The element" << " "<< s << " "<< "occurs"<< " "<< c << " "<< "times.";
}
return 0;
}
```

## Output -
### 1. *For Array* -
### 2. *Reverse Array* -
### 3. *Sum and Average of Array* -
### 4. *Max and Min element of Array* -
### 5. *Search elements in Array* -
