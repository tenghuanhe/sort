var bubblesort = function (arr) {
	for (var i = 0; i < arr.length; i++) {
		var flag = 0;
		for (var j = 1; j < arr.length - i; j++) {
			if (arr[j] < arr[j - 1])
			{
				var tp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tp;
				flag = 1;
			}
		}

		console.log(arr);
		if (flag == 0)
			break;
	}

	return arr;
};

var array = [3, 9, 4, 2, 6, 0, 10, 11, 12, 13];

bubblesort(array);

