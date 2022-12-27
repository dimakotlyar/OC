#include "stdio.h"
#include "unistd.h"

int main() {
    int pid2 = fork();
    if(pid2 == 0){
        int pid3 = fork();

        if(pid3 == 0){
            sleep(60);
        }
        sleep(60);
    }
    int pid4 = fork();
    if(pid4 == 0)
    {
        int pid5 = fork();
        if(pid5 == 0){
            sleep(60);
        }

        int pid6 = fork();
        if(pid6 == 0){
            sleep(60);
        }
        sleep(60);
    }
    int pid7 = fork();
    if(pid7 ==0){
        sleep(60);
    }
    sleep(60);

    return 0;
}
