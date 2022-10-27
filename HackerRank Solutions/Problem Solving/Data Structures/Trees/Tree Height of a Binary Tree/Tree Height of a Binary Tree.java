import java.util.*;
import java.io.*;

class Node {
    Node left;
    Node right;
    int data;
    
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}

class Solution {

	/*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	public static int height(Node root) {
      	// Write your code here.
        if(root == null){
            return -1;
        }
        int heightleft = height(root.left);
        int heightright = height(root.right);
        if(heightleft > heightright){
            return heightleft + 1;
        } else{
            return heightright + 1;
        }
    }

	public static Node insert(Node root, int data) {