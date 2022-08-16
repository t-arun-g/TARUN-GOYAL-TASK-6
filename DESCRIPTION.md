

# WALKING TILES

Peter is a builder who is building a path with n tiles of different lengths.
The tiles are represented by 1<= *a<sub>i</sub>* where the i is the ith tile. The path is numbered by ports *1, 2, 3...*
The tile *a<sub>i</sub>* can be placed on only the port *a<sub>i</sub>* th number on the path. for example the tile numbered *1* can be placed on the *1st* number of the path. 
Given : *a<sub>i</sub>* is *i*.

*Constraints* : Two tiles cannot overlap and length of tiles are varying. What is the maximum tile number that peter can cover .

**INPUT**
 The first line contains the number of test cases t.
 The next t lines each contain a test case with first line as n
 The second line contains n integers representing sizes of tiles.
 It is given that
  *0<= t <= 1000*
  *0<= n <= 2500*
  *0<= size of tiles <= 200*

**OUTPUT**
 print the max path length covered by peter for each test case in new line.

---test case 1 ---  
2  
5  
1 2 3 4 5  
3  
3 4 2

---output---  
3  
1