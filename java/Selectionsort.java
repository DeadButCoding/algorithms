package sorting;

public class SelectionSort {
    int[]data;
    public SelectionSort(int[]data){
        this.data=data;
    }
    public void SelectionSort(){
        int temp,min=0,i,j;
        for(i=0;i<data.length-1;i++){
            for(j=i+1;j<data.length;j++){
                if(data[i]>data[j]){
                    min=j;
                }
            }
            temp=data[i];
            data[i]=data[min];
            data[min]=temp;
            System.out.println("\nAfter"+(i+1)+"pass");
            for(int k=0;k<data.length;k++){
                System.out.print(data[k]+" ");
            }
        }
    }
    public void display(){
        for(int i=0;i<data.length;i++){
            System.out.print(data[i]+" ");
        }
    }
    public static void main(String[] args){
        int[] data={2,9,4,1,5};
        SelectionSort sort=new SelectionSort(data);
        System.out.println("Array before selection Sort");
        sort.display();
        System.out.println("\n****************************");
        sort.SelectionSort();
        System.out.println("\n****************************");
        System.out.println("Array after Selection Sort");
        sort.display();
    }
    
}
