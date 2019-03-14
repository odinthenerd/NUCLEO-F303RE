int main()
{
    while (1)
    {
    }
}

unsigned stack[512];

constexpr void *isr_table[] __attribute((section(".isr_vector"))) = {stack + sizeof(stack) / sizeof(*stack),
                                                                     (void *)&main,
                                                                     (void *)&main,
                                                                     (void *)&main,
                                                                     (void *)&main,
                                                                     (void *)&main,
                                                                     (void *)&main,
                                                                     0,
                                                                     0,
                                                                     0,
                                                                     0,
                                                                     (void *)&main,
                                                                     (void *)&main,
                                                                     0};
