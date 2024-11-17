/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function releases the memory allocated for the
 * members of the dog structure, including the structure itself.
 */
void free_dog(dog_t *d)
{
	free(d);
}