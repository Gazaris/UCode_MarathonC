int mx_mid(int a, int b, int c)
{
	if(a >= b && a <= c) return a;
	else if(b >= a && b <= c) return b;
	else if(c >= a && c <= a) return c;
	return 0;
}
