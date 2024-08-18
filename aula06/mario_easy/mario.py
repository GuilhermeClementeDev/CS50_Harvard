while True:
    try:
        height = int(input("Height: "))
        if height >= 0 and height <= 8:
            break
    except ValueError:
        pass
spaces = height
n = 1
while height >= n:
  j = 1
  while spaces > j:
    print (" ", end='')
    j += 1
  spaces -= 1  
  len = 0
  while len < n:
      print("#", end='')
      len += 1
  print("")
  n += 1    