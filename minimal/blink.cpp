int main()
{
    while(1){}
}

unsigned stack[512];

constexpr void *isr_table[] = {&stack[512], (void *)&main};