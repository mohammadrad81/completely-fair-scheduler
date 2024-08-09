#include "proc.h"

void create_process(int id, int vruntime, int residual_duration){
    process *p;

    p = (process *) malloc(sizeof(process));
    if(p != NULL){
        p->id = id;
        p->vruntime = vruntime;
        p->residual_duration = residual_duration;
    }
    return p;
}

void run_process(process p){
    printf("process %d is running...", p->id);
}

void terminate_process(process p){
    print("process %d terminated.", p->id);
}
