#include <stdio.h>

int main() {
    int a[100], n, i, choice, pos, value, found;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    do {
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Search");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                if (n >= 100) {
                    printf("Array is full\n");
                    break;
                }

                printf("Enter position and value: ");
                scanf("%d%d", &pos, &value);

                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position\n");
                    break;
                }

                for (i = n; i >= pos; i--) {
                    a[i] = a[i - 1];
                }

                a[pos - 1] = value;
                n++;

                printf("Element inserted\n");
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n) {
                    printf("Invalid position\n");
                    break;
                }

                for (i = pos - 1; i < n - 1; i++) {
                    a[i] = a[i + 1];
                }

                n--;

                printf("Element deleted\n");
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (a[i] == value) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Element not found\n");
                }
                break;

            case 5:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
