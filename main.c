#include "main.h"
#include "string.h"
#include "stdio.h"

int main(){

    printf("_____________________strlen_____________________");
    printf("\n");
    printf("\n");
    printf("ft_strlen with empty string:         %ld\n\n", ft_strlen(""));
    printf("strlen with empty string:            %ld\n\n", strlen(""));
    printf("ft_strlen with \"Hello World !\":      %ld\n\n", ft_strlen("Hello world !"));
    printf("strlen with \"Hello World !\":         %ld\n\n", strlen("Hello world !"));
    printf("ft_strlen with Lorem ipsum 500 char: %ld\n\n", ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque autor tellus ac dignissim ullamcorper. Phasellus id purus ex. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nullam aliquam ex venenatis orci luctus faucibus. Cras mattis sit amet lectus nec commodo. Nam egestas odio sed malesuada mattis. Nullam sit amet volutpat nisi, quis convallis risus. Donec consequat ipsum vitae massa consectetur, id mollis nisi viverra. Nam scelerisque elit a ex. "));
    printf("strlen with Lorem ipsum 500 char:    %ld\n\n", strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque autor tellus ac dignissim ullamcorper. Phasellus id purus ex. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nullam aliquam ex venenatis orci luctus faucibus. Cras mattis sit amet lectus nec commodo. Nam egestas odio sed malesuada mattis. Nullam sit amet volutpat nisi, quis convallis risus. Donec consequat ipsum vitae massa consectetur, id mollis nisi viverra. Nam scelerisque elit a ex. "));





    char *dest = malloc(sizeof(char) * 1000);

    printf("\n\n");
    printf("_____________________strcpy_____________________");
    printf("\n\n");
    printf("ft_strcpy with empty string: %s\n\n", ft_strcpy(dest, ""));
    printf("strcpy with empty string: %s\n\n", strcpy(dest, ""));
    printf("ft_strcpy with \"Hello World !\":  %s\n\n", ft_strcpy(dest, "Hello world !"));
    printf("strcpy with \"Hello World !\": %s\n\n", strcpy(dest, "Hello world !"));
    printf("ft_strcpy with Lorem ipsum 500 char: %s\n\n", ft_strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque autor tellus ac dignissim ullamcorper. Phasellus id purus ex. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nullam aliquam ex venenatis orci luctus faucibus. Cras mattis sit amet lectus nec commodo. Nam egestas odio sed malesuada mattis. Nullam sit amet volutpat nisi, quis convallis risus. Donec consequat ipsum vitae massa consectetur, id mollis nisi viverra. Nam scelerisque elit a ex. "));
    printf("strcpy with Lorem ipsum 500 char:    %s\n\n", strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque autor tellus ac dignissim ullamcorper. Phasellus id purus ex. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nullam aliquam ex venenatis orci luctus faucibus. Cras mattis sit amet lectus nec commodo. Nam egestas odio sed malesuada mattis. Nullam sit amet volutpat nisi, quis convallis risus. Donec consequat ipsum vitae massa consectetur, id mollis nisi viverra. Nam scelerisque elit a ex. "));


    free(dest);
   
    return (0);
}

