#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int result;

    ht = hash_table_create(1024);
    result = hash_table_set(ht, "betty", "holberton");
    printf("RESULT: %d\n",result);
    result = hash_table_set(ht, "hetairas", "holberton");
    printf("RESULT: %d\n",result);
    result = hash_table_set(ht, "mentioner", "holberton");
    printf("RESULT: %d\n",result);

    return (0);
}
