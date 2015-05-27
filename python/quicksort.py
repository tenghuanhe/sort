def qsort(array = [12, 4, 5, 6 ,7, 5, 3, 2, 1 ,15]):
  less = []
  equal = []
  greater = []

  if len(array) > 1:
    pivot = array[0]

    for x in array:
      if x < pivot:
        less.append(x)
      if x == pivot:
        equal.append(x)
      if x > pivot:
        greater.append(x)

    return qsort(less) + equal + qsort(greater)

  else:
    return array

def sort(arr):
  if len(arr) <= 1:
    return arr
  else:
    return sort([x for x in arr[1:] if x<arr[0]]) + [arr[0]] + sort([x for x in arr[1:] if x>=arr[0]])

def main():
  print qsort()
  print sort([3, 7, 9, 5, 6, 3])

if __name__ == "__main__":
  main()

