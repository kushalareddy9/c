#include <stdio.h>

#define SIZE 5

void displaySeats(int seats[SIZE][SIZE]) {
    printf("Available tickets:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (seats[i][j] == 0) {
                printf("B\t"); 
            } else {
                printf("%d\t", seats[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int seats[SIZE][SIZE];
    int seatNumber, row, col;
    int totalSeats = SIZE * SIZE;           
    int bookedSeats = 0;

        int counter = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            seats[i][j] = counter++;
        }
    }

    while (1) {
        displaySeats(seats);

        if (bookedSeats == totalSeats) {
            printf("All seats are booked!\n");
            break;
        }

        printf("Enter the seat number to book or 0 to exit: ");
        scanf("%d", &seatNumber);

        if (seatNumber == 0) {
            printf("Exiting the booking system.\n");
            break;
        }

        if (seatNumber < 1 || seatNumber > 25) {
            printf("Invalid seat number! Please try again.\n");
            continue;
        }

        // Calculate row and column from seat number
        row = (seatNumber - 1) / SIZE;
        col = (seatNumber - 1) % SIZE;

        // Check if the seat is already booked
        if (seats[row][col] == 0) {
            printf("Seat %d is already booked! Please choose another seat.\n", seatNumber);
        } else {
            seats[row][col] = 0; // Mark as booked
            bookedSeats++;
            printf("Seat %d booked successfully!\n", seatNumber);
        }
    }

    return 0;
}

