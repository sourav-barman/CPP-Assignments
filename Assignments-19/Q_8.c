/*
Given a list of words followed by two words, the task is to find the minimum distance 
between the given two words in the list of words. 
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} 
word1 = “the”, word2 = “quick”, OUTPUT : 0 )
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char words[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char w1[20] = "the", w2[20] = "quick";
     
    int i, prev = -1, min_dist = INT_MAX;

    for(i=0; i<5; i++) {
        if (strcmp(w1, words[i]) == 0 || strcmp(w2, words[i]) == 0) {
            if (prev != -1 && strcmp(words[i], words[prev]) != 0 && min_dist > i-prev)
                min_dist = i - prev;
            prev = i;
        }
    }

    if (min_dist != INT_MAX)
        printf("\nMin distance between the words \"%s\" and \"%s\" is %d", w1, w2, min_dist-1);

    return 0;
}