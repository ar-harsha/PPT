# -*- coding: utf-8 -*-
"""
Created on Thu Jun 15 15:35:48 2023

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




def deletelast(head,key):
    cur = head;
    if(cur.data == key):prev= cur
    else:prev = None
    prev = None
    while(cur.next!=None):
        temp = cur.next
        if(temp.data == key and temp!=None):
            prev = cur
        cur = cur.next;
    prev.next = prev.next.next


    

link = ll()
link.head = node(1)
arr = [1,2,3,5,2,10]
root = arraytoll(arr)
deletelast(root,2)
display(root)