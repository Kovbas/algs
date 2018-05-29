//AAAABBBCCXYZDDDDEEEFFFAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBB

//A4B3C2XYZD4E3F3A6B28





void main()

{

 	//AAAABBBCCXYZDDDDEEEFFFAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBB
	//A4B3C2XYZD4E3F3A6B28

	char str[] = "AAAABBBCCXYZDDDDEEEFFFAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBB";
	printf("%s\n", str);

	char ch = str[0];
	size_t n = 0;
	size_t pos = 0;
	for (size_t i = 0; ch != '\0'; ++i)
	{
		if (ch == str[i])
		{
			++n;
			continue;
		}
		else
		{
			str[pos] = ch;
			++pos;
			if (n > 1)
			{
				strcpy(str + pos, std::to_string(n).c_str());
				pos += std::to_string(n).size();
			}

			ch = str[i];
			n = 1;
		}

		if (ch == '\0') break;
	}

	printf("%s\n", str);
}
