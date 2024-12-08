#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message, const char *filename, int fd);

/**
 * main - Entry point du programme
 * @argc: Le nombre d'arguments
 * @argv: Un tableau des arguments
 *
 * Return: 0 si tout se passe bien
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL, -1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1], -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2], fd_from);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to", argv[2], fd_from);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", argv[1], fd_from);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd", NULL, fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", NULL, fd_to);

	return (0);
}

/**
 * error_exit - Gère les erreurs et quitte le programme
 * @code: Le code de sortie
 * @message: Le message d'erreur à afficher
 * @filename: Le nom du fichier concerné (optionnel)
 * @fd: Le descripteur de fichier à fermer (optionnel)
 */
void error_exit(int code, const char *message, const char *filename, int fd)
{
	if (fd != -1)
		close(fd);

	if (filename)
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	else
		dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}
