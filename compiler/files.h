#ifndef _files_H_
#define _files_H_

#include <stdio.h>

extern char executableFilename[FILENAME_MAX];
extern char saveCDir[FILENAME_MAX];

void deleteTmpDir(void);

FILE* openoutfile(char* infilename);
void closefile(FILE* thefile);

void openMakefile(char* srcfilename, char* compilerDir);
void closeMakefile(void);

char* createGDBFile(int argc, char* argv[]);

void makeAndCopyBinary(void);

#endif

