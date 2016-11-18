int welcome()
{
	int c;
	FILE *file;
	file = fopen("readme.txt", "r");
	if (file) {
		    while ((c = getc(file)) != EOF)
				    printf("%c",c);
			fclose(file);
	}
return 0;
}
