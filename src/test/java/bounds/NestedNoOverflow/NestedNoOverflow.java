package bounds.NestedNoOverflow;
public class NestedNoOverflow {

    public static void main(String[] args) {
	foo(new int[3], new int[2]);
    }

    public static void foo(int[] buf1, int[] buf2) {
	for (int i = 0; i < buf1.length; i++) {
	    for (int j = 0; j < buf2.length; j++) { 
		buf1[i] = buf1[i] + buf2[j];
	    }
	}
    }

}