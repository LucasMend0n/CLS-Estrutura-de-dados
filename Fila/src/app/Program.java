package app;

import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class Program {

	public static void main(String[] args) {
		
		Queue<String> queue = new LinkedList<String>();
		
		queue.offer("Lucas");
		queue.offer("Julia");
		queue.offer("Giovanna");
		
		System.out.println(queue);
		
		queue.poll();
		
		System.out.println(queue);
		
		String element1 = queue.peek();
		
		System.out.println(element1);
		System.out.println(queue.element());
		
		Queue<Double> newQueue = new PriorityQueue<>(); 
		
		newQueue.offer(3.0); 
		newQueue.offer(5.0); 
		newQueue.offer(2.5); 
		newQueue.offer(3.25); 
		newQueue.offer(1.12); 
		newQueue.offer(0.67); 
		
		while (!newQueue.isEmpty()) {
			System.out.println(newQueue.poll());
			
		}

	}

}
