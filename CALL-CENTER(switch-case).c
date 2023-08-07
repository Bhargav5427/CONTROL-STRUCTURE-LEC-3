#include <stdio.h>

int main() {
    int option,n,d,t;
   
    
    printf("Welcome to the Telecom Call Service!\n");
		
        printf("\nPlease select an option:\n");
        printf("1. Make a call\n");
        printf("2. make a call to service center\n");
        printf("3. check balance\n");
        printf("4. View call history\n\n");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("\nSelect the type of call:\n");
                printf("1. Voice call\n");
                printf("2. Video call\n");
                printf("3. Conference call\n");
                printf("Call type: ");
                scanf("%d", &t);
                
                switch (t) {
                    case 1:
                        printf("\nEnter the contact number: ");
                        scanf("%d", &n);
                        printf("\nEnter the call duration (in minutes): ");
                        scanf("%d", &d);
                        printf("\nMaking a voice call to %d for %d minutes...\n", n, d);
                        break;
                        
                    case 2:
                        printf("\nEnter the contact number: ");
                        scanf("%d", &n);
                        printf("\nEnter the call duration (in minutes): ");
                        scanf("%d", &d);
                        printf("\nMaking a video call to %d for %d minutes...\n", n, d);
                        break;
                        
                    case 3:
                        printf("\nEnter the contact number: ");
                        scanf("%d", &n);
                        printf("\nEnter the call duration (in minutes): ");
                        scanf("%d", &d);
                        printf("\nMaking a conference call to %d for %d minutes...\n", n, d);
                        break;
                        
                    default:
                        printf("\nInvalid call type selected.\n");
                        break;
                }
                break;
                
            case 2:
				printf("call forwarding to call center....") ;   
                break;
                
            case 3:
				printf("your balance is 345.00");   
                break;
                
            case 4:
				printf("Your call history has been sent via SMS") ;   
                break;   
            default:
                printf("\nInvalid option selected.\n");
                break;
        
    }
    
}
