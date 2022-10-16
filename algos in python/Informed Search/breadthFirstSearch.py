from collections import deque
 
def BFS(b1, b2, initial_state, goal_state):
    # Map is used to store the states
    map = {}
    isSolvable = False
    path = []
    
    queue = deque() # Queue to maintain states
 
    queue.append(initial_state) # Initialing with initial state
 
    while (len(queue) > 0):
        # Current state
        current_state = queue.popleft()
 
        # If this state is already visited
        if ((current_state[0], current_state[1]) in map):
            continue
 
        # Doesn't met bottle constraints
        if ((current_state[0] > b1 or current_state[1] > b2 or current_state[0] < 0 or current_state[1] < 0)):
            continue
 
        # Filling the vector for constructing the solution path
        path.append([current_state[0], current_state[1]])
 
        # Marking current state as visited
        map[(current_state[0], current_state[1])] = 1
 
        # Check Goal State
        if (current_state[0] == goal_state[0] and current_state[1] == goal_state[1]):
            isSolvable = True
 
            # Print the solution path
            solution_path = len(path)
            for i in range(solution_path):
                print("(", path[i][0], ",", path[i][1], ")")
            break
 
        # If we have not reached final state start developing intermediate states to reach solution state
        queue.append([current_state[0], b2])  # Fill Bottle 2
        queue.append([b1, current_state[1]])  # Fill Bottle 1
 
        for ap in range(max(b1, b2) + 1):
 
            # Pour amount ap from Bottle 2 to Bottle 1
            c = current_state[0] + ap
            d = current_state[1] - ap
 
            # Check if this state is possible or not
            if (c == b1 or (d == 0 and d >= 0)):
                queue.append([c, d])
 
            # Pour amount ap from Bottle 1 to Bottle 2
            c = current_state[0] - ap
            d = current_state[1] + ap
 
            # Check if this state is possible or not
            if ((c == 0 and c >= 0) or d == b2):
                queue.append([c, d])
 
        # Empty Bottle 2
        queue.append([b1, 0])
 
        # Empty Bottle 1
        queue.append([0, b2])
 
    # No, solution exists if ans=0
    if (not isSolvable):
        print(map)
        print("No solution")
 

# Bottle Puzzle solve using BFS
if __name__ == '__main__':
 
    Bottle1, Bottle2 = 10, 8
    initial_state = (0,0)
    goal_state = (2,8)
    
    print("Path from initial state " "to solution state ::")
 
    BFS(Bottle1, Bottle2, initial_state, goal_state)
 