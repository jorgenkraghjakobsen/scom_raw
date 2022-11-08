#include <stdio.h>
#include <stdlib.h>

struct adr_symbol_map {
    int adr;
    char const* symbol;
};


int comp_adr_symbol( const void* key, const void* element)
{
    int key_id     = ((struct adr_symbol_map*) key)->adr;
    int element_id = ((struct adr_symbol_map*) element)->adr;

    if (key_id < element_id) return -1;
    if (key_id > element_id) return  1;
    return 0;
}

static struct adr_symbol_map symbol_map[] = {
    {0x0002*8+0, "core.pa.temp_over_drive"} ,
    {0x0003*8+1, "core.pa.temp_over_drive_e"},
    {0x0045, "message 100"},
    {32000, "message 32000"},
};

#define ELEMENTS_OF(x) (sizeof(x) / sizeof((x)[0]))
char const* get_symbol(int x)
{
    struct adr_symbol_map key = {x};
    struct adr_symbol_map* symbol = bsearch(&key, symbol_map, ELEMENTS_OF(symbol_map), sizeof(symbol_map[0]), comp_id_string);

    if (!symbol) return "invalid symbol address ";

    return symbol->symbol;
}

void test_symbol(int x)
{
    printf("The message for address %d: \"%s\"\n", x, get_symbol(x));
}

int main(void)
{
    test_symbol(0);
    test_symbol(3);
    test_symbol(100);
    test_symbol(-12);
    return 0;
}
