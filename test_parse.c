#include "parse_csv.h"

#define DIR "python/TEST_OUT"
#define HEAD_PATH DIR "/HEADER.csv" 
#define PP_PATH  DIR "/POSTS.csv" 

void main(void)
{
	size_t file_size = 0;
	char * fbuff = buffer_in_file(HEAD_PATH, &file_size);
	LOG_I("Buffered in header of size %lu", file_size);

	csv_env_t * env = init_from_header(fbuff, file_size);
	ex_props_t * props = env->properties;

	LOG_I("In initialized header info, discerned %lu users, %lu posts", props->n_users, props->n_posts);

	free(fbuff);
	fbuff = NULL;

	fbuff = buffer_in_file(PP_PATH, &file_size);

	
}