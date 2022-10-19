#!/usr/bin/python3
import shutil

# use copyfile()
problemList=['a.cpp','b.cpp','c.cpp','d.cpp','e.cpp','f.cpp','g.cpp']
userChoice=input()
flag=0
for i in problemList:
  if(userChoice==i[0]):
    shutil.copyfile('template.txt',i)
    flag=1
    break
    
if(not flag):
  for i in problemList:
    shutil.copyfile('template.txt',i)
        

