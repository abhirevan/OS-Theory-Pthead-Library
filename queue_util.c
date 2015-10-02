struct queue_node* head = NULL;
struct queue_node* tail = NULL;

mypthread_t* return_head() {
	return (head->n);
}

mypthread_t* return_tail() {
	return (tail->n);
}

void create_queue_node() {
	queue_node temp = (struct queue_node *) malloc(1 * sizeof(struct queue_node));
	temp->prev = NULL;
	temp->next = NULL;
	numOfNodes++;
}
