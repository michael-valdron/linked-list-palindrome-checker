#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "linkedlist.h"
#define MAX_SIZE 5

bool is_panlindrome(ListNode*);

int main(int argc, char const *argv[]) {

    return 0;
}

bool is_panlindrome(ListNode* head) {
    int k;
    char char_array[MAX_SIZE];
    char palindrome_array[MAX_SIZE];
    ListNode* current = head;

    for (int i = 0; current->next_node != NULL && i < MAX_SIZE; i++) {
        char_array[i] = current->val;
        current = current->next_node;
    }

    k = 0;
    for (int i = (MAX_SIZE - 1); i >= 0; i--) {
        if (char_array[i] != NULL) {
            palindrome_array[k] = char_array[i];
            k++;
        }
    }

    if (char_array == palindrome_array) {
        return true;
    } else {
        return false;
    }
}
