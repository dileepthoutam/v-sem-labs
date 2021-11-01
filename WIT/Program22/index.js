function evaluate(expression) {
    let tokens = expression.split("");
    let values = [];
    let ops = [];
    for (let i = 0; i < tokens.length; i++) 
    {
        if (tokens[i] >= "0" && tokens[i] <= "9") {
            let temp = "";
            while (i < tokens.length && (tokens[i] >= "0" && tokens[i] <= "9") || (tokens[i]==".")) 
            {
                temp += tokens[i++];
            }
            values.push(parseFloat(temp, 10));
            i--;
        }
        else if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") 
        {
            while (ops.length > 0 && hasPrecedence(tokens[i], ops[ops.length - 1])) 
            {
                values.push(applyOp(ops.pop(), values.pop(), values.pop()));
            }
            ops.push(tokens[i]);
        }
    }
    while (ops.length > 0) 
    {
        values.push(applyOp(ops.pop(), values.pop(), values.pop()));
    }
    return values.pop();
}

function hasPrecedence(op1, op2) {
    if ((op1 == "*" || op1 == "/") && (op2 == "+" || op2 == "-")) {
        return false;
    }
    return true;
}

function applyOp(op, b, a) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) {
                document.write("Cannot divide by zero");
            }
            return parseFloat(a / b, 10);
    }
    return 0;
}

function display(x) {
    if (x !== '=') {
        document.getElementById("answer").value += x;
    }
    else {
        var expression = document.getElementById("answer").value;
        document.getElementById("answer").value = evaluate(expression);
    }
}
