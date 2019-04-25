# Data Structures and Algorithms Lab [[CYCLESHEET]](https://github.com/vinitshahdeo/DSA-Lab-Codes/tree/master/CycleSheet)

[![Data Structures](https://img.shields.io/badge/Data&nbsp;Structures-Algorithms-dodgerblue.svg?style=for-the-badge&logo=c%2B%2B)](https://github.com/vinitshahdeo/DSA-Lab-Codes/fork) [![Fork this on GitHub](https://img.shields.io/badge/Click&nbsp;to&nbsp;Fork-This&nbsp;repository-orange.svg?style=for-the-badge&logo=git&logoColor=white)](https://github.com/vinitshahdeo/DSA-Lab-Codes/fork)

### Lab Assignments for Data Structures and Algoithms

[![C++](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://github.com/vinitshahdeo) [![Check it out](https://forthebadge.com/images/badges/check-it-out.svg)](https://github.com/vinitshahdeo) [![SMILE PLEASE](https://forthebadge.com/images/badges/makes-people-smile.svg)](https://github.com/vinitshahdeo) 

> #### QUEUE ADT

1. In a theme park, the Roller-Coaster ride is started only when a good number of riders line up in the counter (say 20 members). When the ride proceeds with these 20 members, a new set of riders will line up in the counter. This keeps continuing. Implement the above scenario of lining up and processing using arrays with Queue ADT.
  - `Low Level` : Implement the aforementioned problem
  - `Middle Level` : Also count the number of adults and children 
  - `High Level` : If a VIP family arrives, process them before processing others who are already waiting in the queue

2. When burning a DVD it is essential that the laser beam burning pits onto the surface is constantly fed with data, otherwise the DVD fails. Most leading DVD burn applications make use of a circular buffer to stream data from the hard disk onto the DVD. The first part, the ‘writing process’ fills up a circular buffer with data, then the ‘burning process’ begins to read from the buffer as the laser beam burns pits onto the surface of the DVD. If the buffer starts to become empty, the application should continue filling up the emptied space in the buffer with new data from the disk. Implement this scenario using Circular Queue.
  - `Low Level` : Implement the above problem
  - `Middle Level` : Also print the front and rear indices at any instant 
  - `High Level` : At any instant, individually display the data which has been inserted newly and the old data that has not yet been burnt

3. a) There is a garage where the access road can accommodate any number of trucks at one time. The garage is built in such a way that only the last truck entered can be moved out. Each of the trucks is identiﬁed by a positive integer (a truck_id). Implement dynamically to handle truck moves, allowing for the following commands: 

```
    i) On_road (truck_id); 
    
    ii) Enter_garage (truck_ id); 
    
    iii) Exit_garage (truck_id); 
    
    iv) Show_trucks (garage or road);
  ```
    
If an attempt is made to get a truck out which is not the closest to the garage entry, the error message “Truck x cannot be moved” should be displayed.

b) For the aforementioned scenario, assume now a circular road and two entries: one for entry, another for exit. Trucks can get out only in the order they got in. Write a program dynamically to handle truck moves allowing for the following commands 
     
     i) Enter garage (truck name) 
     
     ii) Exit garage (truck name) 
     
     iii) Show trucks

  - `Low Level` : Implement the above problem
  - `Middle Level` : Also check the number of services done so far to decide if service charge is required or not
  - `High Level` : Assuming any nth truck will need a longer period of time for service, that particular truck should be retained in the garage and the links in the stack should be modified accordingly


> #### LIST ADT

1. Details such as Register number, name, quiz-3 marks of those students who wrote for SET-question paper and of those who wrote for SET-B question paper are maintained in sorted order in two separate lists L1 and L2. Write a program to merge the two lists in sorted order so as to facilitate mark entry in faculty login. 

  - `Low Level` : Merging list 2 at the end of list 1
  - `Middle Level` : Implement the above problem 
  - `High Level` : Enhance the above problem for unsorted lists

2. Write a program to maintain the records of students in an effective dynamic structure. Search a particular record based on the roll number and display the previous and next values of that node with time complexity of O(1).

  - `Low Level`: Implement the above problem
  - `Middle Level` : Delete user specified record and then display the current predecessor and successor
  - `High Level` :Also for the first node make the last node as the predecessor and for the last node make the first node as the successor and thus make it a circular doubly linked list	[2 marks]

3. Assume FLAMES game that tests for relationship has to be implemented using a dynamic structure. The letters in the FLAMES stand for Friends, Love, Affection, Marriage, Enmity and Sister. Initially store the individual letters of the word ‘flames’ in the nodes of the dynamic structure. Given the count of the number of uncommon letters in the two names ‘n’, write a program to delete every nth node in it, till it is left with a single node. If the end of the dynamic structure is reached while counting, resume the counting from the beginning. Display the letter that still remains and the corresponding relationship Eg., If Ajay and Jack are the two names, there are 4 uncommon letters in these. So delete 4th node in the first iteration and for the next iteration start counting from the node following the deleted node.

  - `Low Level` :Delete only the first nth letter only
  - `Middle Level` :Implement the above problem 
  - `High Level` : For the same problem instead of deleting the nth letter, make the nth letter as the last node. Hence at last the first node gives the relationship

4. Assume in the Regional Passport Office, a multitude of applicants arrive each day for passport renewal. A list is maintained in the database to store the renewed passports arranged in the increased order of passport ID. The list already would contain there cords renewed till the previous day. Apply Insertion sort technique to place the current day’s records in the list.

Later the office personnel wish to sort the records based on the date of renewal so as to know the count of renewals done each day. Taking into consideration the fact that each record has several fields (around 25 fields), follow Selection sort logic to implement the same.

  - `Low Level` : Implement one of the above scenarios 
  - `Middle Level` : Implement the problem for both the scenarios 
  - `High Level` : Also your program should check the stability of both the algorithms
  
### Thanks!

[![Author](https://img.shields.io/badge/Author-@vinitshahdeo-gray.svg?colorA=gray&colorB=dodgerblue)](https://github.com/vinitshahdeo/) ![Tweet Now](https://img.shields.io/twitter/url/https/github.com/vinitshahdeo/DSA-Lab-Codes.svg?style=social)

---

[![Built with love](https://forthebadge.com/images/badges/built-with-love.svg)](https://github.com/vinitshahdeo) [![for you](https://forthebadge.com/images/badges/for-you.svg)](https://github.com/vinitshahdeo) [![Powered By](https://forthebadge.com/images/badges/powered-by-oxygen.svg)](https://facebook.com/vinitshahdeo)
