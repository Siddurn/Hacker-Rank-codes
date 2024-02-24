"""https://www.hackerrank.com/challenges/nested-list/problem?isFullScreen=true
Given the names and grades for each student in a class of  students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line."""
#******************************************************************************
#Create an empty list for storing students names and sores each in a sublists 
students = []
#Create two lists for storing name and score seperately
name=['Vinay','timma','shree','om','guru']
score=[37.21,37.21,37.2,41,39]

#students is a 2D list which has name and score at 0 and 1 index
for i in range(0,len(name)):
    students.append([name[i], score[i]])
#this lambda function defines the sorting key to be the second element of each sublist.
students.sort(key=lambda x:x[1])

newlist=[]
#get least score in order to remove it from list
least=students[0][1]
print(students)
#to remove the least score we shold remove all matching scores
for i in students:
    if i[1] != least:
       newlist.append(i)
print(newlist)

secoundLow=[]
"""Now we have a new list which has scores arranged in ascending order starting from secound least"""
#SecoundLow lists the socound lowest scorrer names and scores
for i in newlist:
    if i[1] == newlist[0][1]:
        secoundLow.append(i)
print(f"Secound Highest {secoundLow}")
#sorting the names in alphabetical order and displaying the names
secoundLow.sort()
for i in secoundLow:
    print(i[0])
