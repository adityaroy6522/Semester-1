#include <stdio.h>

// Define a union with 6 string members
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    printf("=== Display Present Address ===\n");

    // Let's assume your present address is your hostel address
    printf("Enter your present (hostel) address: ");
    fgets(addr.hostel_address, sizeof(addr.hostel_address), stdin);

    // Display the present address
    printf("\n--- Present Address ---\n");
    printf("Hostel Address: %s\n", addr.hostel_address);

    return 0;
}
