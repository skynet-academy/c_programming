#include <stdio.h>


int main(){
    char text[] = "Lorem ipsum dolor sit amet(, consectetur (adipiscing elit. ())Nunc (nunc metus, \"hendrerit\" eu mollis ultricies, \"vehicula sit amet elit. Mauris auctor erat tellus, ut interdum diam posuere finibus. Ut vitae tortor ((((id felis semper)) vehicula). Morbi at ante "" consectetur "" lorem luctus tristique eget non neque. Nullam dapibus dolor quis dui semper, sit amet faucibus lectus lobortis. Proin vel quam ut ipsum posuere ornare ac aliquet risus. Quisque sagittis neque at sapien ultrices, eget euismod orci pellentesque. Duis metus nunc, facilisis et vestibulum et, bibendum non nisi. Morbi placerat velit tempus velit eleifend venenatis. Aliquam ultrices porta iaculis. Praesent dapibus hendrerit metus, nec rutrum ante consectetur eu. ";
    int i;
    while(text[i] != '\0'){
        printf("%c", text[i]);
        if(text[i] == ' ')
            printf("\n");
        ++i;
    }
}
