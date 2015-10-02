#ifndef QUEUE_UTILITIES
#define QUEUE_UTILITIES
/*
 *
 */
struct queue_node {
	struct queue_node *prev;
	mypthread_t *n;
	struct queue_node *next;
};

mypthread_t* return_head();

mypthread_t* return_tail();

void enqueue(mypthread_t* data);

#endif
