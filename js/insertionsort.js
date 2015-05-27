var insertionsort = function (arr) {
	for (var i = 1; i < arr.length; i++) {
		var x = arr[i];
		j = i;

		while (j > 0 && arr[j - 1] > x) {
			arr[j] = arr[j - 1];
			j--;
		}

		arr[j] = x;
	}

	return arr;
};

var array = [6, 4, 2, 3, 5, 2, 10, 9];
console.log(insertionsort(array));

