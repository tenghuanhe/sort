def quickSort(alist):
  quickSortHelper(alist, 0, len(alist) - 1)

def quickSortHelper(alist, first, last):
  if first < last:
    p = partition(alist, first, last);

    quickSortHelper(alist, first, p - 1);
    quickSortHelper(alist, p + 1, last);


def partition(alist, first, last):
  pivotValue = alist[first]

  leftmark = first + 1
  rightmark = last

  done = False

  while not done:

    while leftmark <= rightmark and alist[leftmark] <= pivotValue:
      leftmark = leftmark + 1

    while alist[rightmark] >= pivotValue and rightmark >= leftmark:
      rightmark = rightmark - 1

    if rightmark < leftmark:
      done = True
    else:
      tp = alist[leftmark]
      alist[leftmark] = alist[rightmark]
      alist[rightmark] = tp

  tp = alist[first]
  alist[first] = alist[rightmark]
  alist[rightmark] = tp

  return rightmark

alist = [2, 5, 1, 6, 4, 3]
quickSort(alist)
print alist

