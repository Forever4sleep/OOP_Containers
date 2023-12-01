#pragma once
class queue_node
{
public:
	queue_node(double d);
	queue_node* next;
	queue_node* prev;
	double data;
};