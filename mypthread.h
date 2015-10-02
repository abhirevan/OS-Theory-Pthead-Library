#ifndef MYPTHREAD
#define MYPTHREAD

/**
 * Defines the state of the user thread
 */
enum mypthread_state {
	PS_ACTIVE, PS_BLOCKED, PS_DEAD
};

/**
 *
 */
struct mypthread_node {
	int th_id;
	enum mypthread_state state;
};
typedef struct mypthread_node mypthread_t;

/*
 void mypthread_init(int kt);

 int mypthread_create(mypthread_t *thread, void *(*start_routine)(void *),
 void *arg);

 void mythread_exit(void);

 int sched_yield(void);

 int mythread_cond_init(mypthread_cond_t *cond,
 const mypthread_condattr_t *attr);

 int mythread_cond_broadcast(mypthread_cond_t *cond);

 int mythread_cond_signal(mypthread_cond_t *cond);

 int mythread_cond_wait(mythread_cond_t *cond, mythread_mutex_t *mutex);

 int mythread_mutex_init(mythread_mutex_t *mutex,
 const mythread_mutexattr_t *mutexattr);

 int mythread_mutex_lock(mythread_mutex_t *mutex);

 int mythread_mutex_unlock(mythread_mutex_t *mutex);
 */

#endif
