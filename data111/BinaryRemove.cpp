void remove(const Comparable &x,BinaryNode *&t)
{
	if(t == nullptr)
		return;//什么项都没有找到
	if(x<t->element)
		remove(x,t->left);
	else if(t->element <x)
		remove(x,t->right);
	else if(t->left !=nullptr && t->right !=nullptr)
	{
		t->element = findMin(t->right)->element;
		remove(t->element,t->right);
	}
	else
	{
		BinaryNode *oldNode = t;
		t= (t->left)?t->left:t->right;
		delete oldNode;
	}
}