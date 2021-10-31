function exampleFunction() {
	function sqrt(x) {
		return x * x;
	}
	function add(x, y) {
		return x + y;
	}
	console.log(sqrt(add(20, 5)));
}

exampleFunction();