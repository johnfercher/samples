def mergeSort(A): 
    print("")
    print(f"merge: {A}")

    if len(A) > 1: 
        print('splitting') 
        mid = len(A)//2 
        left = A[:mid] 
        right = A[mid:] 
               
        mergeSort(left) 
        mergeSort(right) 

        i = j = k = 0         
        while i < len(left) and j < len(right): 
            if left[i] < right[j]: 
                A[k]=left[i] 
                i=i+1 
            else: 
                A[k]= right[j] 
                j=j+1 
            k=k+1 

        while i<len(left): 
            A[k]=left[i] 
            i=i+1 
            k=k+1 

        while j<len(right): 
            A[k]=right[j] 
            j=j+1 
            k=k+1 

    # print('merging ', A) 

    return A

mergeSort([10, 3, 4, 5])