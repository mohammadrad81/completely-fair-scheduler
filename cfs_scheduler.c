#include <stdio.h>
#include <stdlib.h>
#include "rb.h"
#include "rb_data.h"
#include "proc.h"

#define PROCESS_COUNT 10

void fill_process_array(process* process_array[PROCESS_COUNT]){
    for(int i = 0; i < PROCESS_COUNT; i++){
        process_array[i] = create_process(2000 + i, 100 + i, 5);
    }
}

int main(){
    process* processes[PROCESS_COUNT];
    fill_process_array(processes);
    printf("array filled\n");
}