public static void printArray(int[] a) {
    System.out.print("{" + a[0]);
    for (int i = 1; i &lt; a.length; i++) {
        System.out.print(", " + a[i]);
    }
    System.out.println("}");
}