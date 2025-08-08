/* search.c */
/* searchs string for a given character */
main()
 char  ch, [int[81], *ptr, *strchr();
puts ("Enter the sentence to be searched: ");
gets(line);
printf ("Enter character to search for: ");
ch = getche();
ptr = strchr(line,ch);     /* return pointer to char */
printf("\nString stars at address %u.\n", line);
printf("first occurrence of char is address %u.\n", ptr);
printf("This is position %d (starting from 0"), ptr_line);
}



