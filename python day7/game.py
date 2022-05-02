import random

def swg(comp,mine):
    if(comp==mine):
        return None

    if(comp=='s' and mine=='g'):
        return True;
    elif(comp=='w' and mine==f's'):
        return True
    elif(comp=='g' and mine=='w'):
        return True
    else:
        return False

choice=('s','w','g')
comp=random.randint(0,2)
comp=choice[comp]
mine=input("choice either s w or g " )
win=swg(comp,mine)

if win:
    print("you won the game!  congratlation")
else:
    print("you chosen the {mine} and computer chose{comp}")
    print("you lost the  game!!")
if wn is None:
    print("game drawn")