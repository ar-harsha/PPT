# -*- coding: utf-8 -*-
"""
Created on Sun Jun  4 14:39:04 2023

@author: harsha
"""

def movezeros(arr):
    i=0
    n=len(arr)
    while(i<n):
        if(arr[i]==0):
            break
        i+=1
    j=i+1
    while(j<n and i<n):
        if(arr[j]!=0):
            temp = arr[j]
            arr[j] = arr[i]
            arr[i] = temp
            i+=1
        j+=1
    return arr
        
    
nums1 = [0,1,0,3,12]
nums2 = [0]
print(movezeros(nums1))
print(movezeros(nums2))