#include <stdio.h>
#include <stdio.h>
/**            
 * main - Entry Point                                                   
 * Return: 0, means always ok
 */
int main(void)
{
	int fd, sd, td, fod;

	for (fd = 0; fd < 9; fd++)
	{
		for (sd = 0; sd < 7; sd++)
		{
			for (td = 0; td < 9; td++)
			{
				for (fod = 0; fod < 9; fod++)
				{
					putchar(fod + '0');
					putchar(sd + '0');
					putchar(",");
					putchar(" ");
					putchar(td + '0');
					putchar(fod + '0');
				}
			}
		}
	}
	return (0);
}
