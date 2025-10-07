# Pointers In C++

## Aim:

To study and implement C++ Pointers basics.

## Theory:

A pointer in C++ is a variable that stores the memory address of another variable. Pointers are powerful tools that allow direct memory access and manipulation, making them useful for dynamic memory allocation, arrays, functions, and data structures like linked lists.

#### 1. Pointer Declaration-

##### int *ptr;

- This declares ptr as a pointer to an integer. The asterisk * indicates that ptr is not a normal integer variable but a pointer.

#### 2. Pointer Initialization-

##### int a = 10;

##### int *ptr = &a;

- Here, &a is the address of variable a, and ptr stores this address. So, ptr "points to" a.

#### 3. Dereferencing Pointers-

##### cout << *ptr;

- The *ptr expression accesses the value stored at the memory location pointed to by ptr. This is called dereferencing.

#### 4. Pointer arithmetic-

- Pointers can be incremented or decremented. When incremented, a pointer points to the next memory location of its type.

##### ptr++;

#### 5. Null Pointer-

##### int *ptr = nullptr;

- A null pointer is a pointer that does not point to any memory location. It is used for safety to avoid accidental memory access.

#### 6. Pointer to Pointer-

##### int a = 5;

##### int *p = &a;

##### int **pp = &p;

- pp is a pointer to pointer — it stores the address of pointer p.

## Advantages of Pointers: 
**1.** **Efficient Memory Access**: Pointers allow direct access to memory locations, enabling faster and more efficient manipulation of data.

**2.** **Dynamic Memory Management**: Pointers enable dynamic allocation and deallocation of memory during runtime using new and delete.

**3.** **Passing by Reference**: Using pointers, functions can modify the original variables by passing their addresses, avoiding unnecessary copying of data.

**4.** **Array and String Handling**: Pointers provide an easy way to traverse and manipulate arrays and strings.

**5.** **Data Structures**: Pointers are fundamental for implementing complex data structures like linked lists, trees, and graphs.

**6.** **Function Pointers**: Allow dynamic selection of functions, enabling callback mechanisms and more flexible program design.

## 1. Algorithm: Incrementation in Pointers

**Step 1**: Start.

**Step 2**: Declare an integer variable a and initialize it to 50.

**Step 3**: Declare an integer pointer ptr.

**Step 4**: Assign the address of a to ptr.

**Step 5**: Print "FLOAT" (misplaced label; ignore for now).

**Step 6**: Print the address stored in ptr and the value pointed to by ptr.

**Step 7**: Increment ptr by 1.

- This moves the pointer to the next memory location for an int (usually +4 bytes).

**Step 8**: Print the new address in ptr and try to dereference it.

- Dereferencing may result in garbage or undefined behavior.

**Step 9**: Print "FLOAT".

**Step 10**: Declare a float variable b and initialize it to 70.1.

**Step 11**: Declare a float pointer bptr and assign the address of b.

**Step 12**: Print the address stored in bptr and the value of *ptr.

- Note: *ptr is re-used from earlier (might be garbage).

**Step 13**: Increment bptr.

- Moves to the next float (typically +4 bytes).

**Step 14**: Print the new address in bptr and again print *ptr.

- Again, *ptr is not logically relevant here.

**Step 15**: Print "DOUBLE".

**Step 16**: Declare a double variable c and initialize it to 23.34567.

**Step 17**: Declare a double pointer cptr and assign the address of c.

**Step 18**: Print the address stored in cptr and *ptr.

- Again, *ptr is unrelated and potentially garbage.

**Step 19**: Increment cptr.

- Moves to the next double (typically +8 bytes).

**Step 20**: Print the new address in cptr and *ptr again.

**Step 21**: End.

## 2. Algorithm: Addition and Substraction of two numbers

**Step 1**: Start.

**Step 2**: Declare integer variables a, b, sum, and diff.

**Step 3**: Prompt the user to enter the first number.

**Step 4**: Read the first number and store it in variable a.

**Step 5**: Prompt the user to enter the second number.

**Step 6**: Read the second number and store it in variable b.

**Step 7**: Declare integer pointers aptr and bptr.

**Step 8**: Assign the address of a to pointer aptr.

**Step 9**: Assign the address of b to pointer bptr.

**Step 10**: Calculate the sum by dereferencing aptr and bptr and adding the values.

**Step 11**: Store the sum in variable sum.

**Step 12**: Print the sum.

**Step 13**: Calculate the difference by dereferencing aptr and bptr and subtracting the values.

**Step 14**: Store the difference in variable diff.

**Step 15**: Print the difference.

**Step 16**: End.

## 3. Algorithm: Reversing an array using pointers

**Step 1**: Start.

**Step 2**: Declare an integer array arr of size 5.

**Step 3**: Prompt the user to enter 5 elements.

**Step 4**: For each index i from 0 to 4:

- Read input from the user.

- Store the input value at address (arr + i) (i.e., arr[i]).

**Step 5**: Print the original array by iterating from 0 to 4:

- Print the value at address (arr + j) for each index j.

**Step 6**: Initialize two pointers:

- Start pointing to the first element of the array (arr).

- End pointing to the last element of the array (arr + 4).

**Step 7**: While start is less than end:

- Swap the values pointed by start and end using a temporary variable temp.

- Increment start to point to the next element.

- Decrement end to point to the previous element.

**Step 8**: Print the reversed array by iterating from 0 to 4:

- Print the value at address (arr + l) for each index l.

**Step 9**: End.

## 4. Algorithm: Printing a string using pointers

**Step 1**: Start.

**Step 2**: Declare and initialize a character array str with the string "Hello, I am Swarali Gurjar!".

**Step 3**: Declare a character pointer ptr.

**Step 4**: Assign the address of the first character of str to ptr.

**Step 5**: Print the string by outputting ptr.

- Since ptr points to the start of a null-terminated string, printing ptr prints the entire string.

**Step 6**: End.

## Conclusion: 
Pointers in C++ allow direct manipulation of memory addresses, enabling efficient data access and dynamic memory management. They are essential for tasks like array manipulation, dynamic allocation, and passing variables by reference. However, misuse of pointers can lead to errors such as memory leaks or segmentation faults, so careful handling is necessary.# pointers-in-c-plus-plus
