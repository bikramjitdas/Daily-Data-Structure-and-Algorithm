//just wrote the function here
int count(Node *root)
{
	if (root != NULL)
	{
		x = count(root->left);
		y = count(root->right);
		return (x + y + 1);
		//single line return 1+count(root->left)+count(root->right);
	}
}