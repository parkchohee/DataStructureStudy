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
		if (c == '+' || c == '-' || c == '*' || c == '/')	//�����ڸ� ������..
		{
			// 2���� pop�ؼ� �����..
			double val2 = st.pop();
			double val1 = st.pop();

			// �ٽ� ���ÿ� �ִ´�....
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
		else if (c >= '0' && c <= '9')	// �����Է��� ������..
		{
			ungetc(c, fp);	// �ԷµȰ��� �ٽ� fp�� �����ϰ�..
			double val;
			fscanf_s(fp, "%lf", &val); // fp�� double���·� �о� val������ �����Ѵ�..
			st.push(val);	// ���ÿ� val������ �����Ѵ�.
		}
	}

	return st.pop(); // ����� ������ ���ÿ� ���������� ���� ���� ��� ����̴�..
}
