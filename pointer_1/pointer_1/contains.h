#ifndef CONTAINS_H
#define CONTAINS_H


bool contains(const Comparable &x, BinaryNode *t) const
{
	if (t == nullptr)
		return false;
	else if (x < t->element)
		return contains(x, t->left);
	else if (t->element<x)
		return contains(x, t->right);
	else
		return true;
}



#endif 