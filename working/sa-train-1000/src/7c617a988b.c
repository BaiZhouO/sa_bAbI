#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_4 = 42;                           // Tag.BODY
    char entity_1[32];                       // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if(entity_2 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 12;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER