#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encode.h"

// Decode the encoded string and return the original string
char* Decode(struct Node* root, char* encoded) {
    int i = 0, j = 0;
    int len = strlen(encoded);
    char* decoded = (char*) malloc((len + 1) * sizeof(char));  // allocate memory for decoded string
    struct Node* curr = root;

    while (i <= len) {
        // if current node is a leaf node, add its input character to decoded string and start from root again
        if (checkLeaf(curr)) {
            decoded[j++] = curr->input;
            curr = root;
        }
        // if current bit is 0, go to left child; if it's 1, go to right child
        if (encoded[i] == '0') {
            curr = curr->left;
        } else {
            curr = curr->right;
        }
        i++;
    }
    decoded[j] = '\0';  // add null character at end of decoded string
    return decoded;
}

