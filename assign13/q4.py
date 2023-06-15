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




def reversealternate(head,k):
    count=1;
    cur = head;
    prev = None
    #reversed k elements
    while(cur!=None and count<=k):
        temp = cur.next
        cur.next = prev
        prev = cur
        cur = temp
        count+=1
    #head to k+1th node
    if(head!=None):
        head.next = cur
    #skip k nodes
    count=0
    while(count<k-1 and cur!=None):
        cur = cur.next
        count+=1
    if(cur!=None):
        cur.next = reversealternate(cur.next, k)
    return prev


    

link = ll()
link.head = node(1)
arr = [1,2,3,4,5,6,7,8,9,10,11]
root = arraytoll(arr)
ans = reversealternate(root,3)
display(ans)