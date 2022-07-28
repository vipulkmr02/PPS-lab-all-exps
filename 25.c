#include <stdio.h>
#include <string.h>

int main()
{

	// Declare the file pointer
	FILE *filePointer;

	// Get the data to be written in file
	char dataToBeWritten[50] = "Hello World\n";
	filePointer = fopen("message.txt", "w");

	// Check if this filePointer is null
	// which maybe if the file does not exist
	if (filePointer == NULL)
		printf("File file failed to open.");

	else
	{

		printf("The file is now opened.\n");

		// Write the dataToBeWritten into the file
		if (strlen(dataToBeWritten) > 0)
			fputs(dataToBeWritten, filePointer);

		// Closing the file using fclose()
		fclose(filePointer);

		printf("Data successfully written in file file\n");
		printf("The file is now closed.\n");
	}
	return 0;
}
