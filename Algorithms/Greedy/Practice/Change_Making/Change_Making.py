def makechange(lst, money):
    count = 0
    for i in range(len(lst)-1, -1, -1):
        num = int(money/lst[i])
        if num==0: 
            continue
        count += num
        money -= (num*lst[i])
        if money==0:
            break
    return count

def makechange2(lst, money):
    temp = []
    for i in range(len(lst)-1,-1,-1):
        while (money >= lst[i]):
            temp.append(lst[i])
            money-=lst[i]
    return temp

lst_coin = [1, 2, 5]
money = 11
print("Number of coins can be maked change for {} is: {}".format(money, makechange(lst_coin, money)))
lst = makechange2(lst_coin, money)
print("Solution: {}".format(lst))