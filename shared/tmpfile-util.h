#pragma once

/*
 * Number of attempts to create a temporary file
*/
#define TEMP_CREATION_TRY_COUNT 10

int fopen_temporary_at(int dir_fd, const char *path, int o_flags, int o_mode, int *ret_fd,
		       char **ret_path);
