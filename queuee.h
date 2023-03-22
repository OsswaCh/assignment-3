#pragma once
class queuee
{
public: 
	int front;
	int rear;
	int counter;
	int maxSize;
	template 
	double* values;

private:
	queuee(int size = 10);
	bool Enqueue(double );
	bool Dequeue(double& );
	bool isEmpty(void);
	bool isFull(void);

};

