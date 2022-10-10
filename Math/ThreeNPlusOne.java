import java.util.Scanner;

class ThreeNPlusOne {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        int j = sc.nextInt();

        System.out.println(maxCycle(i, j));
    }

    public static int maxCycle(int i, int j) {
        int max = cycleLen(i);
        for (int k = i + 1; k <= j; k++) {
            int currentCycle = cycleLen(k);
            if (currentCycle > max) {
                max = currentCycle;
            }
        }
        return max;
    }

    public static int cycleLen(int n) {
        int steps = 1;
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
            steps++;
        }
        return steps;
    }

}