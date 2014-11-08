#ifndef TARBALLLIB_H_
#define TARBALLLIB_H_

#include <cstdio>
#include <cstring>
#include <cerrno>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Tar {
    private:
	    bool _finished;
    
    protected:
	    std::FILE* out;
	    void _init(void* header);
	    void _checksum(void* header);
	    void _size(void* header,unsigned long fileSize);
	    void _filename(void* header,const char* filename);
	    void _endRecord(std::size_t len);
    
    public:
	    Tar(const char *filename);
	    virtual ~Tar();
	    void close();
	    void put(const char* filename,const std::string& s);
	    void put(const char* filename,const char* content);
	    void put(const char* filename,const char* content,std::size_t len);
	    void putFile(const char* filename,const char* nameInArchive);
};


#endif /* TARBALLLIB_H_ */