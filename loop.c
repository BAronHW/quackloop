#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clearTerminal(){
    system("clear");
}
void animate(){
    const char *frame_array[] = {
        "    __\n<(o )___\n (    \"  )\n  `----' \n",
        "    __\n<(o )___\n (    \"  ) Quack!\n  `----' \n",
        "    __\n<(o )___\n (    \"  )\n  `----' \n",
        "    __\n<(o )___\n (    \"  ) Hi May\n  `----' \n",
        "    __\n<(o )___\n (    \"  )\n  `----' \n",
        };
    int index = 0;
    int num_of_frames = sizeof(frame_array)/sizeof(frame_array[0]);
    while (1)
    {
        clearTerminal();
        printf("%s",frame_array[index]);
        if(index == (num_of_frames-1)){
            index = 0;
        }
        index++;
        sleep(1);
    }
}
int main(){
    animate();
    return 0;
}