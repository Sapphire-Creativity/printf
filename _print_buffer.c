#include "main.h"
/**
 * writeToBuffer - write data to local buffer
 * @data: pointer to the input data
 * @length: length of the input data
 * Return:
 */

void writeToBuffer(const char *data, size_t length)
{
	static char buffer[BUFSIZE];
	static size_t index;

	size_t remaining = BUFSIZE - index;

	if (length >= remaining)
	{
		memcpy(buffer + index, data, remaining);

		write(1, buffer, BUFSIZE);

		memset(buffer, 0, BUFSIZE);
		length -= remaining;
		data += remaining;
		index = 0;
	}

	memcpy(buffer + index, data, length);
	index += length;
}
