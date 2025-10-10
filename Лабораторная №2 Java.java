// Создаем мультисписок
import java.util.*;

public class SimpleMultiList {
    public static void main(String[] args) {
        
        List<List<Integer>> multiList = new ArrayList<>();
        
        
        multiList.add(Arrays.asList(1, 2, 3));
        multiList.add(Arrays.asList(4, 5));
        multiList.add(Arrays.asList(6, 7, 8, 9));
        
        
        System.out.println("Мультисписок: " + multiList);
    }
}

//Создание очереди
import java.util.*;

public class SimpleQueue {
    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();
   
        queue.add("Аня");
        queue.add("Боря");
        queue.add("Витя");
        
        System.out.println("Очередь: " + queue);
    }
}

//Создание дека
import java.util.*;

public class SimpleDeque {
    public static void main(String[] args) {
        Deque<String> deque = new ArrayDeque<>();
        
        deque.addFirst("Первый");  
        deque.addLast("Второй");   
        deque.addFirst("Новый");   
        
        System.out.println("Дек: " + deque);
    }
}

//Создание приоритетной очереди
import java.util.*;

public class SimplePriorityQueue {
    public static void main(String[] args) {
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        
        pq.add(30);
        pq.add(10);
        pq.add(50);
        pq.add(20);
        
       
        System.out.println("Элементы по приоритету:");
        while (!pq.isEmpty()) {
            System.out.println(pq.poll());
        }
    }
}
