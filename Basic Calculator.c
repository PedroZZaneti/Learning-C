void main ()
{
    calculadora();
}

 int calculadora()
    {
        int numA;
        int numB;
        char operador;
        printf("Digite 2 numeros e depois a operação que deseja realizar");

        scanf("%d",&numA);
        scanf("%d",&numB);
        scanf("%c",&operador);

        switch(operador)
        {
            case '+': 
                printf(numA + numB);
                break;
            
            case '-':
                printf(numA - numB);
                break;
            
            case '*':
                printf(numA + numB);
                break;
            
            case '/':
                printf(numA + numB);
                break;
            
        }

        return 0;


    }