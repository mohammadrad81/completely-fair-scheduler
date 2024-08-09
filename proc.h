
struct typedef{
    int id;
    int vruntime;
    int residual_duration;
} process;

void create_process(int id, int vruntime, int residual_duration);
void run_process(process p);
void terminate_process(process p);
