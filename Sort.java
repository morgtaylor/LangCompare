import java.util.Random;

public class Sort {

    public static void sort(int array[]) {
        for (int i = 1; i < array.length; i++) {
            int key = array[i];
            int j = i - 1;

            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];
                j = j - 1;
            }
            array[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int n = 100;
        Random random = new Random();
        while (n <= 1500000) {
            int[] array = new int[n];
            for (int i = 0; i < n; i++) {
                array[i] = random.nextInt(10000);
            }

            long startTime = System.nanoTime();
            sort(array);
            long endTime = System.nanoTime();

            double totalTime = (endTime - startTime) / 1_000_000.0;
            System.out.println(totalTime);
            n *= 2;
        }
    }
}
