function evaluate(expression) {
	let tokens = expression.split(" ");
	let values = [];
	let ops = [];
	for (let i = 0; i < tokens.length; i++) {
		if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
			ops.push(tokens[i]);
		} else {
			values.push(parseInt(tokens[i]));
		}
	}
}