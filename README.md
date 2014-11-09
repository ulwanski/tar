class Tar()
===

Class to create TAR archives


<b>Example</b>

```c++

#include "tar/tar.h"

int main(int argc,char** argv){

	/* create the tar file */
	Tar tar("archive.tar");
	
	/* Create new files and add to tar archive */
	tar.put("item1.txt", "Hello World 1\n");
	tar.put("item2.txt", "Hello World 2\n");
	tar.put("item3.txt", "Hello World 3\n");

	/* Add existing files to tar archive*/
	tar.putFile("CompressLibs.ilk","CompressLibs.ilk");
	tar.putFile("CompressLibs.pdb","CompressLibs.pdb");
	
	/* Close the tar file*/
	tar.close();

	/* we're done */
	return EXIT_SUCCESS;;
}

```
