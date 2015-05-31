package leaks.MultiWayBranchRefute;
public class FakeMap {

    private final static Object[] EMPTY_TABLE = new Object[1];
    private int size;
    private int capacity;
    private Object[] table;

    public FakeMap() {
	table = EMPTY_TABLE;
	size = 0; 
	capacity = -1;
    }

    public Object put(String i, Object value) {
	if (size < capacity) {
	    doubleCapacity();
	} else if (size == capacity) {
	    foo();
	} else {
	    bar();
	}
	table[size] = value;
	return null;
    }

    private void doubleCapacity() {
	capacity = size * 2;
	table = new Object[capacity];
    }

    public void foo() {
	table = new Object[capacity];
    }

    public void bar() {
	table = new Object[capacity];
    }
}