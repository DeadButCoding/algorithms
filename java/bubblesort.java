package sorting;

public class BubbleSort {
    int[] data;

    public BubbleSort(int[] data) {
        this.data = data;
    }

    public void bubbleSort() {
        for (int i = 0; i < data.length - 1; i++) {
            for (int j = 0; j < data.length - i - 1; j++) {
                if (data[j] > data[j + 1]) {
                    int temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
            System.out.println("\nAfter" + (i + 1) + "pass");
            for (int k = 0; k < data.length; k++) {
                System.out.print(data[k] + " ");
            }
        }
    }

    public void display() {
        for (int i = 0; i < data.length; i++) {
            System.out.print(data[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] data = {2, 9, 4, 1, 5};
        BubbleSort sort = new BubbleSort(data);
        System.out.println("Array before Bubble Sort");
        sort.display();
        System.out.println("\n**********************************");
        sort.bubbleSort();
        System.out.println("\n**********************************");
        System.out.println("Array after Buddle sort");
        sort.display();
}
}
