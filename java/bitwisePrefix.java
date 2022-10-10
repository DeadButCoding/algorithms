class Solution {
    public int[] findArray(int[] pref) {
        int[] arr = new int[pref.length];
        arr[0]=pref[0];
  
        int xor=arr[0];
        for(int i=1;i<pref.length;i++){
          
            arr[i]=xor^pref[i];
              xor=xor^arr[i];
        }
        return arr;
    }
}