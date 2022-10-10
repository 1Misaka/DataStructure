#define Maxsize 255

typedef struct {
	char ch[Maxsize];
	int length;
}String;

void InitString(String& T) {//初始化
	T.length = 0;
}

void Into(String& T, char c) {//入串
	++T.length;
	T.ch[T.length] = c;

}

void Out(String& T, char c) {//出串
	c = T.ch[T.length];
	--T.length;
}

bool SubString(String& Sub, String T, int pos, int length) {//获取子串
	if ((pos + length-1) > T.length)
		return false;
	for (int i = pos; i < pos+length; ++i)
	{
		Into(Sub, T.ch[i]);
	}
	return true;
}

int Compare(String S,String T) {//比较串长
	if ((S.length - T.length) > 0)
	{
		return T.length;
	}
	else if((S.length - T.length) < 0) {
		return S.length;
	}
	else
	{
		return S.length;
	}
}
int StringCompare(String S, String T) {//字符串比较大小
	int minilength = Compare(S, T);
	for (int i = 1; i <= minilength; ++i)
	{
		if (S.ch[i] > T.ch[i]) {
			return -1;
			break;
		}
		else if(S.ch[i]< T.ch[i]) {
			return 1;
			break;
		}
	}
		if (S.length > T.length)
			return -1;
		if (S.length < T.length)
			return 1;
		if (S.length == T.length)
			return 0;

}

int FindSub(String T, String Sub, int tmp) {//寻找子串位置
	for (int i =tmp ,j=1; j <= Sub.length; ++i,++j)
	{
		if (T.ch[i]!=Sub.ch[j])
		{
			return 0;
			break;
		}

	}
	if (Sub.ch[Sub.length] == T.ch[tmp+Sub.length-1])
    {
		return tmp;
	}

}

