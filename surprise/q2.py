# -*- coding: utf-8 -*-
"""
Created on Sun Jun  4 14:48:05 2023

@author: harsha
"""

def firstnonrepeat(s):
    d = {}
    for i in s:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
    for i in range(len(s)):
        if d[s[i]]==1:
            return i
    return -1

    
print(firstnonrepeat("leetcode"))
print(firstnonrepeat("loveleetcode"))
print(firstnonrepeat("aabb"))