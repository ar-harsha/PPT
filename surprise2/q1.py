# -*- coding: utf-8 -*-
"""
Created on Sun Jun 18 14:47:55 2023

@author: harsha
"""
import math

def squareroot(n):
    l = 0;r = n;
    while(l<r):
        mid = math.floor((l+r)/2)
        if(mid*mid == n):
            return mid
        elif mid*mid > n:
            r = mid
        else:
            l = mid+1
    return l-1
    

print(squareroot(64))
print(squareroot(8))
print(squareroot(4))