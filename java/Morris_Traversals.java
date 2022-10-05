class Node{
	int data;
	Node left;
	Node right;
	Node(int data){
		this.data = data;
	}
}
public class Morris_Traversals {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Node root;
		root = new Node(1);
		root.left = new Node(2);
		root.right = new Node(3);
		root.left.left = new Node(4);
		root.left.right = new Node(5);
		root.right.right = new Node(6);
		root.left.left.left = new Node(7);
		root.left.left.right = new Node(8);
		root.right.right.left = new Node(9);
		morrisTraversals(root);
	}
	static void morrisTraversals(Node root) {
		Node curr = root;
		while(curr != null) {
			if(curr.left == null) {
				System.out.print(curr.data+" ");
				curr = curr.right;
			}
			else {
				Node prev = curr.left;
				while(prev.right != null && prev.right != curr) {
					prev = prev.right;
				}
				if(prev.right == null) {
					prev.right = curr;
					curr = curr.left;
				}
				else {
					prev.right = null;
					System.out.print(curr.data+" ");
					curr = curr.right;
				}
			}
		}
	}
}
