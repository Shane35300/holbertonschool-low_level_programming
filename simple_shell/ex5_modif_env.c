#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _setenv(const char *name, const char *value, int overwrite)
{
	if (name == NULL || value == NULL)
	return (-1);

	if (variable_exists(name) == 1)
	{
		if (overwrite != 0)
		{
			update_variable(name, value);
		}
		return (0);
	}
	else
	{
		add_variable(name, value);
		return (0);
	}
}
int variable_exists(const char *name)
{
	int i;
	/*on vérifie si la variable existe déjà*/
	for (i = 0 ; environ[i] != NULL ; i++)
	{
		if (strncmp(name, environ[i], strlen(name)) == 0)
		return (1);
	}
	return (0);
}
int update_variable(const char *name, const char *value)
{
	int i;
	char *new_variable;
	/*modification de la variable existante*/
	for (i = 0 ; environ[i] != NULL ; i++)
	{
		if (strncmp(name, environ[i], strlen(name)) == 0)
		{
			new_variable = malloc(strlen(name) + strlen(value) + 2);

			if (new_variable == NULL)
			return (-1);

			sprintf(new_variable, "%s=%s", name, value);
			free(environ[i]);
			environ[i] = new_variable;
		}
	}
	return (0);
}
int add_variable(const char *name, const char *value)
{
	char **new_environ;
	size_t environ_size;
	int i;

	environ_size = 0;

	for (i = 0 ; environ[i] != NULL ; i++)
	environ_size++;

	new_environ = malloc((environ_size + 2) * sizeof(char *));

	if (new_environ == NULL)
	return (-1);

	for (i = 0 ; environ[i] != NULL ; i++)
		new_environ[i] = environ[i];

	new_environ[environ_size] = malloc(strlen(name) + strlen(value) + 2);

	if (new_environ[environ_size] == NULL)
	{
		free(new_environ);
		return (-1);
	}
	sprintf(new_environ[environ_size], "%s=%s", name, value);
	new_environ[environ_size + 1] = NULL;
	environ = new_environ;
	return (0);
}
