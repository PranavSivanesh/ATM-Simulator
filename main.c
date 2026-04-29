#include <stdio.h>

//Function prototypes
void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome to the ATM Simulator! ***\n");

    do{
        printf("\nChoose one of the options!\n");
        printf("1. Check Balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
    
    switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the ATM simulator!\n");
                printf("Bye Bye!\n");
                break;
            default:
                printf("\nEnter a valid option!");
        }
    }while (choice != 4);

    return 0;
}

//Functions
void checkBalance(float balance){
    printf("\nYou current balance is $%.2f\n", balance);
}
float deposit(){
    float amount = 0.0f;
    printf("\nEnter the amount you wish to deposit in your account: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("Please enter a valid amount!\n");
        return 0.0f;
    }else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }

}
float withdraw(float balance){
    float amount = 0.0f;
    printf("\nEnter the amount you wish to withdraw from your account: $");
    scanf("%f", &amount);

    if (amount < 1){
        printf("Please enter a valid amount!");
        return 0.0f;
    }else if(amount > balance){
        printf("Insufficient Account Balance!\n");
        printf("Current Balance: $%.2f\n", balance);
        return 0.0f;
    }else {
        printf("Successfully Withdrew $%.2f\n", amount);
        return amount;
    }
}
