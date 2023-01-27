class Solution: 
   def select(self, arr, i):
       min = i
       for i in range(i+1, len(arr)):
           if arr[i] < arr[min]:
               min = i
       return arr[min]
   def selectionSort(self, arr,n):
       #code here
       n=len(arr)
       for i in range(n-1):
           min_ind=i
           for j in range(i+1,n):
               if arr[j]<arr[min_ind]:
                   arr[min_ind],arr[j]=arr[j],arr[min_ind]
       return arr
