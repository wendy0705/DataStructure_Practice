    if(arr[i] > arr[i + gap]){
                    swap(arr[i], arr[i + gap]);
                    swapped = true;
                    cout << "Swapped: " << arr[i] << " and " << arr[i + gap] << endl;
                }