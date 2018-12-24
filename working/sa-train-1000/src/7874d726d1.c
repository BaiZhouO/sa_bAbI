#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_1[30];                       // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 58;                           // Tag.BODY
    if(entity_5 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 64;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_4 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER