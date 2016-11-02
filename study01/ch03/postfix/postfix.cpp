#include "postfix.h"



postfix::postfix()
{
}


postfix::~postfix()
{
}

double postfix::calcPostfixExpr(FILE * fp)
{
	char c;
	arrayStack<double> st;

	while ((c = getc(fp)) != '\n')
	{
		if (c == '+' || c == '-' || c == '*' || c == '/')	//연산자를 만나면..
		{
			// 2개를 pop해서 계산후..
			double val2 = st.pop();
			double val1 = st.pop();

			// 다시 스택에 넣는다....
			switch (c)
			{
			case '+':
				st.push(val1 + val2);
				break;
			case '-':
				st.push(val1 - val2); 
				break;
			case '*':
				st.push(val1 * val2); 
				break;
			case '/':
				st.push(val1 / val2); 
				break;
			}

			//st.display();
		}
		else if (c >= '0' && c <= '9')	// 숫자입력이 있으면..
		{
			ungetc(c, fp);	// 입력된것을 다시 fp에 저장하고..
			double val;
			fscanf_s(fp, "%lf", &val); // fp를 double형태로 읽어 val변수에 저장한다..
			st.push(val);	// 스택에 val변수를 저장한다.
		}
	}

	return st.pop(); // 계산이 끝나면 스택에 마지막으로 남는 값은 계산 결과이다..
}
