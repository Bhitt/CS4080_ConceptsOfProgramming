/*
 * Author: Branden Hitt
 * Purpose: perform set intersection and difference for comparison with python
 */
package java_set_intersection_and_difference;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author bhitt
 */
public class Java_Set_Intersection_and_Difference {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //initializa sets with values
        Set<Integer> s1 = new HashSet<>();
        s1.addAll(Arrays.asList(new Integer[]{1,5,3,6,7,8}));
        Set<Integer> s2 = new HashSet<>();
        s2.addAll(Arrays.asList(new Integer[]{2,5,6,9,7}));
        //find intersection
        Set<Integer> intersection = new HashSet<>(s1);
        intersection.retainAll(s2);
        System.out.println("Intersection: "+ intersection);
        //find difference
        Set<Integer> difference = new HashSet<>(s1);
        difference.removeAll(s2);
        System.out.println("Difference: "+difference);
    }
    
}
