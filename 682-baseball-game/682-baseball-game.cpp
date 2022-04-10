class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stack;
    int numOne;
    int numTwo;
    int apna_javab = 0;

    for (auto value : ops)
    {
        if (value == "C")
        {
            stack.pop();
        }
        else if (value == "D")
        {
            stack.push(stack.top() * 2);
        }
        else if (value == "+")
        {
            numOne = stack.top();
            stack.pop();
            numTwo = numOne + stack.top();
            stack.push(numOne);
            stack.push(numTwo);
        }
        else
        {
            stack.push(stoi(value));
        }
    }

    while (!stack.empty())
    {
        apna_javab += stack.top();
        stack.pop();
    }

    return apna_javab;
    }
};