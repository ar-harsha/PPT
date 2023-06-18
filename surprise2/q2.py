# -*- coding: utf-8 -*-
"""
Created on Sun Jun 18 14:58:56 2023

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
    print()


def fun(head,n):
    if(not head):
        return n//10
    n+=head.data
    return fun(head.next,n*10)

def add(h1,h2):
    cur1 = h1
    cur2 = h2
    ans = node(0)
    l = fun(cur1,0) + fun(cur2,0)
    print(l)
    temp = ans
    while(l):
        rem = l%10
        temp.next = node(rem)
        l = l//10
        temp=temp.next
    return ans.next
    

arr1 = [9,9,9,9,9,9,9]
arr2 = [9,9,9,9]

root1 = arraytoll(arr1)
root2 = arraytoll(arr2)

display(root1)
display(root2)

display(add(root1,root2))