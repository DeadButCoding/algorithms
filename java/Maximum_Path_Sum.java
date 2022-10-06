class Node{
	int data;
	Node left;
	Node right;
	Node(int data){
		this.data = data;
	}
}
class Summation{
	public int result=0;
}
public class Maximum_Path_Sum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Node root;
		root = new Node(-19);
		root.left = new Node(5);
		root.left.left = new Node(12);
		root.right = new Node(15);
		root.right.left = new Node(3);
		root.right.right = new Node(5);
		root.right.left.left = new Node(4);
		Summation s = new Summation();
		mPS(root, s);
		System.out.print(s.result);
	}
	static int mPS(Node root, Summation s) {
		if(root == null) {
			return 0;
		}
		int left = mPS(root.left,s);
		int right = mPS(root.right,s);
		int sum_all = Math.max(Math.max(right, left)+root.data,root.data);
		int max = Math.max(sum_all, right+left +root.data);
		s.result = Math.max(s.result, max);
		return max;
	}

}
