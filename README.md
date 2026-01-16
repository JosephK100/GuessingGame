# GuessingGame
Second lab for CSC121
```
main():
    Create an integer called "guess". 
    Create a "random" integer called "answer".
    Create an integer called "turns" which will cap at a generous 7-10 guesses. 

    Begin by asking the user for thier name.
    Follow up with a greeting.
    Generate a random number between 1-100.
    
    Use a while loop to execute the guessing game.
    Set KeepGoing to true to make sure it works.
    Set KeepGoing to false to make sure the while loop ends. 
 
        While KeepGoing(): 
            if guess <  answer:
                print ("Too low")
            if guess > answer:
                print ("Too high") 
            if guess is equal to answer:
                print ("You got it!") 
            KeepGoing = False

    Print a statment depending on how many turns were taken by the user. 
    If the turns were less than 8:
        Say "Great job!"
    If the turns were more than 8: 
        Say "Nice job!"
    If the turns exceed 10:
        Say "Wanna give it another shot?"
```
