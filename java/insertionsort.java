package sorting;

public class InsertionSort {
    int[]data;
    public InsertionSort(int[] data){
        this.data=data;
    }
    public void insertionSort(){
        for(int i=1;i<data.length;i++){
            int key =data[i];
            int j=i-1;
            while(j>=0 && key < data[j]){
                data[j+1]=data[j];
                j--;
            }
            data[j+1]=key;
            System.out.println(" \nAfter "+ i + " pass");
            for(int k=0;k<data.length;k++){
                System.out.print(data[k]+" ");
            }
            
        }
    }
    public void display(){
        for(int i=0;i<data.length;i++){
            System.out.print(data[i] +" ");
        }
    }
    public static void main(String[] args){
        int[]data={2,9,4,1,5};
        InsertionSort sort =new InsertionSort(data);
        System.out.println("Array before Insertion Sort");
        sort.display();
        System.out.println("\n***********************");
        sort.insertionSort();
        System.out.println("\n***********************");
        System.out.println("\nArray after Insertion Sort");
        sort.display();

        
    }
}
