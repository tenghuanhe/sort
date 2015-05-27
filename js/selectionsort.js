var selectionsort = function (arr) {
	for (var i = 0; i < arr.length; i++) {
		
		var min = arr[i];
		var p = i;

		for (j = i + 1; j < arr.length; j++) {
			if (arr[j] < min) {
				min = arr[j];
				p = j;
			}
		}

		if (p != i) {
			var tp = arr[i];
			arr[i] = arr[p];
			arr[p] = tp;
		}
	}

	return arr;
};

var array = [3, 7, 9, 5, 6, 3, 22, 3, 11, 9];
console.log(selectionsort(array));

