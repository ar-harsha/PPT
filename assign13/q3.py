# -*- coding: utf-8 -*-
"""
Created on Thu Jun 15 12:25:14 2023

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

def reverse(first,last):
    prev = last
    while(first!=last):
        temp = first.next
        first.next = prev
        prev = first
        first = temp
    return prev


def reversek(head,k):
    cur = head
    for i in range(k):
        if(cur==None):
            return reverse(head,cur)
        cur = cur.next
    ans = reverse(head, cur)
    head.next = reversek(cur, k)
    return ans
    

link = ll()
link.head = node(1)
arr = [1,2,3,4,5,6,7,8,9,10,11]
root = arraytoll(arr)
ans = reversek(root, 4)
display(ans)