#pragma once
typedef struct TreeNode {
	int data;
	struct TreeNode* lchild;
	struct TreeNode* rchild;
}TreeNode,*Tree;

void Create(Tree &root) {
	int ch;
	scanf("%d", &ch);
	if (ch == -1)
	{
		root = NULL;
	}
	else
	{
		root = (Tree)malloc(sizeof(TreeNode));
		root->data = ch;
		printf("input %d lchild\n", ch);
		Create(root->lchild);
		printf("input %d rchild\n", ch);
		Create(root->rchild);
	}
}

void loop(Tree& root) {
	if (root == NULL) {
		return ;
	}
	printf("%d", root->data);
	loop(root->lchild);
	loop(root->rchild);
}
