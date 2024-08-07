void main ()
{
    char personPlay;
    int botPlay; 
    botPlay = rand() % 3;
    // Rock = 1, Paper = 2, Scissors = 3
    printf("What play do you wanna make ?");
    scanf(" %c", &personPlay);
    switch (personPlay)
    {
    case 'R':
            if (botPlay == 1)
            {
                printf("Tie");
            }
            if (botPlay == 2)
            {
                printf("You Lose");
            }
            if (botPlay == 3)
            {
                printf("You Win");
            }
        break;
    case 'P':
            if (botPlay == 1)
            {
                printf("You Win");
            }
            if (botPlay == 2)
            {
                printf("Tie");
            }
            if (botPlay == 3)
            {
                printf("You Lose");
            }
        break;
    case 'S':
            if (botPlay == 1)
            {
                printf("Tie");
            }
            if (botPlay == 2)
            {
                printf("You Lose");
            }
            if (botPlay == 3)
            {
                printf("You Win");
            }            
        break;
    }
}