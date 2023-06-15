# -*- coding: utf-8 -*-
"""
Created on Thu Jun 15 14:18:31 2023

@author: harsha
"""

class node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class ll:
    def __init__(self):
        self.head = None
        
def insert(root, item):
    temp = node(item)
      
    if (root == None):
        root = temp
    else :
        ptr = root
        while (ptr.next != None):
            ptr = ptr.next
        ptr.next = temp
      
    return root
        
def arraytoll(arr):
    root = None
    for i in range(len(arr)):
        root = insert(root, arr[i])
    return root

def display(root):
    while (root != None) :
        print(root.data, end = "->")
        root = root.next


def merge(h1,h2):
    if(h1==None):
        return h2
    if(h2==None):
        return h1
    if(h1.data<h2.data):
        h1.next = merge(h1.next,h2)
        return h1
    else:
        h2.next = merge(h1,h2.next)
        return h2


    

# link = ll()
# link.head = node(1)
arr1 = [5,10,15]
arr2 = [2,3,20]
root1 = arraytoll(arr1)
root2 = arraytoll(arr2)
ans = merge(root1,root2)
display(ans)