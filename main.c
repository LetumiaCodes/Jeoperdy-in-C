#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ask_question(int category) {
    int question_number = rand() % 3;
    int user_answer;
    int correct_answer;

    switch (category) {
        case 1:
            system("cls");
            if (question_number == 0) {
                printf("Question: ____ \n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            } else if (question_number == 1) {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            } else {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            }
            break;

        case 2:
            system("cls");
            if (question_number == 0) {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            } else if (question_number == 1) {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #;
            } else {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            }
            break;

        case 3:
            system("cls");
            if (question_number == 0) {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n");
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            } else if (question_number == 1) {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            } else {
                printf("Question: ____\n"); //type question in ____
                printf("1. ____\n2. ____\n3. ____\n"); //type options in ____
                printf("Your answer: ");
                scanf("%d", &user_answer);
                correct_answer = #; //change # to correct number
            }
            break;

        default:
            printf("Invalid category\n");
            return;
    }

    if (user_answer == correct_answer) {
        printf("Correct!\n");
    } else {
        printf("Wrong! The correct answer was option %d.\n", correct_answer);
    }
}

int main() {
    int choices;

    srand(time(NULL));

    printf("Welcome To Jeoperdy\n");
    printf("1. Play\n");
    printf("2. Exit\n");
    printf("Choose An Option: \n");
    scanf("%d", &choices);

    switch(choices) {
    case 1:
        system("cls");
        printf("1. History\n");
        printf("2. Math\n");
        printf("3. Science\n");
        printf("Choose An Option: ");
        scanf("%d", &choices);

        ask_question(choices);
        break;

    case 2:
        return 0;
    default:
        printf("choose valid option\n");
        break;
    }

    return 0;
}
