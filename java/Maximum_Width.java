import java.util.*;
class Node{
	int data;
	Node left;
	Node right;
	Node(int data){
		this.data = data;
	}
}
class Pair{
	Node node;
	int count ;
	Pair(Node node, int count){
		this.node = node;
		this.count = count;
	}
}
public class Maximum_Width {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Node root;
		root = new Node(1);
		root.left = new Node(2);
		root.left.left = new Node(3);
		root.left.left.left = new Node(5);
		root.right = new Node(2);
		root.right.right = new Node(4);
		root.right.right.right = new Node(5);
		int ans = countWidth(root);
		System.out.print("Maximum Width : "+ans);
	}
	static int countWidth(Node root) {
		if(root == null) {
			return 0;
		}
		Queue<Pair> q = new LinkedList<Pair>();
		q.offer(new Pair(root,0));
		int ans = Integer.MIN_VALUE;
		while(! q.isEmpty()) {
			int size = q.size();
			int min = q.peek().count;
			int fast =0, last=0;
			for(int i=0;i<size;i++) {
				int curr = q.peek().count - min;
				Node c_node = q.peek().node;
				if(i == 0) {
					fast = curr;
				}
				if(i == size-1) {
					last = curr;
				}
				q.poll();
				if(c_node.left != null) {
					q.offer(new Pair(c_node.left,curr*2+1));
				}
				if(c_node.right != null) {
					q.offer(new Pair(c_node.right,curr*2+2));
				}
			}
			ans = Math.max(ans, last-fast+1);
		}
		return ans;
	}
}
