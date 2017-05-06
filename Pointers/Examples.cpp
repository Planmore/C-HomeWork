int i = 10;
	
	cout << "The value os variable i is: " << i << endl;
	cout << "The memory address of variable i is: " << &i << endl;
	cout << "The value of variable i using * operator is: " << *(&i) << endl;
	
	int *p[5]; // array of pointers to integer varaibles
	char ch1 = 'a', ch2 = 'b';
	char ch3[4] = { 'c','d','e','f'};
	/* Base address of array ch[3] is stored at ptr[2].
	   Equivalently ptr[2] = &ch[0]; */
	
	char *ptr[3];
	
	ptr[0] = &ch1; // 'a'
	ptr[1] = &ch2; // 'b'
	ptr[2] = ch3; // ptr[2] = &ch3[0];
	
	
	cout << *ptr[0] << endl;
	cout << *ptr[1] << endl;
	*ptr[0] = 'z';
	*ptr[1] = 'w';
	cout << *ptr[0] << endl;
	cout << *ptr[1] << endl;

// Arrays
double arr[5];
	double *ptr;
	
	cout << "Displying address using arrays: " << endl;
	for (int i = 0; i < 5; i++){
		cout << "&arr[" << i << "] = " << &arr[i] << endl;
	}
	ptr = arr; // ptr = &arr[0];
	cout << "\n Displaying address using pointers: " << endl;
	for (int i = 0; i < 5; ++i){
		cout << "ptr + " << i << " = " << ptr + i << endl;
	}
// array pointer notation
	double arr[5] = {3,4,5,2,5};
	
	cout << "Displaying address using pointers notation: "<< endl;
	for (int i = 0; i < 5; i++){
		cout << arr + i << endl;
	}
	cout << "Displaying values using pointers notation" << endl;
	for (int i = 0; i < 5; i++){
		cout << *(arr + i) << endl;
	}
// Dynamic memory allocation


int *ptr1;
	ptr1 = new int;
	
	*ptr1 = 10;
	cout << *ptr1 << endl;
	*ptr1 = 2 + *ptr1;
	cout << *ptr1 << endl;
	
	delete ptr1;
	ptr1 = new int[3];
	*(ptr1 + 0) = 2;
	*(ptr1 + 1) = 4;
	ptr1[2] = 6;
	cout << "ptr = " << ptr1 << endl;
	for (int i = 0; i < 3; i++){
		cout <<  "address " << ptr1 + i << endl;
		cout << "value " << *(ptr1 + i) << endl;
	}
	
	for (int i = 0; i < 3; i++){
		cout << ptr1[i] << endl;
	}


// Chapter 6: Linkages Between Arrays and Pointer Syntax in C++
	int arr[3] = {10,15,20};
	
	int *ptr = new int[3];
	
	*(ptr + 0) = 2;
	*(ptr + 1) = 4;
	*(ptr + 2) = 6;
	
	cout << "arr[0] using array notation = " << arr[0] << endl;
	cout << "arr[0] using pointer notation = " << *(arr + 0) << endl;
	
	// Access the base address of the array that the pointer points to
	cout << ptr << endl;
	// Access the address of the array arr;
	cout << arr << endl;
