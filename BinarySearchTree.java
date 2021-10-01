public class BinarySearchTree 
{ 
    class Node { 
        int key; 
        Node left, right; 
  
        public Node(int item) 
        { 
            key = item; 
            left = right = null; 
        } 
    }  
    Node root;
    public Node search(Node root, int key) 
    { 
        if (root==null || root.key==key) 
            return root;  
        if (root.key > key) 
            return search(root.left, key); 
        return search(root.right, key); 
    }
    public boolean searc(int key)
    {
    	Node temp = search(root,key);
    	if(temp!=null)
    		return true;
    	else
    		return false;
    }
    BinarySearchTree() 
    {  
        root = null;  
    } 
     
    void insert(int key) 
    { 
       root = insertRec(root, key); 
    } 

    Node insertRec(Node root, int key)
    { 
        if (root == null) 
        { 
            root = new Node(key); 
            return root; 
        }
        if (key < root.key) 
            root.left = insertRec(root.left, key); 
        else if (key > root.key) 
            root.right = insertRec(root.right, key); 
        return root; 
    }
    void inorder()  
    { 
       inorderRec(root); 
    } 
    void inorderRec(Node root) 
    { 
        if (root != null) 
        { 
            inorderRec(root.left); 
            System.out.println(root.key); 
            inorderRec(root.right); 
        } 
    }
    
}