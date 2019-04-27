Tic-Tac-Toe Code Challenge

By Qiwei Yang

### Preface

Whenever I develop software, I always try to define the scope of the
software as detailed as I can, including functions, data structures,
expandability, etc. However, I skip this essential step this time
because this is a code challenge. I will try my best to demonstrate my
way of thinking, software knowledge, coding and software design
capabilities through the implementation of the challenge without any
constraints.

### Problem Analysis

There are 362,880 (9!) possible different tic-tac-toe games, if the
sequence of steps are considered different. In theory, a brutal force
can be used to exhaustively search all possibilities for each step to
find the optimal move. However, it is not efficient and takes too much
memory.

Fortunately, tic-tac-toe is a well solved game. That means there is an
optimal solution for each step for both players, and if no mistakes are
made by players, it is guaranteed a draw. In other words, a player can
only win when the opponent makes mistakes. see [reference].

### Terminology

Corners: Four Corners of the board.  

![Corner](corner.png) 

Center: the very center slot of 3X3

![center](center.png)


board Side: slots are not corners or center

![side](side.png)


### Strategies


 
[reference] (http://www.cs.jhu.edu/~jorgev/cs106/ttt.pdf)
