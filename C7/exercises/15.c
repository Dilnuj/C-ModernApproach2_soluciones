#include <stdio.h>
#include <stdint.h>
int main(void)
{
	typedef int8_t Int8;
	typedef int16_t Int16;
	typedef int32_t Int32;

	printf("Int8: %zu, Int16: %zu, Int32: %zu\n",
		sizeof(Int8),sizeof(Int16),sizeof(Int32));
	return 0;
	
}
