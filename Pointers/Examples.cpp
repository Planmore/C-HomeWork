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
