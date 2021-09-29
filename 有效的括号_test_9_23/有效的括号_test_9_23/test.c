#include <stdio.h>
#include <stdbool.h>

typedef char STDataType;

typedef struct Stack
{
    STDataType* data;
    int top;
    int capacity;
}ST;

void StackInit(ST* ps)
{
    assert(ps);

    ps->data = NULL;
    ps->top = 0;
    ps->capacity = 0;

}

void StackDestory(ST* ps)
{
    assert(ps);

    if (ps->data)
    {
        free(ps->data);
    }

    ps->data = NULL;
    ps->top = 0;
    ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
    assert(ps);


    if (ps->top == ps->capacity)
    {
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        STDataType* tmp = realloc(ps->data, sizeof(STDataType) * newcapacity);

        if (tmp == NULL)
        {
            printf("realloc fail\n");
            exit(-1);
        }
        ps->data = tmp;
        ps->capacity = newcapacity;
    }
    ps->data[ps->top] = x;
    ps->top++;
}
bool StackEmpty(ST* ps)
{
    assert(ps);

    return ps->top == 0;
}

void StackPop(ST* ps)
{
    assert(ps);
    assert(!StackEmpty(ps));

    --ps->top;
}



STDataType StackTop(ST* ps)
{
    assert(ps);
    assert(!StackEmpty(ps));

    return ps->data[ps->top - 1];
}

int StackSize(ST* ps)
{
    assert(ps);

    return ps->top;
}

bool isValid(char* s)
{
    ST st;
    StackInit(&st);
    bool match = true;
    while (*s)
    {
        if ((*s == '(') || (*s == '[') || (*s == '{'))
        {
            StackPush(&st, *s);
            ++s;
        }
        else
        {
            if (StackEmpty(&st))
            {
                match = false;
                break;
            }
            char ch = StackTop(&st);
            StackPop(&st);
            if ((*s == ']' && ch != '[')
                || (*s == ')' && ch != '(')
                || (*s == '}' && ch != '{'))
            {
                match = false;
                break;
            }
            else
            {
                ++s;

            }

        }



    }
    if (match == true)
    {
        match = StackEmpty(&st);
    }

    StackDestory(&st);

    return match;

}

int main(void)
{


	return 0;
}