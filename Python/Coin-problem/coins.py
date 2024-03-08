#INPUT
coins = int(input("Enter amount: "))

print("OCCURANCES")

#DIVISIBLES
#THOUSAND
thousand = int(coins/1000)
print("1000:",thousand)
coins = coins%1000

#FIVE_HUNDRED
five_hundred = int(coins/500)
print("500:",five_hundred)
coins = coins%500

#TWO_HUNDRED
two_hundred = int(coins/200)
print("200:",two_hundred)
coins = coins%200

#HUNDRED
hundred = int(coins/100)
print("100:",hundred)
coins = coins%100

#FIFTY
fifty = int(coins/50)
print("50:",fifty)
coins = coins%50

#TWENTY
twenty = int(coins/20)
print("20:",twenty)
coins = coins%20

#TEN
ten = int(coins/10)
print("10:",ten)
coins = coins%10

#FIVE
five = int(coins/5)
print("5:",five)
coins = coins%5

#FIFTY
one = int(coins/1)
print("1:",one)
coins = coins%1
