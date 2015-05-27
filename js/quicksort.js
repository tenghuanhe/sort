var quicksort = function (arr) {
	if (arr.length <= 1) {
		return arr;
	}

	var pivotIndex = Math.floor(arr.length / 2);
	var pivot = arr[pivotIndex];

	var left = [];
	var right = [];

	for (var i = 0; i < arr.length; i++) {
		if (i != pivotIndex) {
			
			if (arr[i] < pivot) {
				left.push(arr[i]);
			} else {
				right.push(arr[i]);
			}
		}
	}

	return quicksort(left).concat([pivot], quicksort(right))
};

var array = [4, 5, 7, 32, 9, 3, 21, 4, 3, 6];

console.log(array);

console.log(quicksort(array));

