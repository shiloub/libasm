#include "main.h"
#include "string.h"
#include "stdio.h"

int main(){

    printf("_____________________strlen_____________________");
    printf("\n");
    printf("\n");
    printf("ft_strlen with empty string:         %ld\n", ft_strlen(""));
    printf("strlen with empty string:            %ld\n", strlen(""));
    printf("ft_strlen with \"Hello World !\":      %ld\n", ft_strlen("Hello world !"));
    printf("strlen with \"Hello World !\":         %ld\n", strlen("Hello world !"));
    printf("ft_strlen with Lorem ipsum 500 char: %ld\n", ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque autor tellus ac dignissim ullamcorper. Phasellus id purus ex. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nullam aliquam ex venenatis orci luctus faucibus. Cras mattis sit amet lectus nec commodo. Nam egestas odio sed malesuada mattis. Nullam sit amet volutpat nisi, quis convallis risus. Donec consequat ipsum vitae massa consectetur, id mollis nisi viverra. Nam scelerisque elit a ex. "));
    printf("strlen with Lorem ipsum 500 char:    %ld\n", strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque autor tellus ac dignissim ullamcorper. Phasellus id purus ex. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nullam aliquam ex venenatis orci luctus faucibus. Cras mattis sit amet lectus nec commodo. Nam egestas odio sed malesuada mattis. Nullam sit amet volutpat nisi, quis convallis risus. Donec consequat ipsum vitae massa consectetur, id mollis nisi viverra. Nam scelerisque elit a ex. "));



    char *a = malloc(sizeof(char) * 10);
    char *b = "Hello";
    ft_strcpy(a, b);
    printf("%s\n", b);
    printf("%s\n", a);
    free(a);
   
    return (0);
}

