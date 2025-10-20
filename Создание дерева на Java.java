//Создание дерева на Java
import java.util.List;
import java.util.ArrayList;

public class Node {
    public int val;
    public List<Node> children;
    public Node(int x) {
        val = x;
        children = new ArrayList<>();
    }
}
//Создание графа на Java
import java.util.*;

// Вариант 1: List of Lists
List<List<Integer>> graph = Arrays.asList(
    Arrays.asList(1, 2),
    Arrays.asList(0, 3),
    Arrays.asList(0),
    Arrays.asList(1)
);

List<Integer>[] graph = new List[4];
