#pragma once
typedef struct TreeNode {
	int data;
	struct TreeNode* lchild, * rchild;
}TreeNode, * Tree;

void Create(Tree& T, int ch[], int& i) {//数组—先序遍历创建二叉树
	if (ch[i] == -1) {
		T = NULL;
		return;
	}
	T = (Tree)malloc(sizeof(TreeNode));
	T->data = ch[i];
	Create(T->lchild, ch, ++i);
	Create(T->rchild, ch, ++i);

}
int getdepth(Tree T) {
	int ld, rd;
	if (T == NULL) {
		return 0;
	}
	else
	{
		ld = getdepth(T->lchild);
		rd = getdepth(T->rchild);
		return (ld > rd ? ld : rd)+1;
	}
}

void preloop(Tree& root) {
	if (root != NULL) {
		printf("%d", root->data);
		preloop(root->lchild);
		preloop(root->rchild);
	}
}
void midloop(Tree& root) {
	if (root != NULL) {
		midloop(root->lchild);
		printf("%d", root->data);
		midloop(root->rchild);
	}

}
void endloop(Tree& root) {
	if (root != NULL) {
		endloop(root->lchild);
		endloop(root->rchild);
		printf("%d", root->data);
	}

}