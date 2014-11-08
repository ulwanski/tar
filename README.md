tar class
===

Class to create TAR archives


<b>Example</b>

```c++

#include "tar/tar.h"
#include <iostream>
#include <fstream>

int main(int argc,char** argv){

	/* create the tar file */
	Tar tar("archive.tar");
	tar.put("item1.txt", "Hello World 1\n");
	tar.put("item2.txt", "Hello World 2\n");
	tar.put("item3.txt", "Hello World 3\n");
	tar.putFile("CompressLibs.ilk","CompressLibs.ilk");
	tar.putFile("CompressLibs.pdb","CompressLibs.pdb");
	
	tar.close();
	
	system("PAUSE");

	/* we're done */
	return EXIT_SUCCESS;;


	return 0;
}

```
