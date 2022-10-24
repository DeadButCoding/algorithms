public class Main {
    public static void main(String[] args) {
        int n = 4, i, j;
        for (i = 0; i <= n; i++){
            for (j = 0; j <= n - 1; j++){
                System.out.print(" ");
            }
            for (j = 0; j <= i; j++){
                System.out.print(" "+factorial(i)/(factorial(i - j) * factorial(j)));
            }
            System.out.println();
        }
    }

    static public int factorial(int i){
        if(i == 0) return 1;
        return i * factorial(i - 1);
    }
}