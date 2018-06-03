#ifndef CONSTS_H
#define CONSTS_H
#include "supergraph.h"

//TODO: Define operator keywords

//Recursive query operations
//All should have void* f(void*) signatures

/*
Find the location of an id from within an array
Returns id
*/
void* find_idx(void* bst_argsp);

/*
Copy by value to a new heap alloced struct
*/
args_t * heap_copy(args_t * from, user* new_user, post * new_post);

/*
Find all the reposts of a particular post,
takes argument of args type
*/
void* find_all_reposts_r(void* argsp);



result * find_original_wrapper(post* posts, size_t count, uint64_t post_id, query_helper* helper);


#endif
