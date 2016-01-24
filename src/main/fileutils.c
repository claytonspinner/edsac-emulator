#include "fileutils.h"

void loadCharArrayFromFile(const char *file, char *buffer) {
    if( !buffer ) fputs("memory alloc fails",stderr),exit(1);

    FILE *fp;
    long lSize;

    fp = fopen ( file , "rb" );
    if( !fp ) perror(file),exit(1);

    fseek( fp , 0L , SEEK_END);
    lSize = ftell( fp );
    rewind( fp );

    if( 1!=fread( buffer , lSize, 1 , fp) )
        fclose(fp),free(buffer),fputs("entire read fails",stderr),exit(1);

    fclose(fp);
}